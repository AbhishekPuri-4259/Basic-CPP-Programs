#include<iostream>
using namespace std;

class mobile
{
        public:
        void Callfeature()
	{
		cout << "Call is supported" << endl;
	}
};

class camera
{
        public:
        void camerafeature()
        {
                cout << "Camera is supported" << endl;
        }
};

class smartphone : public mobile, public camera
{
        public:
        void internetfeature()
	{
		cout << "Internet is supported" << endl;
	}
};

int main()
{
        smartphone S24;
	S24.Callfeature();
	S24.camerafeature();
	S24.internetfeature();

	return 0;
}
