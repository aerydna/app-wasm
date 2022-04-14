#include <vector>

namespace Terrain
{

    struct Vector3
    {
        float x;
        float y;
        float z;
    };

    struct Vector4
    {
        float x;
        float y;
        float z;
        float w;
    };

    int *generateRandomVertices(int vertexCount);
}