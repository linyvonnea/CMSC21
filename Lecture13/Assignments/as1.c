#include <stdio.h>
#include <math.h>

struct Line {
    // nested structure representing a point with x and y coordinates
    struct Point { // a point (x, y) has x and y values
        float x;
        float y;
    } point1, point2;

    struct Point midpoint; // midpoint has 2 values, x and y
    float slope;
    float distance;
};

// function to calculate the slope of a line
float calculateSlope(struct Line line);

// function to calculate the midpoint of a line
struct Point calculateMidpoint(struct Line line);

// function to calculate the distance between two points
float calculateDistance(struct Line line);

// function to print the slope-intercept form of a line
void printSlopeInterceptForm(struct Line line);

int main() {
    struct Line line; //declare variable line

    printf("Enter x and y for point1: ");
    scanf("%f %f", &(line.point1.x), &(line.point1.y)); // store point1's x and y values

    printf("Enter x and y for point2: ");
    scanf("%f %f", &(line.point2.x), &(line.point2.y)); // store point2's x and y values

    // calculate the midpoint, slope, and distance
    line.midpoint = calculateMidpoint(line); // call fuction and store value to midpoint variable
    line.slope = calculateSlope(line); // call fuction and store value to slope variable
    line.distance = calculateDistance(line); // call fuction and store value to distance variable

    printf("Slope: %f\n", line.slope);
    printf("Midpoint: %f %f\n", line.midpoint.x, line.midpoint.y);
    printf("Distance between two points: %f\n", line.distance);
    printSlopeInterceptForm(line);

    return 0;
}

// slope function def
float calculateSlope(struct Line line) { // takes struct and line variable as argument
    return (line.point2.y - line.point1.y) / (line.point2.x - line.point1.x); //change in y / change in x
}

// midpoint function def
struct Point calculateMidpoint(struct Line line) {
    struct Point midpoint;
    midpoint.x = (line.point1.x + line.point2.x) / 2; // midpoint of x values stored to midpoint.x
    midpoint.y = (line.point1.y + line.point2.y) / 2; // midpoint of y values stored to midpoint.y
    return midpoint;
}

// distance function def
float calculateDistance(struct Line line) {
    float dx = line.point2.x - line.point1.x; // distance of x
    float dy = line.point2.y - line.point1.y; // distance of y
    return sqrt(dx * dx + dy * dy); // squared
}

// slope intercept function def
void printSlopeInterceptForm(struct Line line) {
    float slope = line.slope;
    float intercept = line.point1.y - slope * line.point1.x; // y=mx+b is b = y-mx
    printf("y = %fx + (%f)\n", slope, intercept);
}
