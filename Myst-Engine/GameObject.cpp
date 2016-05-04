#include "GameObject.hpp"

namespace mysty {
	std::vector<GameObject*> GameObject::DrawableObjects = std::vector<GameObject*>();

	GameObject::GameObject(GameObject* parent, v2df position, float rotation, v2df scale) :
		_parent(parent), _localPosition(position), _rotation(rotation), _scale(scale)
	{
		DrawableObjects.push_back(this);
	}
	GameObject::GameObject(v2df position, float rotation, v2df scale) :
		_parent(nullptr), _localPosition(position), _rotation(rotation), _scale(scale)
	{
		DrawableObjects.push_back(this);
	}
	GameObject::GameObject() :
		_parent(nullptr), _localPosition(v2df(0.0f, 0.0f)), _rotation(0.0f), _scale(v2df(0.0f, 0.0f))
	{
		DrawableObjects.push_back(this);
	}
	v2df GameObject::getGlobalPosition() {
		if (_parent == nullptr)
			return _localPosition;
		else
			return _localPosition + _parent->getGlobalPosition();
	}
}