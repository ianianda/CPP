#pragma once

namespace lab4
{
	class Vector
	{
	public:
		Vector(float x, float y, float z); //two constructors
		Vector(void);
		virtual ~Vector();

		Vector operator+(const Vector& other) const;
		Vector operator-(const Vector& other) const;
		float operator*(const Vector& other) const;
		Vector operator*(float operand) const;
		float operator[](unsigned int index) const;

		float GetX() const;//getters
		float GetY() const;
		float GetZ() const;

		friend Vector operator*(float operand, const Vector& v);
	private:
		// private variables here
		float mX;
		float mY;
		float mZ;
		float sum;
	};
}