#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> file_list;
    std::ifstream fin("D:\\Program Files\\MVTec\\HALCON-20.11-Steady\\examples\\solution_guide\\3d_vision\\hand_eye\\stationarycam_robot_pose_00.dat", std::ios::in);
    if (!fin.good()) {
        std::cout << "Open failed." << std::endl;
        exit(-1);
    }
    char line[1024] = { 0 };

    while (fin.getline(line, sizeof(line))) {
        file_list.push_back(line);
    }
    fin.close();
}
