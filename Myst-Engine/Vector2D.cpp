#include "Vector2D.hpp"

v2d v2d::operator=(v2d other) {
	_x = other.getX();
	_y = other.getY();
	return *this;
}

v2d v2d::operator+(v2d other) {
	_x += other.getX();
	_y += other.getY();
	return *this;
}

v2d v2d::operator-(v2d other) {
	_x -= other.getX();
	_y -= other.getY();
	return *this;
}

v2d v2d::operator*(v2d other) {
	_x *= other.getX();
	_y *= other.getY();
	return *this;
}

v2d operator*(int value, v2d obj) {
	obj.setX(obj.getX() * value);
	obj.setY(obj.getY() * value);
	return obj;
}

v2d v2d::operator*(int other) {
	_x *= other;
	_y *= other;
	return *this;
}

v2d v2d::operator/(v2d other) {
	_x = static_cast<int>(_x / other.getX());
	_y = static_cast<int>(_y / other.getY());
	return *this;
}

v2df v2df::operator=(v2df other) {
	_x = other.getX();
	_y = other.getY();
	return *this;
}

v2df v2df::operator+(v2df other)
{
	_x += other.getX();
	_y += other.getY();
	return *this;
}

v2df v2df::operator-(v2df other)
{
	_x -= other.getX();
	_y -= other.getY();
	return *this;
}

v2df v2df::operator*(v2df other)
{
	_x *= other.getX();
	_y *= other.getY();
	return *this;
}

v2df v2df::operator*(float value)
{
	_x *= value;
	_y *= value;
	return *this;
}

v2df operator*(float value, v2df obj) {
	obj.setX(obj.getX() * value);
	obj.setY(obj.getY() * value);
	return obj;
}