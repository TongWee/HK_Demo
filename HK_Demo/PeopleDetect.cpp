#include "PeopleDetect.h"


vector<Rect> PeoDetect::detectPeople(Mat &src){
		cascade.detectMultiScale(src, peoples, 1.1, 2, 2, Size(10, 10), Size(300, 300));
		return peoples;
	}
