https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include "pch.h"
#include "CppUnitTest.h"
#include "AnimChannelAngle.h"




using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Testing
{
	TEST_CLASS(CAnimChannelAngleTest)
	{
	public:
		
		TEST_METHOD(TestCAnimChannelAngleName)
		{
            CAnimChannelAngle channel;
            channel.SetName(L"abcdexx");
            Assert::AreEqual(std::wstring(L"abcdexx"), channel.GetName());
		}



	};
}