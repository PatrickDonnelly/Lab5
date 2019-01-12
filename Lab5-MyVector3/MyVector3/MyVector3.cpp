  /// <summary>
/// Vector 3 class
/// Patrick Donnelly
/// </summary>
#include "MyVector3.h"
#include <string.h>
#define PI           3.14159265358979323846

/// <summary>
/// Default constructor set all 3 values to zero
/// </summary>
MyVector3::MyVector3() :
	x{ 0.0 },
	y{ 0.0 },
	z{ 0.0 }
{
}

/// <summary>
/// default destructor
/// nothing to release because we only have
/// primitive type data
/// </summary>
MyVector3::~MyVector3()
{
}

/// <summary>
/// 
/// </summary>
/// <returns>the vector as a string surrounded by square brackets and separated by commas</returns>
std::string MyVector3::toString()
{
	const std::string output = "[" + std::to_string(x) + "," + std::to_string(y) + "," + std::to_string(z) + "]";
	return output;	
}

MyVector3::MyVector3(double t_x, double t_y, double t_z)
{
	x = t_x;
	y = t_y;
	z = t_z;
}

/// <summary>
/// create a vector 3 from an sf::vector3f
/// </summary>
/// <param name="t_sfVector">input vector</param>
MyVector3::MyVector3(sf::Vector3f t_sfVector)
{
	x = static_cast<double>( t_sfVector.x);
	y = static_cast<double>(t_sfVector.y);
	z = static_cast<double>(t_sfVector.z);
}

MyVector3::operator sf::Vector2u()
{
	return sf::Vector2u{};
}

MyVector3 MyVector3::operator+(const MyVector3 t_right) const
{
	// add each component. x+x.y+y,z+z for answer

	MyVector3 add{ x, y, z};

	add.x += t_right.x;
	add.y += t_right.y;
	add.z += t_right.z;
	
	return add;
}

MyVector3 MyVector3::operator-(const MyVector3 t_right) const
{
	// minus each component x-x,y-y,z-z for new vector answer

	MyVector3 minus{ x, y, z };

	minus.x -= t_right.x;
	minus.y -= t_right.y;
	minus.z -= t_right.z;

	return minus;
}

MyVector3 MyVector3::operator*(const double t_scalar) const
{
	// multiply each component by a scaler to get the new vector
	MyVector3 multiply{ x, y, z };

	multiply.x *= t_scalar;
	multiply.y *= t_scalar;
	multiply.z *= t_scalar;

	return multiply;
}

MyVector3 MyVector3::operator/(const double t_divisor) const
{
	// divide all components by a divosor
	MyVector3 division{ x, y, z };

	division.x /= t_divisor; //check for 0
	division.y /= t_divisor;
	division.z /= t_divisor;

	return division;
}

MyVector3 MyVector3::operator+=(const MyVector3 t_right)
{
	// add each component
	MyVector3 plusEquals{ x, y, z };

	plusEquals.x += t_right.x;
	plusEquals.y += t_right.y;
	plusEquals.z += t_right.z;


	return plusEquals;
}

MyVector3 MyVector3::operator-=(const MyVector3 t_right)
{
	//subtract each componenet
	MyVector3 minusEquals{ x, y, z };

	minusEquals.x -= t_right.x;
	minusEquals.y -= t_right.y;
	minusEquals.z -= t_right.z;

	return minusEquals;
}

bool MyVector3::operator==(const MyVector3 t_right) const
{
	MyVector3 equality{ x, y, z };

	if (equality.x == t_right.x && equality.y == t_right.y && equality.z == t_right.z)
	{ 
		return true;
	}
	else
	{
		return false;
	}
}

bool MyVector3::operator!=(const MyVector3 t_right) const
{
	MyVector3 notEqual{ x, y, z };

	if (notEqual.x != t_right.x || notEqual.y != t_right.y || notEqual.z != t_right.z)
	{
		return true;
	}
	else
	{
		return false; 
	}
}

MyVector3 MyVector3::operator-()
{
	// negate all components
	MyVector3 negateVector{ x,y,z };

	negateVector.x *= -1;
	negateVector.y *= -1;
	negateVector.z *= -1;

	return negateVector;
}

void MyVector3::reverseX()
{
	MyVector3 negateVector{ x,y,z };

	negateVector.x *= -1;

}

void MyVector3::reverseY()
{
	MyVector3 negateVector{ x,y,z };

	negateVector.y *= -1;

}

double MyVector3::length() const
{
	double sumOfSquares = 0.0;
	double length = 0.0;

	sumOfSquares = lengthSquared();

	length = sqrt(sumOfSquares);

	return length;
}

double MyVector3::lengthSquared() const
{
	double sumOfSquares = 0.0;
	MyVector3 lengthSquare{ x, y, z };

	sumOfSquares = x*x + y * y + z * z;

	return sumOfSquares;
}

double MyVector3::dot(const MyVector3 t_other) const
{
	MyVector3 dotProduct{ x, y, z };

	const float dotResult = (dotProduct.x * t_other.x) + (dotProduct.y * t_other.y) + (dotProduct.z * t_other.z);
	return dotResult;
}

MyVector3 MyVector3::crossProduct(const MyVector3 t_other) const // x2 y2 z2
{
	//  ( y*c - z*b, z*a - x*c, x*b - y*a )
	MyVector3 cross{ x, y, z };
	MyVector3 resultVector{ 0.0,0.0,0.0 };
	resultVector.x =  (cross.y*t_other.z) - (cross.z*t_other.y);
	resultVector.y -= (cross.z*t_other.x) - (cross.x*t_other.z);
	resultVector.z -= (cross.x*t_other.y) - (cross.y*t_other.x);

	return resultVector;
}

double MyVector3::angleBetween(const MyVector3 t_other) const
{
	//x*a + y*b + z*c = |v| * |w| * cos(phi)   # cos(phi) = (x*a + y * b + z * c) / (| v | *| w | )
	
	MyVector3 angleVector{ x,y,z };
	double dotProd = 0.0;
	double length = 0.0;
	double lengthTwo = 0.0;
	//double angleInDegrees = 0.0;

	//length = angleVector.length();
	//lengthTwo = t_other.length();
	//dotProd = dot(angleVector);

	//angleInDegrees = ;
	
	/*float cosine = dot(((angleVector.unit) , (t_other.unit)));

	if (cosine > 1.0f)
	{
		cosine = 1.0f;
	}
	if (cosine < -1.0f)
	{
		cosine = -1.0f;
	}
	const float angleInRadians = std::acos(cosine);
	const float angleInDegrees = angleInRadians * 180.0f / PI;*/
	return 0;
}

MyVector3 MyVector3::unit() const
{
	// each component divided by length (which is that componet squared added together and the square root obtained)
	MyVector3 unitVector{ x,y,z };
	double length = 0.0;

	length = unitVector.length();

	unitVector.x = unitVector.x / length;
	unitVector.y = unitVector.y / length;
	unitVector.z = unitVector.z / length;

	return unitVector;
}

void MyVector3::normalise()
{


}

MyVector3 MyVector3::projection(const MyVector3 t_onto) const
{

	return MyVector3();
}

MyVector3 MyVector3::rejection(const MyVector3 t_onto) const
{

	return MyVector3();
}