//
// Created by NIKITOS on 02.06.2020.
//

#ifndef LAB8_CUBEALGORITMS_H
#define LAB8_CUBEALGORITMS_H
#include <iostream>
#include <fstream>

using namespace std;


class CubicRubica{
public:
    CubicRubica();
    ~CubicRubica();
    char white[9];
    char red[9];
    char orange[9];
    char blue[9];
    char green[9];
    char yellow[9];
    void display(char face[9]);
    void swap(char &a,char &b);
    void rotate_clock(char choice);

    void white_bottom(char q);
    void right_alg(char a,char c);
    void white_right(char q);
    void left_alg(char a,char c);
    void white_left(char q);
    void top_alg(char a,char b,char c);
    void white_top(char q);
    void inv_alg(char a,char b,char c);
    void white_bottom_inverted(char q);

    void solve_white_cross();
    bool is_it_full();
    void white_corners_alg_left();
    void white_corners_alg_right();
    void solve_white_corners();
    void middle_place_left_alg(char left,char center);
    void middle_place_right_alg(char center,char right);
    void solve_middle_layer();
    void yellow_cross_algorithm();
    void solve_yellow_cross();
    void yellow_corners_algorithm();
    void solve_yellow_corners();
    void yellow_corner_orientation_algorithm();
    void yellow_corner_orientation();
    void yellow_edges_colour_arrangement_right();
    void yellow_edges_colour_arrangement_left();
    void yellow_edges_colour_arrangement();
};
#endif //LAB8_CUBEALGORITMS_H
