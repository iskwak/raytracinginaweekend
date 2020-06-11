#ifndef VEC3_H
#define VEC3_H

#include <cmath>
#include <iostream>

using std::sqrt;

class vec3 {
    public:
        vec3() : e{0, 0, 0} {}
        vec3(float e0, float e1, float e2) : e{e0, e1, e2} {}

        float x() const { return e[0]; }
        float y() const { return e[1]; }
        float z() const { return e[2]; }

        vec3 operator~() const { return vec3(-e[0], -e[1], -e[2]); }
        float operator[](int i) const { return e[i]; }
        float& operator[](int i) { return e[i]; }

        vec3& operator+=(const vec3 &v);
        vec3& operator*=(const float t);
        vec3& operator/=(const float t);

        float length() const;
        float length_squared() const;
    public:
        float e[3];
};

// Type aliases for vec3
using point3 = vec3; // 3D point
using color = vec3; // rgb color


#endif
