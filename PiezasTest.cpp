/**
 * Unit Tests for Piezas
**/

#include <gtest/gtest.h>
#include "Piezas.h"
 
class PiezasTest : public ::testing::Test
{
	protected:
		PiezasTest(){} //constructor runs before each test
		virtual ~PiezasTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(PiezasTest, sanityCheck)
{
	ASSERT_TRUE(true);
}

TEST(PiezasTest, dropPieceOutboundTest){
	Piezas pieza;
	ASSERT_EQ(pieza.dropPiece(5), Invalid);
	ASSERT_EQ(pieza.dropPiece(0), Invalid);
}

TEST(PiezasTest, dropPieceTest){
	Piezas pieza;
	ASSERT_EQ(pieza.dropPiece(1), X);
	ASSERT_EQ(pieza.placeAt(3, 1), X);
	ASSERT_EQ(pieza.dropPiece(1), O);
	ASSERT_EQ(pieza.placeAt(2, 1), O);
	ASSERT_EQ(pieza.dropPiece(1), X);
	ASSERT_EQ(pieza.placeAt(1, 1), X);
}