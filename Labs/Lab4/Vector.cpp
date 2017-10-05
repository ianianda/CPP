#include "Vector.h"

namespace lab4
{
	Vector::Vector(float x, float y, float z)
	{
		mX = x;
		mY = y;
		mZ = z;
	}

	Vector::Vector(void)
	{
	}

	Vector Vector::operator+(const Vector& other) const
	{
		// implement vector addition here
		Vector sum;
		sum.mX = mX + other.mX;
		sum.mY = mY + other.mY;
		sum.mZ = mZ + other.mZ;

		return sum;
	}

	Vector Vector::operator-(const Vector& other) const
	{
		// implement vector subtraction here
		Vector difference;
		difference.mX = mX - other.mX;
		difference.mY = mY - other.mY;
		difference.mZ = mZ - other.mZ;

		return difference;
	}

	float Vector::operator*(const Vector& other) const
	{
		// implement dot product here
		float result = 0;
		Vector dotProduct;
		dotProduct.mX = mX * other.mX;
		dotProduct.mY = mY * other.mY;
		dotProduct.mZ = mZ * other.mZ;
		result = dotProduct.mX + dotProduct.mY + dotProduct.mZ;
		return result;
	}

	Vector Vector::operator*(float operand) const
	{
		// implement scalar multiplication of vector
		Vector scalarProduct;
		scalarProduct.mX = (int)mX * operand;
		scalarProduct.mY = (int)mY * operand;
		scalarProduct.mZ = (int)mZ * operand;

		return scalarProduct;
	}

	float Vector::operator[](unsigned int index) const
	{
		if (index == 0)
		{
			return mX;
		}
		else if (index == 1)
		{
			return mY;
		}
		else
		{
			return mZ;
		}
	}

	float Vector::GetX() const
	{
		return mX; // return x component
	}
	float Vector::GetY() const
	{
		return mY; // return x component
	}
	float Vector::GetZ() const
	{
		return mZ; // return x component
	}

	Vector operator*(float operand, const Vector& v)
	{
		// implement scalar multiplication of vector
		Vector scalarProduct2;
		scalarProduct2.mX = operand * v.mX;
		scalarProduct2.mY = operand * v.mY;
		scalarProduct2.mZ = operand * v.mZ;

		return scalarProduct2;
	}

	Vector::~Vector()
	{
	}
}