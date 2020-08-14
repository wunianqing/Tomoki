#include <iostream>
#include <Tomoki.h>

using namespace std;

class SandBox :public Tomoki::Application
{
public:
	SandBox() {};
	~SandBox() {};
};

Tomoki::Application* Tomoki::CreateApplication()
{
	return new SandBox();
}