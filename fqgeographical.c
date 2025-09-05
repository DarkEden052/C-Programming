#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_CELLS 100
#define MAX_FREQUENCIES 50

// Structure to represent a cell tower
typedef struct {
    int id;
    double x, y;        // Coordinates
    int frequency;      // Assigned frequency
    int cluster_id;     // Cluster ID for reuse pattern
} CellTower;

// Structure to represent the network
typedef struct {
    CellTower cells[MAX_CELLS];
    int num_cells;
    int num_frequencies;
    int reuse_factor;   // K value (1, 3, 4, 7, 9, 12, etc.)
} CellularNetwork;

// Function to calculate distance between two points
double calculate_distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Function to initialize the network
void initialize_network(CellularNetwork *network, int reuse_factor, int num_frequencies) {
    network->num_cells = 0;
    network->reuse_factor = reuse_factor;
    network->num_frequencies = num_frequencies;
}

// Function to add a cell to the network
void add_cell(CellularNetwork *network, double x, double y) {
    if (network->num_cells < MAX_CELLS) {
        network->cells[network->num_cells].id = network->num_cells;
        network->cells[network->num_cells].x = x;
        network->cells[network->num_cells].y = y;
        network->cells[network->num_cells].frequency = -1; // Not assigned yet
        network->cells[network->num_cells].cluster_id = -1;
        network->num_cells++;
    }
}

// Function to assign clusters using hexagonal pattern
void assign_clusters(CellularNetwork *network) {
    // Simple cluster assignment based on position
    for (int i = 0; i < network->num_cells; i++) {
        // This is a simplified cluster assignment
        // In real implementation, you'd use more complex geometric calculations
        network->cells[i].cluster_id = i % network->reuse_factor;
    }
}

// Function to assign frequencies with reuse pattern
void assign_frequencies(CellularNetwork *network) {
    assign_clusters(network);

    for (int i = 0; i < network->num_cells; i++) {
        // Assign frequency based on cluster ID
        network->cells[i].frequency = network->cells[i].cluster_id % network->num_frequencies;
    }
}

// Function to check for interference between two cells
int check_interference(CellularNetwork *network, int cell1, int cell2, double min_distance) {
    double distance = calculate_distance(
        network->cells[cell1].x, network->cells[cell1].y,
        network->cells[cell2].x, network->cells[cell2].y
    );

    // Check if cells use same frequency and are too close
    if (network->cells[cell1].frequency == network->cells[cell2].frequency &&
        distance < min_distance) {
        return 1; // Interference detected
    }

    return 0; // No interference
}

// Function to display network information
void display_network(CellularNetwork *network) {
    printf("\nCellular Network Configuration:\n");
    printf("Reuse Factor (K): %d\n", network->reuse_factor);
    printf("Number of Frequencies: %d\n", network->num_frequencies);
    printf("Number of Cells: %d\n", network->num_cells);
    printf("\nCell Details:\n");
    printf("ID\tX\tY\tCluster\tFrequency\n");
    printf("----------------------------------------\n");

    for (int i = 0; i < network->num_cells; i++) {
        printf("%d\t%.1f\t%.1f\t%d\t%d\n",
               network->cells[i].id,
               network->cells[i].x,
               network->cells[i].y,
               network->cells[i].cluster_id,
               network->cells[i].frequency);
    }
}

// Function to simulate interference check
void simulate_interference_check(CellularNetwork *network, double min_distance) {
    printf("\nInterference Check (Minimum Distance: %.1f units):\n", min_distance);
    int interference_count = 0;

    for (int i = 0; i < network->num_cells; i++) {
        for (int j = i + 1; j < network->num_cells; j++) {
            if (check_interference(network, i, j, min_distance)) {
                printf("Interference between Cell %d and Cell %d\n", i, j);
                interference_count++;
            }
        }
    }

    if (interference_count == 0) {
        printf("No interference detected with current frequency assignment.\n");
    }
}

int main() {
    CellularNetwork network;
    int reuse_factor, num_frequencies;
    double area_width, area_height;
    int num_cells;

    printf("=== Frequency Reuse Simulation ===\n\n");

    // Get user input
    printf("Enter geographical area width: ");
    scanf("%lf", &area_width);

    printf("Enter geographical area height: ");
    scanf("%lf", &area_height);

    printf("Enter number of cells to deploy: ");
    scanf("%d", &num_cells);

    printf("Enter reuse factor (K) - typically 1, 3, 4, 7, 9, 12: ");
    scanf("%d", &reuse_factor);

    printf("Enter number of available frequencies: ");
    scanf("%d", &num_frequencies);

    // Initialize network
    initialize_network(&network, reuse_factor, num_frequencies);

    // Add cells with random positions (for simulation)
    printf("\nDeploying %d cells in area %.1f x %.1f...\n",
           num_cells, area_width, area_height);

    srand(time(NULL));
    for (int i = 0; i < num_cells; i++) {
        double x = (double)rand() / RAND_MAX * area_width;
        double y = (double)rand() / RAND_MAX * area_height;
        add_cell(&network, x, y);
    }

    // Assign frequencies using reuse pattern
    assign_frequencies(&network);

    // Display network configuration
    display_network(&network);

    // Check for interference
    double min_distance = sqrt(area_width * area_height / num_cells) * 0.5;
    simulate_interference_check(&network, min_distance);

    // Calculate efficiency metrics
    printf("\nEfficiency Metrics:\n");
    printf("Frequency Reuse Efficiency: %.2f\n",
           (float)network.num_cells / (float)network.num_frequencies);
    printf("Spectrum Utilization: %.2f%%\n",
           (float)network.num_frequencies * 100.0 / (float)network.num_cells);

    return 0;
}
