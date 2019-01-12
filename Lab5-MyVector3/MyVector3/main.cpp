/// <summary>
/// Patrick Donnelly
/// estimate
/// time spent
/// issues
/// 
/// </summary>
#ifdef _DEBUG 
#pragma comment(lib,"sfml-graphics-d.lib") 
#pragma comment(lib,"sfml-audio-d.lib") 
#pragma comment(lib,"sfml-system-d.lib") 
#pragma comment(lib,"sfml-window-d.lib") 
#pragma comment(lib,"sfml-network-d.lib") 
#else 
#pragma comment(lib,"sfml-graphics.lib") 
#pragma comment(lib,"sfml-audio.lib") 
#pragma comment(lib,"sfml-system.lib") 
#pragma comment(lib,"sfml-window.lib") 
#pragma comment(lib,"sfml-network.lib") 
#endif 


#include "MyVector3.h"
#include <SFML\Graphics.hpp>
#include <string>



// you need more comments for Pete's sake

int main()
{
	MyVector3 vectorOne{};
	MyVector3 vectorTwo{};
	MyVector3 result{};
	double length = 0.0;
	double lengthSquared = 0.0;
	double dotResult = 0.0;
	const double scaler = 5.0;
	const double divisor = 2.0;
	std::string equalityCheck = " ";

	std::cout << "[0.0     ,0.0     ,0.0     ]" << std::endl;
	std::cout << vectorOne.toString() << std::endl;
	std::cout << "Null / default constructor" << std::endl;
	std::cout << "----------------------------" << std::endl;
	sf::Vector3f sfV3f{ 1.2f, -3.2f,1.9f };

	vectorOne = sfV3f;
	std::cout << "[1.2     ,-3.2     ,1.9     ]" << std::endl;
	std::cout << vectorOne.toString() << std::endl;
	std::cout << "sf::vector3f constructor" << std::endl;
	std::cout << "----------------------------\n\n\n" << std::endl;

	sf::Vector2f sfV2f = vectorOne;
	// check this with debugger
	// sfV2f should be {1.2~,-3.2~}

	// --------------------- Operator (+) ------------------------------------

	vectorOne = {1,2,3};
	vectorTwo = { 2,3,4 };
	std::cout << vectorOne.toString() << std::endl;
	std::cout << vectorTwo.toString() << std::endl;
	std::cout << "[3.0     ,5.0     ,7.0     ]" << std::endl;
	std::cout << "Expected Result" << std::endl;
	std::cout << "----------------------------" << std::endl;
	result = vectorOne + vectorTwo;
	std::cout << result.toString() << std::endl;
	std::cout << "Operator + Result" << std::endl;
	std::cout << "----------------------------\n\n\n" << std::endl;

	//--------------------------------------------------------



	vectorOne = { 1,2,3 };
	vectorTwo = { 2,3,4 };
	std::cout << vectorOne.toString() << std::endl;
	std::cout << vectorTwo.toString() << std::endl;
	std::cout << "[-1.0     ,-1.0     ,-1.0     ]" << std::endl;
	std::cout << "Expected Result" << std::endl;
	std::cout << "----------------------------" << std::endl;
	result = vectorOne - vectorTwo;
	std::cout << result.toString() << std::endl;
	std::cout << "Operator - Result" << std::endl;
	std::cout << "----------------------------\n\n\n" << std::endl;
	
	

	//--------------------------------------------------------



	vectorOne = { 1,2,3 };
	std::cout << vectorOne.toString() << std::endl;
	std::cout << "[5.0     ,10.0     ,15.0     ]" << std::endl;
	std::cout << "Expected Result" << std::endl;
	std::cout << "----------------------------" << std::endl;
	result = vectorOne * scaler;
	std::cout << result.toString() << std::endl;
	std::cout << "Operator * Result" << std::endl;
	std::cout << "----------------------------\n\n\n" << std::endl;
	



	//--------------------------------------------------------



	vectorOne = { 10,16,21 };
	std::cout << vectorOne.toString() << std::endl;
	std::cout << "[5.0     ,8.0     ,10.5     ]" << std::endl;
	std::cout << "Expected Result" << std::endl;
	std::cout << "----------------------------" << std::endl;
	result = vectorOne / divisor;
	std::cout << result.toString() << std::endl;
	std::cout << "Operator / Result" << std::endl;
	std::cout << "----------------------------\n\n\n" << std::endl;
	
	
	// ---------------------------------------------------------

	vectorOne = { 1,2,3 };
	vectorTwo = { 2,3,4 };
	std::cout << vectorOne.toString() << std::endl;
	std::cout << vectorTwo.toString() << std::endl;
	std::cout << "[3.0     ,5.0     ,7.0     ]" << std::endl;
	std::cout << "Expected Result" << std::endl;
	std::cout << "----------------------------" << std::endl;
	result = vectorOne += vectorTwo;
	std::cout << result.toString() << std::endl;
	std::cout << "Operator += Result" << std::endl;
	std::cout << "----------------------------\n\n\n" << std::endl;

	//--------------------------------------------------------


	vectorOne = { 1,2,3 };
	vectorTwo = { 2,3,4 };
	std::cout << vectorOne.toString() << std::endl;
	std::cout << vectorTwo.toString() << std::endl;
	std::cout << "[-1.0     ,-1.0     ,-1.0     ]" << std::endl;
	std::cout << "Expected Result" << std::endl;
	std::cout << "----------------------------" << std::endl;
	result = vectorOne -= vectorTwo;
	std::cout << result.toString() << std::endl;
	std::cout << "Operator -= Result" << std::endl;
	std::cout << "----------------------------\n\n\n" << std::endl;

	//--------------------------------------------------------


	vectorOne = { 1,2,3 };
	vectorTwo = { 2,3,4 };
	std::cout << vectorOne.toString() << std::endl;
	std::cout << vectorTwo.toString() << std::endl;
	std::cout << "[ These vectors are not equal ]" << std::endl;
	std::cout << "Expected Result" << std::endl;
	std::cout << "----------------------------" << std::endl;
	if (vectorOne == vectorTwo)
	{
		equalityCheck = "These vectors are equal";
	}
	else
	{
		equalityCheck = "These vectors are not equal";
	}
	std::cout << equalityCheck << std::endl;
	std::cout << "Operator == Result One" << std::endl;
	std::cout << "----------------------------\n\n\n" << std::endl;


	vectorOne = { 1,2,3 };
	vectorTwo = { 1,2,3 };
	std::cout << vectorOne.toString() << std::endl;
	std::cout << vectorTwo.toString() << std::endl;
	std::cout << "[ These vectors are equal ]" << std::endl;
	std::cout << "Expected Result" << std::endl;
	std::cout << "----------------------------" << std::endl;
	if (vectorOne == vectorTwo)
	{
		equalityCheck = "These vectors are equal";
	}
	else
	{
		equalityCheck = "These vectors are not equal";
	}
	std::cout << equalityCheck << std::endl;
	std::cout << "Operator == Result Two" << std::endl;
	std::cout << "----------------------------\n\n\n" << std::endl;

	//--------------------------------------------------------


	vectorOne = { 1,2,3 };
	vectorTwo = { 1,2,3 };
	std::cout << vectorOne.toString() << std::endl;
	std::cout << vectorTwo.toString() << std::endl;
	std::cout << "[ These vectors are equal ]" << std::endl;
	std::cout << "Expected Result" << std::endl;
	std::cout << "----------------------------" << std::endl;
	if (vectorOne != vectorTwo)
	{
		equalityCheck = "These vectors are not equal";
	}
	else
	{
		equalityCheck = "These vectors are equal";
	}
	std::cout << equalityCheck << std::endl;
	std::cout << "Operator != Result One" << std::endl;
	std::cout << "----------------------------\n\n\n" << std::endl;




	vectorOne = { 1,2,3 };
	vectorTwo = { 2,3,4 };
	std::cout << vectorOne.toString() << std::endl;
	std::cout << vectorTwo.toString() << std::endl;
	std::cout << "[ These vectors are not equal ]" << std::endl;
	std::cout << "Expected Result" << std::endl;
	std::cout << "----------------------------" << std::endl;
	if (vectorOne != vectorTwo)
	{
		equalityCheck = "These vectors are not equal";
	}
	else
	{
		equalityCheck = "These vectors are equal";
	}
	std::cout << equalityCheck << std::endl;
	std::cout << "Operator != Result Two" << std::endl;
	std::cout << "----------------------------\n\n\n" << std::endl;




	//--------------- Operator (-) -----------------------------------------

	vectorOne = { 12, -8, 10 };
	std::cout << vectorOne.toString() << std::endl;
	std::cout << "[-12.0     , 8.0     ,-10.0    ]" << std::endl;
	std::cout << "Expected Result" << std::endl;
	std::cout << "----------------------------" << std::endl;
	result = vectorOne.operator-();
	std::cout << result.toString() << std::endl;
	std::cout << "Operator - Result" << std::endl;
	std::cout << "----------------------------\n\n\n" << std::endl;


	//--------------- Reverse X -----------------------------------------

	/*vectorOne = { 5, -6, 3 };
	std::cout << vectorOne.toString() << std::endl;
	std::cout << "[-5.0     , -6.0     ,3.0    ]" << std::endl;
	std::cout << "Expected Result" << std::endl;
	std::cout << "----------------------------" << std::endl;
	result = vectorOne.reverseX();
	std::cout << result.toString() << std::endl;
	std::cout << "Operator - Result" << std::endl;
	std::cout << "----------------------------\n\n\n" << std::endl;*/

	

	//--------------- Reverse Y -----------------------------------------

	/*vectorOne = { 5, -6, 3 };
	std::cout << vectorOne.toString() << std::endl;
	std::cout << "[-5.0     , -6.0     ,3.0    ]" << std::endl;
	std::cout << "Expected Result" << std::endl;
	std::cout << "----------------------------" << std::endl;
	result = vectorOne.reverseY();
	std::cout << result.toString() << std::endl;
	std::cout << "Operator - Result" << std::endl;
	std::cout << "----------------------------\n\n\n" << std::endl;*/




	//--------------- Length -----------------------------------------

	vectorOne = { 4.0, 6.6, -7.0 };
	std::cout << vectorOne.toString() << std::endl;
	std::cout << "[10.4192 ]" << std::endl;
	std::cout << "Expected Result" << std::endl;
	std::cout << "----------------------------" << std::endl;
	length = vectorOne.length();
	std::cout << length << std::endl;
	std::cout << "Length Result" << std::endl;
	std::cout << "----------------------------\n\n\n" << std::endl;




	//--------------- Length Squared -----------------------------------------

	vectorOne = { 4.0, 6.6, -7.0 };
	std::cout << vectorOne.toString() << std::endl;
	std::cout << "[108.56]" << std::endl;
	std::cout << "Expected Result" << std::endl;
	std::cout << "----------------------------" << std::endl;
	lengthSquared = vectorOne.lengthSquared();
	std::cout << lengthSquared << std::endl;
	std::cout << "Length Squared Result" << std::endl;
	std::cout << "----------------------------\n\n\n" << std::endl;



	//--------------- Dot Product -----------------------------------------

	vectorOne = { 7.0, 6.0, 3.0 };
	vectorTwo = { 4.0,2.0,12.0 };
	std::cout << vectorOne.toString() << std::endl;
	std::cout << vectorTwo.toString() << std::endl;
	std::cout << "[76.0 ]" << std::endl;
	std::cout << "Expected Result" << std::endl;
	std::cout << "----------------------------" << std::endl;
	dotResult = vectorOne.dot(vectorTwo);
	std::cout << dotResult << std::endl;
	std::cout << "Dot Product Result" << std::endl;
	std::cout << "----------------------------\n\n\n" << std::endl;


	//--------------- Cross Product -----------------------------------------

	vectorOne = { 24.0, 32.0, 19.0 };
	vectorTwo = { 9.0,15.0,13.0 };
	std::cout << vectorOne.toString() << std::endl;
	std::cout << vectorTwo.toString() << std::endl;
	std::cout << "[76.0 ]" << std::endl;
	std::cout << "Expected Result" << std::endl;
	std::cout << "----------------------------" << std::endl;
	result = vectorOne.crossProduct(vectorTwo);
	std::cout << result.toString() << std::endl;
	std::cout << "Cross Product Result" << std::endl;
	std::cout << "----------------------------\n\n\n" << std::endl;


	std::system("pause");
	return EXIT_SUCCESS;
}


