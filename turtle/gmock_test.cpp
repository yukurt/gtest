#include <string>

#include "gmock/gmock.h"
#include "gtest/gtest.h"

#include "turtle.hpp"
#include "painter.hpp"

class PainterTest : public ::testing::Test
{
public:
    PainterTest()
        : painter(&turtle)
    {
    }
    
protected:
    // virtual void SetUp() {}
    // virtual void TearDown() {}

    void TestPolygon(int x_start, int y_start, int num_sides, int side_length)
    {
        ::testing::InSequence s;

        float angle_increment = 360.0 / num_sides;

        for (int i = 0; i < num_sides; ++i)
        {
            EXPECT_CALL(turtle, Turn(i * angle_increment)).Times(1);
            EXPECT_CALL(turtle, Forward(side_length)).Times(1);
        }
        
        painter.DrawPolygon(x_start, y_start, num_sides, side_length);
    }
    
    ::testing::NiceMock<MockTurtle> turtle;
    Painter painter;
};  

TEST_F(PainterTest, CanDrawSomething)
{
    EXPECT_CALL(turtle, PenDown())
        .Times(::testing::AtLeast(1));

    EXPECT_TRUE(painter.DrawCircle(0, 0, 10));
}

TEST_F(PainterTest, CanDrawSquare)
{
    EXPECT_CALL(turtle, PenDown())
        .Times(1);
    EXPECT_CALL(turtle, GoTo(::testing::_, ::testing::_))
        .Times(5);
  
    EXPECT_TRUE(painter.DrawSquare(5, 3, 8));
}

TEST_F(PainterTest, CanGetTurtleLocation)
{
    int x = 13;
    int y = 69;

    EXPECT_CALL(turtle, GetX())
        .WillOnce(::testing::Return(x));
    EXPECT_CALL(turtle, GetY())
        .WillOnce(::testing::Return(y));

    EXPECT_EQ(x, painter.GetTurtleXLocation());
    EXPECT_EQ(y, painter.GetTurtleYLocation());
}

TEST_F(PainterTest, CanDrawTriangle)
{
    int x_start = 5;
    int y_start = 2;
    int num_sides = 3;
    int side_length = 4;
    
    EXPECT_CALL(turtle, Turn(0)).Times(1);
    EXPECT_CALL(turtle, Turn(120)).Times(1);
    EXPECT_CALL(turtle, Turn(240)).Times(1);

    EXPECT_CALL(turtle, Forward(side_length)).Times(num_sides);

    painter.DrawPolygon(x_start, y_start, num_sides, side_length);
}

TEST_F(PainterTest, CanDrawHexagon)
{
    int x_start = 3;
    int y_start = 6;
    int num_sides = 6;
    int side_length = 9;

    TestPolygon(x_start, y_start, num_sides, side_length);
}

TEST_F(PainterTest, CanDrawDecagon)
{
    int x_start = 5;
    int y_start = 1;
    int num_sides = 10;
    int side_length = 7;

    TestPolygon(x_start, y_start, num_sides, side_length);
}

TEST_F(PainterTest, CanDrawHeptagon)
{
    int x_start = 5;
    int y_start = 1;
    int num_sides = 7;
    int side_length = 7;

    TestPolygon(x_start, y_start, num_sides, side_length);
}
