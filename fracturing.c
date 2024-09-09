/*
 * fracturing.c
 * 
 * Author: Joshua Harry
 * UCFID: 5179055
 *
 * Description:
 * This program calculates various properties of a circle based on two input points
 * representing the endpoints of its diameter. The program is structured using multiple
 * functions to promote code modularity and adhere to the DRY principle.
 */

#include <stdio.h>
#include <math.h>

// Define PI as a preprocessor directive
#define PI 3.14159

// Function Prototypes
int main(int argc, char **argv);
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

// Helper Function Prototypes
double askForUserInput(const char *prompt);
void readAndPrintPoints(double *x1, double *y1, double *x2, double *y2);

/*
 * askForUserInput
 * Prompts the user with the provided prompt and returns the entered double value.
 */
double askForUserInput(const char *prompt) {
    double value;
    printf("%s", prompt);
    while (scanf("%lf", &value) != 1) {
        // Clear invalid input
        while (getchar() != '\n');
        printf("Invalid input. Please enter a numeric value: ");
    }
    return value;
}

/*
 * readAndPrintPoints
 * Reads two points from the user and prints them in the required format.
 */
void readAndPrintPoints(double *x1, double *y1, double *x2, double *y2) {
    *x1 = askForUserInput("Enter x1: ");
    *y1 = askForUserInput("Enter y1: ");
    *x2 = askForUserInput("Enter x2: ");
    *y2 = askForUserInput("Enter y2: ");

    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", *x1, *y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", *x2, *y2);
}

/*
 * calculateDistance
 * Calculates the distance between two points entered by the user.
 * Outputs the points and the distance.
 * Returns the distance as a double.
 */
double calculateDistance() {
    double x1, y1, x2, y2, distance;

    readAndPrintPoints(&x1, &y1, &x2, &y2);

    // Calculate distance using the Euclidean formula
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("The distance between the two points is %.2lf\n", distance);

    return distance;
}

/*
 * calculatePerimeter
 * Calculates the perimeter of the circle based on the distance (diameter).
 * Outputs the points and the perimeter.
 * Returns a difficulty rating as a double.
 */
double calculatePerimeter() {
    double x1, y1, x2, y2, distance, perimeter;

    readAndPrintPoints(&x1, &y1, &x2, &y2);

    // Calculate distance
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Calculate perimeter (circumference) = PI * diameter
    perimeter = PI * distance;
    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);

    // Difficulty rating
    double difficulty = 2.0; // Example rating
    return difficulty;
}

/*
 * calculateArea
 * Calculates the area of the circle based on the distance (diameter).
 * Outputs the points and the area.
 * Returns a difficulty rating as a double.
 */
double calculateArea() {
    double x1, y1, x2, y2, distance, radius, area;

    readAndPrintPoints(&x1, &y1, &x2, &y2);

    // Calculate distance
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Calculate radius
    radius = distance / 2.0;

    // Calculate area = PI * r^2
    area = PI * pow(radius, 2);
    printf("The area of the city encompassed by your request is %.2lf\n", area);

    // Difficulty rating
    double difficulty = 2.5; // Example rating
    return difficulty;
}

/*
 * calculateWidth
 * Calculates the width of the city (equivalent to the diameter).
 * Outputs the points and the width.
 * Returns a difficulty rating as a double.
 */
double calculateWidth() {
    double x1, y1, x2, y2, distance;

    readAndPrintPoints(&x1, &y1, &x2, &y2);

    // Calculate distance (diameter)
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Width is equivalent to diameter
    printf("The width of the city encompassed by your request is %.2lf\n", distance);

    // Difficulty rating
    double difficulty = 1.5; // Example rating
    return difficulty;
}

/*
 * calculateHeight
 * Calculates the height of the city (equivalent to the diameter).
 * Outputs the points and the height.
 * Returns a difficulty rating as a double.
 */
double calculateHeight() {
    double x1, y1, x2, y2, distance;

    readAndPrintPoints(&x1, &y1, &x2, &y2);

    // Calculate distance (diameter)
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Height is equivalent to diameter
    printf("The height of the city encompassed by your request is %.2lf\n", distance);

    // Difficulty rating
    double difficulty = 1.8; // Example rating
    return difficulty;
}

/*
 * main
 * Entry point of the program. Calls all required functions.
 * Returns 0 to indicate successful execution.
 */
int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}
