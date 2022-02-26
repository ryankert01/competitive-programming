#include<iostream>
#include<vector>
#include<string>
#include<cstring>
using namespace std;

struct Coordinate{
    int x;
    int y;
};

struct Robot{
    int direction;
    Coordinate coordinate;
};

char Direction[4] = {'N', 'W', 'S', 'E'};// default left direction
// N = 0
// W = 1
// S = 2
// E = 3

bool robotSame(Coordinate& a, Coordinate& b){
    if(a.x == b.x && a.y == b.y) return true;
    else return false;
}

int main(){
    Coordinate limit;
    vector<Robot>forbidden;
    cin >> limit.x >> limit.y;
    Robot robot;
    int flag = 0;
    
    char robotDir;
    while(cin >> robot.coordinate.x >> robot.coordinate.y >> robotDir){
        for(int i = 0; i < 4; i++) if(robotDir == Direction[i]) robot.direction = i;
        string instructions;
        cin.ignore();
        getline(cin, instructions);
        Robot tempRobot = robot;
        int lost = 0;
        for(int i = 0; i < instructions.size(); i++){
            tempRobot = robot;
            if(instructions[i] == 'R'){
                tempRobot.direction--;
                if(tempRobot.direction == -1) tempRobot.direction = 3;
            }
            else if(instructions[i] == 'L'){
                tempRobot.direction++;
                if(tempRobot.direction == 4) tempRobot.direction = 0;
            }
            else if(instructions[i] = 'F'){
                flag = 0;
                for(int j = 0; j < forbidden.size(); j++){
                    if(robotSame(tempRobot.coordinate, forbidden[j].coordinate))flag = 1;
                }
                if(tempRobot.direction == 0) tempRobot.coordinate.y++;
                else if(tempRobot.direction == 1) tempRobot.coordinate.x--;
                else if(tempRobot.direction == 2) tempRobot.coordinate.y--;
                else if(tempRobot.direction == 3) tempRobot.coordinate.x++;
                if(flag == 1){
                    flag = 0;
                    if(tempRobot.coordinate.x > limit.x || tempRobot.coordinate.y > limit.y){
                        continue;
                    } 
                    if(tempRobot.coordinate.x < 0 || tempRobot.coordinate.y < 0){
                        continue;
                    }
                    
                } 
                if(tempRobot.coordinate.x > limit.x || tempRobot.coordinate.y > limit.y){
                    forbidden.push_back(robot);
                    lost = 1;
                    break;
                    
                } 
                if(tempRobot.coordinate.x < 0 || tempRobot.coordinate.y < 0){
                    forbidden.push_back(robot);
                    lost = 1;
                    break;
                    
                } 
            }
            robot = tempRobot;
            

        }
        cout << robot.coordinate.x << " " << robot.coordinate.y << " " << Direction[robot.direction];
        if(lost) cout << " LOST";
        cout << endl;
    }
    
}