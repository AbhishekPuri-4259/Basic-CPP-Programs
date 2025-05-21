class Base
{
	public:
	int m_public;

	private:
	int m_private;

	protected:
	int m_protected;
};

class Pri: private Base //Private Inheritance
{
	public:
	Pri()
	{
		m_public = 1;		// okay: m_public is now private in Pri
		m_private = 2;		// not okay: m_private is inaccessible from derived class 
		m_protected = 3;	// okay: m_protected is now private in Pri
}
};

int main()
{
	Base base;
	base.m_public = 1;	// okay: m_public is public in Base
	base.m_private = 2;	// not okay: m_private is private in Base
	base.m_protected = 3;	// not okay: m_protected is protected in Base

	Pri pri;
	pri.m_public = 1;	// not okay: m_public is private in Pri
	pri.m_private = 2;	// not okay: m_private is inaccessible in Pri
	pri.m_protected = 3;	// not okay: m_protected is private in Pri

	return 0;
}
