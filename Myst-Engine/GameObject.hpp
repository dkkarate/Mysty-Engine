#pragma once

#include "Vector2D.hpp"
#include <vector>

namespace mysty {
	class GameObject {
	public:
		GameObject(GameObject* parent, v2df position = v2df(0.0f, 0.0f), float rotation = 0.0f, v2df scale = v2df(1.0f, 1.0f));
		GameObject(v2df position, float rotation = 0.0f, v2df scale = v2df(1.0f, 1.0f));
		GameObject();
		v2df getLocalPosition() { return _localPosition; }
		v2df getGlobalPosition();
	private:
		static std::vector<GameObject*> DrawableObjects;
		GameObject* _parent;
		v2df _localPosition;
		float _rotation;
		v2df _scale;
	};
}