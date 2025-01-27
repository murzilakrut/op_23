#include "functions.h"
#include <catch2/catch.hpp>

TEST_CASE() {   // Тесты наибольшего числа

    CHECK(max(1, 2) == 2);
    CHECK(max(-1, -2) == -1);
    CHECK(max(0, 10) == 10);
    CHECK(max(-2, 2) == 2);
}

TEST_CASE() {   // Тесты суммы

    CHECK(sum(1, 1) == 2);
    CHECK(sum(2, 2) == 4);
    CHECK(sum(8, 5) == 13);
    CHECK(sum(99, 1) == 100);
}

TEST_CASE("area norm") {   // Тесты площади: нормальные

    CHECK(area(1, 1) == 1);
    CHECK(area(5, 10) == 50);
    CHECK(area(30, 8) == 240);
    CHECK(area(25, 64) == 1600);
}
TEST_CASE("area abnormal") {   // Тесты площади: ненормальные

    CHECK_THROWS(area(-3, 1));
    CHECK_THROWS(area(5, -7));
    CHECK_THROWS(area(-12, 6));
    CHECK_THROWS(area(4, -45));
    CHECK_THROWS(area(0, 7));
    CHECK_THROWS(area(16, 0));
}



/*
TEST_CASE() {

    CHECK(sin(1.57) == Approx(1.0));
}
*/