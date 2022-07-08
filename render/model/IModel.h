#pragma once

#include <vector>
#include "Vector3.hpp"

class IModel
{
protected:
	std::vector<Vector3f> vertexs;
	std::vector<std::vector<int>> faces;

public:
	IModel() = default;
	virtual ~IModel() = 0;
	std::vector<Vector3f> GetVertexs() { return vertexs; };
	std::vector<std::vector<int>> GetFaces() { return faces; };
};