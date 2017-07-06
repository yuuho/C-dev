﻿
#include <stdlib.h>
#include <GL/glut.h>
#include "global.h"
#include "obstacle.h"

/* 障害物定義の雛形のようなもの */

// hogeが生成される時に実行される関数
static double* hoge_init(void){
    double* p;
    p = malloc(sizeof(double)*3);
    p[0] = 10.0;
    p[1] = 15.0;
    p[2] = 20.0;
    return p;
}

// hogeを描画する関数
static void hoge_render(int birth, double* param){
    glPushMatrix();
    glTranslatef(15.0-(double)(frame_count-birth)*0.3, 3.0, 0.0);
    glDisable(GL_LIGHTING);
    glColor3d(1.0,0.0,0.0);
    glutSolidCube(1);
    glEnable(GL_LIGHTING);
    glPopMatrix();
}

// hogeがプレイヤーと衝突したか調べる関数
static int hoge_judge(int birth, double* param, double z){
    double y = 15.0-(double)(frame_count-birth)*0.3;
    if(y<0.5 && y>-0.5 && z>2.5 && z<3.5)return 1;
    return 0;
}

// hogeを削除する時に実行する関数
static void hoge_delete(int birth, double* param){

}

// hogeという障害物の定義を返す関数
Obstacle getHogeDefinition(void){
    // 実際の障害物定義の例
    Obstacle hoge = {
        hoge_init,
        hoge_render,
        hoge_judge,
        hoge_delete
    };
    return hoge;
}