#pragma once
#ifndef BOX_H
#define BOX_H

class Box {
	int width, height;
	char fill; // 박스의 내부를 채우는 문자
public:
	Box(int w, int h);
	void setFill(char f);
	void setSize(int w, int h);
	void draw();
};

#endif