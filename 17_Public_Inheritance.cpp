class Base
{
	public:
	int m_public;

	private:
	int m_private;

	protected:
	int m_protected;
};

class Pub: public Base	//Public Inheritance
{
	public:
	Pub()
	{
		m_public = 1;		// okay: m_public was inherited as public
		m_private = 2;		// not okay: m_private is inaccessible from derived class
		m_protected = 3;	// okay: m_protected was inherited as protected
	}
};

int main()
{
	Base base;
	base.m_public = 1;	// okay: m_public is public in Base
	base.m_private = 2;	// not okay: m_private is private in Base
	base.m_protected = 3;	// not okay: m_protected is protected in Base

	Pub pub;
	pub.m_public = 1;	// okay: m_public is public in Pub
	pub.m_private = 2;	// not okay: m_private is inaccessible in Pub
	pub.m_protected = 3;	// not okay: m_protected is protected in Pub

	return 0;
}
