#pragma once

#include <iostream>
#include <thread>	

using namespace std;

class SimpleTimer
{
public:
	
	SimpleTimer()	// ������������
	{
		start = std::chrono::high_resolution_clock::now();					// ������� ����� ������ 
	}
	
	~SimpleTimer()	// ����������
	{
		end = std::chrono::high_resolution_clock::now();					// ����� ����� (����� ��������� �������)
		std::chrono::duration<float> duration = end - start;				// �����������������
		cout << "\n**** Duration: " << duration.count() << "s\n" << endl;
	}

private:
	
	std::chrono::time_point<std::chrono::steady_clock> start, end;			// ���� ������ ������� - "start", "end"

};
