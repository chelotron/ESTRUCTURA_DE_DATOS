#pragma once
class vector
{
private:
	int vec[100], n;
public:
	//cnstc
	vector(void);
	//dstrc
	~vector(void);
	//methods
	void charge(int vec[], int n);
	void show(int vec[], int n);
	void order(int vec[], int n);
	
};

