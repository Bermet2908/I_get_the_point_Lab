#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/point.hpp"

TEST_CASE("constructor sets coordinates correctly") {
    Point p(3.2, 9.8);
    REQUIRE(p.getX() == 3.2);
    REQUIRE(p.getY() == 9.8);
}

TEST_CASE("operator- computes correct distance") {
    Point p1(3.2, 9.8);
    Point p2(5.5, -1.2);
    double distance = p1 - p2;
    REQUIRE(distance > 11.23);
    REQUIRE(distance < 11.25);
}

TEST_CASE("operator== and operator!= work") {
    Point a(1.0, 2.0);
    Point b(1.0, 2.0);
    Point c(3.0, 4.0);

    REQUIRE(a == b);
    REQUIRE(a != c);
}

TEST_CASE("operator/ finds midpoint") {
    Point p1(3.2, 9.8);
    Point p2(5.5, -1.2);
    Point mid = p1 / p2;

    REQUIRE(mid.getX() > 4.34);
    REQUIRE(mid.getX() < 4.36);
    REQUIRE(mid.getY() > 4.29);
    REQUIRE(mid.getY() < 4.31);
}

