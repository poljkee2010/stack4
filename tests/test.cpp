#include "catch.hpp"
#include <stack.hpp>

SCENARIO("TEST INIT") 
{
	stack<int>StInit;
	REQUIRE(StInit.count() == 0);
}
	
SCENARIO("TEST PUSH") 
{
	stack<int>StPush;

	StPush.push(1);
	StPush.push(2);
	StPush.push(3);
 	StPush.push(4);
	StPush.push(5);

	StPush.pop();

  	//REQUIRE(StPush.top() == 5);
	REQUIRE(StPush.count() == 4);
}

SCENARIO("TEST POP")
{
	stack<int>StPop;

	StPop.push(1);
	StPop.push(2);

	StPop.pop();

	REQUIRE(StPop.count() == 1);
}

SCENARIO("TEST EMPTY") 
{
	stack<int>StEmpty;

	StEmpty.push(1);
	StEmpty.pop();
	
	REQUIRE(StEmpty.empty() == false);
}
