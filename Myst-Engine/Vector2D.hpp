#pragma once

#include <math.h>

class v2d {
public:
	v2d(int x, int y) : _x(x), _y(y) {}
	v2d() : _x(0), _y(0) {}
	int getX() { return _x; }
	int getY() { return _y; }
	void setX(int value) { _x = value; }
	void setY(int value) { _y = value; }
	float magnitude() { return sqrtf(powf((float)_x, 2.0f) + powf((float)_y, 2.0f)); }
	v2d operator=(v2d other);
	v2d operator+(v2d other);
	v2d operator-(v2d other);
	v2d operator*(v2d other);
	v2d operator*(int other);
	v2d operator/(v2d other);
	v2d operator/(int value);
private:
	int _x;
	int _y;
};

class v2df {
public:
	v2df(float x, float y) : _x(x), _y(y) {}
	v2df() : _x(0), _y(0) {}
	float getX() { return _x; }
	float getY() { return _y; }
	void setX(float value) { _x = value; }
	void setY(float value) { _y = value; }
	float magnitude() { return sqrtf(powf(_x, 2.0f) + powf(_y, 2.0f)); }
	v2df operator=(v2df other);
	v2df operator+(v2df other);
	v2df operator-(v2df other);
	v2df operator*(v2df other);
	v2df operator*(float other);
	v2df operator/(v2df other);
private:
	float _x;
	float _y;
};