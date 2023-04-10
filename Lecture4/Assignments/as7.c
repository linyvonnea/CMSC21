#include <stdio.h>
#define ROW 9
#define COL 9

// initialize matrix
int main() {
    int road_networks[ROW][COL] = {
        {1, 1, 0, 0, 0, 1, 0, 0, 0},
        {1, 1, 1, 0, 0, 0, 0, 0, 0},
        {0, 1, 1, 0, 1, 1, 0, 0, 1},
        {0, 0, 0, 1, 1, 0, 0, 0, 0},
        {0, 0, 0, 1, 1, 0, 0, 0, 0},
        {1, 0, 1, 0, 0, 1, 0, 0, 0},
        {1, 0, 0, 1, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 1, 1},
        {0, 0, 0, 0, 0, 0, 0, 1, 1}
    };

    // print matrix and add btackets for c and d
    printf("Adjacency matrix:\n");
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            if (i == 2 || j == 2 || i == 3 || j == 3) {
                printf("[%d] ", road_networks[i][j]);
            } else {
                printf("%3d ", road_networks[i][j]);
            }
        }
        printf("\n");
    }

    // prompts user for origin point
    int origin;
    printf("Which point are you located? 0- A, 1 -B, 2-C...8 -I?\n");
    scanf("%d", &origin);

    printf("At point: %c\n", 'A' + origin);

    // if origin point happens to be exactly at c and d, print it is a charging station
    for (int i = 0; i < ROW; i++) {
      if (origin == 2){
        printf("C is a charging station.");
        break;
      }
      else if (origin ==3){
        printf("D is a charging station");
        break;
      }
      // if it is at other points, check if there is a direct path to the charging station
      else if (i == origin){
        for (int j = i; j <= COL; j++){
          if (road_networks[j][2]==1){
            printf("point: C arrived to charging station");
            break;
          }
          else if (road_networks[j][3]==1){
            printf("point: D arrived to charging station");
            break;
          }
          else {
            continue;
          }

        }
      }
    }
  return 0;
}

// using switch cases
#include <stdio.h>
#define ROW 9
#define COL 9

// initialize matrix
int main() {
    int road_networks[ROW][COL] = {
        {1, 1, 0, 0, 0, 1, 0, 0, 0},
        {1, 1, 1, 0, 0, 0, 0, 0, 0},
        {0, 1, 1, 0, 1, 1, 0, 0, 1},
        {0, 0, 0, 1, 1, 0, 0, 0, 0},
        {0, 0, 0, 1, 1, 0, 0, 0, 0},
        {1, 0, 1, 0, 0, 1, 0, 0, 0},
        {1, 0, 0, 1, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 1, 1},
        {0, 0, 0, 0, 0, 0, 0, 1, 1}
    };

    // print matrix and add btackets for c and d
    printf("Adjacency matrix:\n");
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            if (i == 2 || j == 2 || i == 3 || j == 3) {
                printf("[%d] ", road_networks[i][j]);
            } else {
                printf("%3d ", road_networks[i][j]);
            }
        }
        printf("\n");
    }
  int origin;
  printf("Which point are you located? 0- A, 1 -B, 2-C...7 -H?\n");
  scanf("%d", &origin);
  switch(origin){
    case 0: case 1: case 5:
    printf("\nAt point: %c\npoint: C arrived to charging station", 'A' + origin);
    break;
    case 2:
    printf("\nAt point: %c\npoint: C is a charging station", 'A' + origin);
    break;
    case 3:
    printf("\n At point: D\npoint: D is a charging station", 'A' + origin);
    break;
    case 4: case 6:
    printf("\nAt point: E\npoint: D arrived to charging station", 'A' + origin);
    break;
    case 7:
    printf("\nAt point: H\npoint: No nearest charging station", 'A' + origin);
    break;
    default:
    printf("Choose only from Stations 1-7");
    break;
  }
  return 0;
}
