#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>

#include "OBJModel.h"

OBJModel::OBJModel(const char *filename)
{
    std::ifstream in;
    in.open(filename, std::ifstream::in);
    if (in.fail())
    {
        return;
    }
    std::string line;
    while (!in.eof())
    {
        std::getline(in, line);
        std::istringstream iss(line.c_str());
        char trash;
        if (!line.compare(0, 2, "v "))
        {
            iss >> trash;
            Vector3f v;
            iss >> v.x;
            iss >> v.y;
            iss >> v.z;
            vertexs.push_back(v);
        }
        else if (!line.compare(0, 2, "f "))
        {
            std::vector<int> f;
            int itrash, idx;
            iss >> trash;
            while (iss >> idx >> trash >> itrash >> trash >> itrash)
            {
                // 因为obj文件索引从1开始
                idx--;
                f.push_back(idx);
            }
            faces.push_back(f);
        }
    }
    std::cerr << "# v# " << vertexs.size() << " f# " << faces.size() << std::endl;
}
