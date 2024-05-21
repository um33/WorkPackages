// Implement a control program for a robot. The program asks for the robot's starting position (x, y coordinates,
// ranging between 0-99) and for a string of characters 'm' and 't', where m stands for move one step in current
// direction and t for turn of direction as below.
// move: means that the robot takes one step in the current direction.
// turn: means that the robot turns 90 degrees clockwise.

#include <stdio.h>    
#include <string.h>
enum DIRECTION {N,O,S,W};
typedef struct {
int xpos;
int ypos;
enum DIRECTION dir;
} ROBOT;

void move(ROBOT *robot){
    if(robot->dir == N){
        robot->ypos++;
    }else if(robot->dir == S){
        robot->ypos--;
    }else if(robot->dir == O){
        robot->xpos++;
    }else if(robot->dir == W){
        robot->xpos--;
    }
}
void turn(ROBOT *robot){
    if(robot->dir == N){
        robot->dir == O;
    }else if(robot->dir == O){
        robot->dir == S;
    }else if(robot->dir == S){
        robot->dir == W;
    }else if(robot->dir == W){
        robot->dir == N;
    }
}


int main() {
    ROBOT robot;
    char buffer[32];

    do {
        // Set robot to default direction
        robot.dir = 'N';

        // Get starting coordinates
        printf("Enter starting coordinates in the format x,y (q to exit): ");
        scanf("%5s", buffer);

        // Quit if user enters 'q'
        if (strcmp(buffer, "q") == 0) {
            break;
        }

        // Check if input is in the format x,y
        int formatCheck = sscanf(buffer, "%d,%d", &robot.xpos, &robot.ypos);
        if (formatCheck != 2) {
            printf("Invalid format. Try again.\n");
            continue;
        }

        // Check if coordinates are valid
        if (robot.xpos < 0 || robot.xpos > 100 || robot.ypos < 0 || robot.ypos > 100) {
            printf("Invalid coordinates. Try again.\n");
            continue;
        }

        // Get commands from user
        printf("Enter commands (m for move, t for turn): ");
        scanf("%31s", buffer);

        // Execute commands
        for (int i = 0; i < strlen(buffer); i++) {
            if (buffer[i] == 'm') {
                move(&robot);
            } else if (buffer[i] == 't') {
                turn(&robot);
            }
        }

        // Print robot position and boundary
        printf("\n------------------------------\n");
        printf("The robot is now at %d,%d\n\n", robot.xpos, robot.ypos);

    } while (strcmp(buffer, "q") != 0);

    printf("Goodbye!\n");
    return 0;
}
