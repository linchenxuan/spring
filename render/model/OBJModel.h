#pragma once

#include "IModel.h"

class OBJModel : public IModel
{
public:
    OBJModel(const char *filename);
    ~OBJModel(){};
};
