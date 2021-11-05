#pragma once
#include "Object.h"


class Sphere final : public Object
{
public:
	Sphere(const Elite::FPoint3& position, Material* pMaterial, float radius);
	virtual ~Sphere() = default;

	virtual bool Hit(const Ray& ray, HitRecord& hitRecord) const override;

	void SetRadius(float radius);
	float GetRadius() const;

private:
	float m_Radius;
	float m_InvertedRadius;
};

