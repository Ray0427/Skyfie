#include "Object.h"


Object::Object()
{
	//set values for default constructor
	setType("Object");
    setColor(cv::Scalar(0,0,0));

}

Object::Object(cv::String name){

	setType(name);
    if(name=="custom"){
        
        //TODO: use "calibration mode" to find HSV min
        //and HSV max values
        
        setHSVmin(cv::Scalar(0,124,210));
        setHSVmax(cv::Scalar(30,256,256));
        
        //BGR value for Green:
        setColor(cv::Scalar(128,128,128));
        
    }
    if(name=="orange"){
        
        //TODO: use "calibration mode" to find HSV min
        //and HSV max values
        
        setHSVmin(cv::Scalar(0,110,180));//0,124,210
        setHSVmax(cv::Scalar(20,255,255));
        
        //BGR value for Orange:
        setColor(cv::Scalar(0,128,255));
        
    }
	if(name=="blue"){

		//TODO: use "calibration mode" to find HSV min
		//and HSV max values

        setHSVmin(cv::Scalar(92,47,74));
        setHSVmax(cv::Scalar(124,256,256));

		//BGR value for Green:
        setColor(cv::Scalar(255,0,0));

	}
	if(name=="green"){

		//TODO: use "calibration mode" to find HSV min
		//and HSV max values

        setHSVmin(cv::Scalar(20,50,54));
        setHSVmax(cv::Scalar(80,255,255));
        
        //BGR value for Yellow:
        setColor(cv::Scalar(0,255,0));

	}
	/*if(name=="yellow"){

		//TODO: use "calibration mode" to find HSV min
		//and HSV max values

		setHSVmin(Scalar(20,124,123));
		setHSVmax(Scalar(30,256,256));

		//BGR value for Red:
		setColor(Scalar(0,255,255));

	}*/
	/*if(name=="red"){

		//TODO: use "calibration mode" to find HSV min
		//and HSV max values

		setHSVmin(Scalar(0,200,0));
		setHSVmax(Scalar(19,255,255));

		//BGR value for Red:
		setColor(Scalar(0,0,255));

	}*/
}

Object::~Object(void)
{
}

int Object::getXPos(){

	return Object::xPos;

}

void Object::setXPos(int x){

	Object::xPos = x;

}

int Object::getYPos(){

	return Object::yPos;

}

void Object::setYPos(int y){

	Object::yPos = y;

}

int Object::getArea(){
    
    return Object::area;
    
}

void Object::setArea(int a){
    
    Object::area = a;
    
}

cv::Scalar Object::getHSVmin(){

	return Object::HSVmin;

}
cv::Scalar Object::getHSVmax(){

	return Object::HSVmax;
}

void Object::setHSVmin(cv::Scalar min){

	Object::HSVmin = min;
}


void Object::setHSVmax(cv::Scalar max){

	Object::HSVmax = max;
}
