#include "C:\Users\TATHYA\source\repos\Rock_paper_scissor\Rock_paper_scissor\main.h"
#include "pch.h"
#include "CppUnitTest.h"
#include <string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
extern "C" {
    const char* Rock_Paper_Scissors(const char* Player1, const char* Player2);
}

namespace RockPaperScissorsTest
{
    TEST_CLASS(RockPaperScissorsTest)
    {
    public:

        TEST_METHOD(Test_Player1Wins_RockVsScissors_ReturnsPlayer1)
        {
            const char* Player1 = "Rock";
            const char* Player2 = "Scissors";
            const char* result = Rock_Paper_Scissors(Player1, Player2);
            Assert::AreEqual(std::string("Player1"), std::string(result));
        }

        TEST_METHOD(Test_Player1Wins_ScissorsVsPaper_ReturnsPlayer1)
        {
            const char* Player1 = "Scissors";
            const char* Player2 = "Paper";
            const char* result = Rock_Paper_Scissors(Player1, Player2);
            Assert::AreEqual(std::string("Player1"), std::string(result));
        }

        TEST_METHOD(Test_Player1Wins_PaperVsRock_ReturnsPlayer1)
        {
            const char* Player1 = "Paper";
            const char* Player2 = "Rock";
            const char* result = Rock_Paper_Scissors(Player1, Player2);
            Assert::AreEqual(std::string("Player1"), std::string(result));
        }

        TEST_METHOD(Test_Player2Wins_ScissorsVsRock_ReturnsPlayer2)
        {
            const char* Player1 = "Scissors";
            const char* Player2 = "Rock";
            const char* result = Rock_Paper_Scissors(Player1, Player2);
            Assert::AreEqual(std::string("Player2"), std::string(result));
        }

        TEST_METHOD(Test_Player2Wins_PaperVsScissors_ReturnsPlayer2)
        {
            const char* Player1 = "Paper";
            const char* Player2 = "Scissors";
            const char* result = Rock_Paper_Scissors(Player1, Player2);
            Assert::AreEqual(std::string("Player2"), std::string(result));
        }

        TEST_METHOD(Test_Player2Wins_RockVsPaper_ReturnsPlayer2)
        {
            const char* Player1 = "Rock";
            const char* Player2 = "Paper";
            const char* result = Rock_Paper_Scissors(Player1, Player2);
            Assert::AreEqual(std::string("Player2"), std::string(result));
        }

        TEST_METHOD(Test_Draw_RockVsRock_ReturnsDraw)
        {
            const char* Player1 = "Rock";
            const char* Player2 = "Rock";
            const char* result = Rock_Paper_Scissors(Player1, Player2);
            Assert::AreEqual(std::string("Draw"), std::string(result));
        }

        TEST_METHOD(Test_Draw_PaperVsPaper_ReturnsDraw)
        {
            const char* Player1 = "Paper";
            const char* Player2 = "Paper";
            const char* result = Rock_Paper_Scissors(Player1, Player2);
            Assert::AreEqual(std::string("Draw"), std::string(result));
        }

        TEST_METHOD(Test_Draw_ScissorsVsScissors_ReturnsDraw)
        {
            const char* Player1 = "Scissors";
            const char* Player2 = "Scissors";
            const char* result = Rock_Paper_Scissors(Player1, Player2);
            Assert::AreEqual(std::string("Draw"), std::string(result));
        }

        TEST_METHOD(Test_InvalidInput_AnywordVsRockorPaperorScissors_ReturnsInvalid)
        {
            const char* Player1 = "Tathya";
            const char* Player2 = "Rock";
            const char* result = Rock_Paper_Scissors(Player1, Player2);
            Assert::AreEqual(std::string("Invalid"), std::string(result));
        }
    };
}
