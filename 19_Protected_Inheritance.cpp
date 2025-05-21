class Base
{
	public:
	int m_public;

	private:
	int m_private;

	protected:
	int m_protected;
};

class Pro: protected Base //Protected inheritance
{
	public:
	Pro()
	{
		m_public = 1;		// okay: m_public is now protected in Pro
		m_private = 2;		// not okay: m_private is inaccessible from derived class 
		m_protected = 3;	// okay: m_protected is now protected in Pro
	}
};

int main()
{
	Base base;
	base.m_public = 1;	// okay: m_public is public in Base
	base.m_private = 2;	// not okay: m_private is private in Base
	base.m_protected = 3;	// not okay: m_protected is protected in Base

	Pro pro;
	pro.m_public = 1;	// not okay: m_public is protected in Pro
	pro.m_private = 2;	// not okay: m_private is inaccessible in Pro
	pro.m_protected = 3;	// not okay: m_protected is protected in Pro

	return 0;
}
