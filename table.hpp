#ifndef TABLE_HPP
#define TABLE_HPP
#pragma once
#include "point.hpp"
#include "coche.hpp"


namespace IA{

class table:public car{

    int num_col;
    int num_row;
    int n_obstacle;
    car car_;
    //Persona pers;
    int n_pers;
    int perc_density;


public:
    const int get_col() const{return num_col;}
    const int get_row() const{return num_row;}
    void set_col(int col_){num_col=col_;}
    void set_row(int row_){num_row=row_;}
    const int get_pos(int i,int j);
    const int get_val() const;
    void set_percentage(int per_){perc_density=per_;}


};


}
#endif // TABLE_HPP
