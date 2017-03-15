int DATA               = 3;
int DATA_OUTPUT_ENABLE = 4;
int LATCH              = 5;
int CLOCK              = 6;
int RESET              = 7;

const int button1Pin = 2;  // pushbutton pin
// || 4=Blue || 3=Yellow || 2=Red || 1=Green || 6=Purple || 5=Cyan || 0=Off || 7=White ||

byte Screen[8][8] = {{0,0,0,0,0,0,0,0},
                     {0,0,0,0,0,0,0,0},
                     {0,0,0,0,0,0,0,0},
                     {0,0,0,0,0,0,0,0},
                     {0,0,0,0,0,0,0,0},
                     {0,0,0,0,0,0,0,0},
                     {0,0,0,0,0,0,0,0},
                     {0,0,0,0,0,0,0,0}};


byte Heart0[8][8] = {{1,2,2,1,1,2,2,1},
                      {2,2,2,2,2,2,2,2},
                      {2,2,2,2,2,2,2,2},
                      {2,2,2,2,2,2,2,2},
                      {1,2,2,2,2,2,2,1},
                      {1,1,2,2,2,2,1,1},
                      {1,1,1,2,2,1,1,1},
                      {1,1,1,1,1,1,1,1}};

                      
byte Heart1[8][8] = {{1,2,2,1,1,1,1,1},
                      {2,2,2,2,1,1,2,2},
                      {2,2,2,1,1,2,2,2},
                      {2,2,2,2,1,1,2,2},
                      {1,2,2,2,2,1,2,2},
                      {1,1,2,2,1,2,2,1},
                      {1,1,1,2,2,1,2,1},
                      {1,1,1,1,1,1,2,1}};


byte Heart2[8][8] = {{1,2,2,1,1,1,1,1},
                      {2,2,2,2,1,1,1,1},
                      {2,2,2,1,1,1,1,1},
                      {2,2,2,2,1,1,1,1},
                      {1,2,2,2,2,1,1,2},
                      {1,1,2,2,1,1,1,1},
                      {1,1,1,2,1,2,1,2},
                      {1,1,1,1,2,2,2,2}};


byte Heart3[8][8] = {{1,2,2,1,1,1,1,1},
                      {2,2,2,2,1,1,1,1},
                      {2,2,2,1,1,1,1,1},
                      {2,2,2,2,1,1,1,1},
                      {1,2,2,2,2,1,1,1},
                      {1,1,2,2,1,1,1,1},
                      {1,1,1,2,1,1,1,1},
                      {1,1,1,1,1,1,1,1}};


byte Heart4[8][8] = {{1,1,1,1,1,1,1,1},
                      {1,1,1,1,1,1,1,1},
                      {1,1,1,1,1,1,1,1},
                      {1,1,1,1,1,1,1,1},
                      {1,1,1,1,1,1,1,1},
                      {1,1,1,1,1,1,1,1},
                      {1,1,1,1,1,1,1,1},
                      {1,1,1,1,1,1,1,1}};


byte Heart5[8][8] = {{1,2,2,2,1,1,1,1},
                      {2,2,2,2,1,1,1,1},
                      {2,2,2,1,1,1,1,1},
                      {2,2,2,2,1,1,1,1},
                      {1,2,2,2,2,1,1,1},
                      {1,1,2,2,1,1,1,1},
                      {1,1,1,2,1,1,1,1},
                      {1,1,1,1,1,1,1,1}};
                      
byte SineAmp0[8][8] = {{7, 7, 2, 7, 7, 7, 7, 7},
  {7, 2, 7, 2, 7, 7, 7, 7},
  {2, 7, 7, 2, 7, 7, 7, 7},
  {2, 7, 7, 2, 7, 7, 7, 7},
  {7, 7, 7, 7, 2, 7, 7, 2},
  {7, 7, 7, 7, 2, 7, 7, 2},
  {7, 7, 7, 7, 2, 7, 2, 7},
  {7, 7, 7, 7, 7, 2, 7, 7}
};


byte SineAmp1[8][8] = {{7, 7, 7, 7, 7, 7, 7, 7},
  {7, 2, 2, 7, 7, 7, 7, 7},
  {2, 7, 7, 2, 7, 7, 7, 7},
  {2, 7, 7, 2, 7, 7, 7, 7},
  {7, 7, 7, 7, 2, 7, 7, 2},
  {7, 7, 7, 7, 2, 7, 7, 2},
  {7, 7, 7, 7, 7, 2, 2, 7},
  {7, 7, 7, 7, 7, 7, 7, 7}
};


byte SineAmp2[8][8] = {{7, 7, 7, 7, 7, 7, 7, 7},
  {7, 7, 7, 7, 7, 7, 7, 7},
  {7, 2, 2, 7, 7, 7, 7, 7},
  {2, 7, 7, 2, 7, 7, 7, 7},
  {7, 7, 7, 7, 2, 7, 7, 2},
  {7, 7, 7, 7, 7, 2, 2, 7},
  {7, 7, 7, 7, 7, 7, 7, 7},
  {7, 7, 7, 7, 7, 7, 7, 7}
};


byte SineAmp3[8][8] = {{7, 7, 7, 7, 7, 7, 7, 7},
  {7, 7, 7, 7, 7, 7, 7, 7},
  {7, 7, 7, 7, 7, 7, 7, 7},
  {2, 2, 2, 2, 7, 7, 7, 7},
  {7, 7, 7, 7, 2, 2, 2, 2},
  {7, 7, 7, 7, 7, 7, 7, 7},
  {7, 7, 7, 7, 7, 7, 7, 7},
  {7, 7, 7, 7, 7, 7, 7, 7}
};


byte SineAmp4[8][8] = {{7, 7, 7, 7, 7, 7, 7, 7},
  {7, 7, 7, 7, 7, 7, 7, 7},
  {7, 7, 7, 7, 7, 7, 7, 7},
  {7, 7, 7, 7, 2, 2, 2, 2},
  {2, 2, 2, 2, 7, 7, 7, 7},
  {7, 7, 7, 7, 7, 7, 7, 7},
  {7, 7, 7, 7, 7, 7, 7, 7},
  {7, 7, 7, 7, 7, 7, 7, 7}
};


byte SineAmp5[8][8] = {{7, 7, 7, 7, 7, 7, 7, 7},
  {7, 7, 7, 7, 7, 7, 7, 7},
  {7, 7, 7, 7, 7, 2, 2, 7},
  {7, 7, 7, 7, 2, 7, 7, 2},
  {2, 7, 7, 2, 7, 7, 7, 7},
  {7, 2, 2, 7, 7, 7, 7, 7},
  {7, 7, 7, 7, 7, 7, 7, 7},
  {7, 7, 7, 7, 7, 7, 7, 7}
};

byte SineAmp6[8][8] = {{7, 7, 7, 7, 7, 7, 7, 7},
  {7, 7, 7, 7, 7, 2, 2, 7},
  {7, 7, 7, 7, 2, 7, 7, 2},
  {7, 7, 7, 7, 2, 7, 7, 2},
  {2, 7, 7, 2, 7, 7, 7, 7},
  {2, 7, 7, 2, 7, 7, 7, 7},
  {7, 2, 2, 7, 7, 7, 7, 7},
  {7, 7, 7, 7, 7, 7, 7, 7}
};

byte SineAmp7[8][8] = {{7, 7, 7, 7, 7, 2, 7, 7},
  {7, 7, 7, 7, 2, 7, 2, 7},
  {7, 7, 7, 7, 2, 7, 7, 2},
  {7, 7, 7, 7, 2, 7, 7, 2},
  {2, 7, 7, 2, 7, 7, 7, 7},
  {2, 7, 7, 2, 7, 7, 7, 7},
  {7, 2, 7, 2, 7, 7, 7, 7},
  {7, 7, 2, 7, 7, 7, 7, 7}
};

byte SineAmp8[8][8] = {{7, 7, 7, 7, 7, 7, 7, 7},
  {7, 7, 7, 7, 7, 2, 2, 7},
  {7, 7, 7, 7, 2, 7, 7, 2},
  {7, 7, 7, 7, 2, 7, 7, 2},
  {2, 7, 7, 2, 7, 7, 7, 7},
  {2, 7, 7, 2, 7, 7, 7, 7},
  {7, 2, 2, 7, 7, 7, 7, 7},
  {7, 7, 7, 7, 7, 7, 7, 7}
};

byte SineAmp9[8][8] = {{7, 7, 7, 7, 7, 7, 7, 7},
  {7, 7, 7, 7, 7, 7, 7, 7},
  {7, 7, 7, 7, 7, 2, 2, 7},
  {7, 7, 7, 7, 2, 7, 7, 2},
  {2, 7, 7, 2, 7, 7, 7, 7},
  {7, 2, 2, 7, 7, 7, 7, 7},
  {7, 7, 7, 7, 7, 7, 7, 7},
  {7, 7, 7, 7, 7, 7, 7, 7}
};

byte SineAmp10[8][8] = {{7, 7, 7, 7, 7, 7, 7, 7},
  {7, 7, 7, 7, 7, 7, 7, 7},
  {7, 7, 7, 7, 7, 7, 7, 7},
  {7, 7, 7, 7, 2, 2, 2, 2},
  {2, 2, 2, 2, 7, 7, 7, 7},
  {7, 7, 7, 7, 7, 7, 7, 7},
  {7, 7, 7, 7, 7, 7, 7, 7},
  {7, 7, 7, 7, 7, 7, 7, 7}
};

byte SineAmp11[8][8] = {{7, 7, 7, 7, 7, 7, 7, 7},
  {7, 7, 7, 7, 7, 7, 7, 7},
  {7, 7, 7, 7, 7, 7, 7, 7},
  {2, 2, 2, 2, 7, 7, 7, 7},
  {7, 7, 7, 7, 2, 2, 2, 2},
  {7, 7, 7, 7, 7, 7, 7, 7},
  {7, 7, 7, 7, 7, 7, 7, 7},
  {7, 7, 7, 7, 7, 7, 7, 7}
};

byte SineAmp12[8][8] = {{7, 7, 7, 7, 7, 7, 7, 7},
  {7, 7, 7, 7, 7, 7, 7, 7},
  {7, 2, 2, 7, 7, 7, 7, 7},
  {2, 7, 7, 2, 7, 7, 7, 7},
  {7, 7, 7, 7, 2, 7, 7, 2},
  {7, 7, 7, 7, 7, 2, 2, 7},
  {7, 7, 7, 7, 7, 7, 7, 7},
  {7, 7, 7, 7, 7, 7, 7, 7}
};

byte SineAmp13[8][8] = {{7, 7, 7, 7, 7, 7, 7, 7},
  {7, 2, 2, 7, 7, 7, 7, 7},
  {2, 7, 7, 2, 7, 7, 7, 7},
  {2, 7, 7, 2, 7, 7, 7, 7},
  {7, 7, 7, 7, 2, 7, 7, 2},
  {7, 7, 7, 7, 2, 7, 7, 2},
  {7, 7, 7, 7, 7, 2, 2, 7},
  {7, 7, 7, 7, 7, 7, 7, 7}
};
byte Phase0[8][8] = {
  {0, 0, 1, 0, 0, 0, 0, 0},
  {0, 1, 0, 1, 0, 0, 0, 0},
  {0, 1, 0, 1, 0, 0, 0, 0},
  {1, 0, 0, 0, 1, 0, 0, 0},
  {0, 0, 0, 0, 0, 1, 0, 1},
  {0, 0, 0, 0, 0, 1, 0, 1},
  {0, 0, 0, 0, 0, 0, 1, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};


byte Phase1[8][8] = {
  {0, 2, 0, 0, 0, 0, 0, 0},
  {2, 0, 2, 0, 0, 0, 0, 0},
  {2, 0, 2, 0, 0, 0, 0, 0},
  {0, 0, 0, 2, 0, 0, 0, 2},
  {0, 0, 0, 0, 2, 0, 2, 0},
  {0, 0, 0, 0, 2, 0, 2, 0},
  {0, 0, 0, 0, 0, 2, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};


byte Phase2[8][8] = {
  {3, 0, 0, 0, 0, 0, 0, 0},
  {0, 3, 0, 0, 0, 0, 0, 3},
  {0, 3, 0, 0, 0, 0, 0, 3},
  {0, 0, 3, 0, 0, 0, 3, 0},
  {0, 0, 0, 3, 0, 3, 0, 0},
  {0, 0, 0, 3, 0, 3, 0, 0},
  {0, 0, 0, 0, 3, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};


byte Phase3[8][8] = {
  {0, 0, 0, 0, 0, 0, 0, 4},
  {4, 0, 0, 0, 0, 0, 4, 0},
  {4, 0, 0, 0, 0, 0, 4, 0},
  {0, 4, 0, 0, 0, 4, 0, 0},
  {0, 0, 4, 0, 4, 0, 0, 0},
  {0, 0, 4, 0, 4, 0, 0, 0},
  {0, 0, 0, 4, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};


byte Phase4[8][8] = {
  {0, 0, 0, 0, 0, 0, 5, 0},
  {0, 0, 0, 0, 0, 5, 0, 5},
  {0, 0, 0, 0, 0, 5, 0, 5},
  {5, 0, 0, 0, 5, 0, 0, 0},
  {0, 5, 0, 5, 0, 0, 0, 0},
  {0, 5, 0, 5, 0, 0, 0, 0},
  {0, 0, 5, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};


byte Phase5[8][8] = {
  {0, 0, 0, 0, 0, 6, 0, 0},
  {0, 0, 0, 0, 6, 0, 6, 0},
  {0, 0, 0, 0, 6, 0, 6, 0},
  {0, 0, 0, 6, 0, 0, 0, 6},
  {6, 0, 6, 0, 0, 0, 0, 0},
  {6, 0, 6, 0, 0, 0, 0, 0},
  {0, 6, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};

byte Phase6[8][8] = {
  {0, 0, 0, 0, 7, 0, 0, 0},
  {0, 0, 0, 7, 0, 7, 0, 0},
  {0, 0, 0, 7, 0, 7, 0, 0},
  {0, 0, 7, 0, 0, 0, 7, 0},
  {0, 7, 0, 0, 0, 0, 0, 7},
  {0, 7, 0, 0, 0, 0, 0, 7},
  {7, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};

byte Phase7[8][8] = {
  {0, 0, 0, 1, 0, 0, 0, 0},
  {0, 0, 1, 0, 1, 0, 0, 0},
  {0, 0, 1, 0, 1, 0, 0, 0},
  {0, 1, 0, 0, 0, 1, 0, 0},
  {1, 0, 0, 0, 0, 0, 1, 0},
  {1, 0, 0, 0, 0, 0, 1, 0},
  {0, 0, 0, 0, 0, 0, 0, 1},
  {0, 0, 0, 0, 0, 0, 0, 0}
};

byte Phase8[8][8] = {
  {0, 0, 2, 0, 0, 0, 0, 0},
  {0, 2, 0, 2, 0, 0, 0, 0},
  {0, 2, 0, 2, 0, 0, 0, 0},
  {2, 0, 0, 0, 2, 0, 0, 0},
  {0, 0, 0, 0, 0, 2, 0, 2},
  {0, 0, 0, 0, 0, 2, 0, 2},
  {0, 0, 0, 0, 0, 0, 2, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};


byte Phase9[8][8] = {
  {0, 3, 0, 0, 0, 0, 0, 0},
  {3, 0, 3, 0, 0, 0, 0, 0},
  {3, 0, 3, 0, 0, 0, 0, 0},
  {0, 0, 0, 3, 0, 0, 0, 3},
  {0, 0, 0, 0, 3, 0, 3, 0},
  {0, 0, 0, 0, 3, 0, 3, 0},
  {0, 0, 0, 0, 0, 3, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};


byte Phase10[8][8] = {
  {4, 0, 0, 0, 0, 0, 0, 0},
  {0, 4, 0, 0, 0, 0, 0, 4},
  {0, 4, 0, 0, 0, 0, 0, 4},
  {0, 0, 4, 0, 0, 0, 4, 0},
  {0, 0, 0, 4, 0, 4, 0, 0},
  {0, 0, 0, 4, 0, 4, 0, 0},
  {0, 0, 0, 0, 4, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};


byte Phase11[8][8] = {
  {0, 0, 0, 0, 0, 0, 0, 5},
  {5, 0, 0, 0, 0, 0, 5, 0},
  {5, 0, 0, 0, 0, 0, 5, 0},
  {0, 5, 0, 0, 0, 5, 0, 0},
  {0, 0, 5, 0, 5, 0, 0, 0},
  {0, 0, 5, 0, 5, 0, 0, 0},
  {0, 0, 0, 5, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};


byte Phase12[8][8] = {
  {0, 0, 0, 0, 0, 0, 6, 0},
  {0, 0, 0, 0, 0, 6, 0, 6},
  {0, 0, 0, 0, 0, 6, 0, 6},
  {6, 0, 0, 0, 6, 0, 0, 0},
  {0, 6, 0, 6, 0, 0, 0, 0},
  {0, 6, 0, 6, 0, 0, 0, 0},
  {0, 0, 6, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};


byte Phase13[8][8] = {
  {0, 0, 0, 0, 0, 7, 0, 0},
  {0, 0, 0, 0, 7, 0, 7, 0},
  {0, 0, 0, 0, 7, 0, 7, 0},
  {0, 0, 0, 7, 0, 0, 0, 7},
  {7, 0, 7, 0, 0, 0, 0, 0},
  {7, 0, 7, 0, 0, 0, 0, 0},
  {0, 7, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};

byte Phase14[8][8] = {
  {0, 0, 0, 0, 1, 0, 0, 0},
  {0, 0, 0, 1, 0, 1, 0, 0},
  {0, 0, 0, 1, 0, 1, 0, 0},
  {0, 0, 1, 0, 0, 0, 1, 0},
  {0, 1, 0, 0, 0, 0, 0, 1},
  {0, 1, 0, 0, 0, 0, 0, 1},
  {1, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};

byte Phase15[8][8] = {
  {0, 0, 0, 2, 0, 0, 0, 0},
  {0, 0, 2, 0, 2, 0, 0, 0},
  {0, 0, 2, 0, 2, 0, 0, 0},
  {0, 2, 0, 0, 0, 2, 0, 0},
  {2, 0, 0, 0, 0, 0, 2, 0},
  {2, 0, 0, 0, 0, 0, 2, 0},
  {0, 0, 0, 0, 0, 0, 0, 2},
  {0, 0, 0, 0, 0, 0, 0, 0}
};                      

byte Circle1[8][8] = {{5,5,5,5,5,5,5,5},
                      {5,5,5,5,5,5,5,5},
                      {5,5,5,5,5,5,5,5},
                      {5,5,5,1,1,5,5,5},
                      {5,5,5,1,1,5,5,5},
                      {5,5,5,5,5,5,5,5},
                      {5,5,5,5,5,5,5,5},
                      {5,5,5,5,5,5,5,5}};



byte Circle2[8][8] = {{5,5,5,5,5,5,5,5},
                      {5,5,5,5,5,5,5,5},
                      {5,5,5,1,1,5,5,5},
                      {5,5,1,5,5,1,5,5},
                      {5,5,1,5,5,1,5,5},
                      {5,5,5,1,1,5,5,5},
                      {5,5,5,5,5,5,5,5},
                      {5,5,5,5,5,5,5,5}};


byte Circle3[8][8] = {{5,5,5,5,5,5,5,5},
                      {5,5,5,1,1,5,5,5},
                      {5,5,1,5,5,1,5,5},
                      {5,1,5,5,5,5,1,5},
                      {5,1,5,5,5,5,1,5},
                      {5,5,1,5,5,1,5,5},
                      {5,5,5,1,1,5,5,5},
                      {5,5,5,5,5,5,5,5}};

byte Circle4[8][8] = {{5,5,5,1,1,5,5,5},
                      {5,5,1,5,5,1,5,5},
                      {5,1,5,5,5,5,1,5},
                      {1,5,5,5,5,5,5,1},
                      {1,5,5,5,5,5,5,1},
                      {5,1,5,5,5,5,1,5},
                      {5,5,1,5,5,1,5,5},
                      {5,5,5,1,1,5,5,5}};
                      
byte Square0[8][8] = {{4,7,7,7,7,7,7,4},
                      {7,7,7,7,7,7,7,7},
                      {7,7,5,5,5,5,7,7},
                      {7,7,5,5,5,5,7,7},
                      {7,7,5,5,5,5,7,7},
                      {7,7,5,5,5,5,7,7},
                      {7,7,7,7,7,7,7,7},
                      {4,7,7,7,7,7,7,4}};
                      
byte Square1[8][8] = {{4,7,7,7,7,7,7,4},
                      {7,7,7,7,7,7,7,7},
                      {7,7,7,7,7,7,7,7},
                      {7,7,7,7,7,7,7,7},
                      {5,5,5,5,7,7,7,7},
                      {5,5,5,5,7,7,7,7},
                      {5,5,5,5,7,7,7,7},
                      {5,5,5,5,7,7,7,4}};

byte Square2[8][8] = {{4,7,7,7,7,7,7,4},
                      {7,7,7,7,7,7,7,7},
                      {7,7,7,7,7,7,7,7},
                      {7,7,7,7,7,7,7,7},
                      {7,7,7,7,5,5,5,5},
                      {7,7,7,7,5,5,5,5},
                      {7,7,7,7,5,5,5,5},
                      {4,7,7,7,5,5,5,5}};

byte Square3[8][8] = {{4,7,7,7,5,5,5,5},
                      {7,7,7,7,5,5,5,5},
                      {7,7,7,7,5,5,5,5},
                      {7,7,7,7,5,5,5,5},
                      {7,7,7,7,7,7,7,7},
                      {7,7,7,7,7,7,7,7},
                      {7,7,7,7,7,7,7,7},
                      {4,7,7,7,7,7,7,4}};

byte Square4[8][8] = {{5,5,5,5,7,7,7,4},
                      {5,5,5,5,7,7,7,7},
                      {5,5,5,5,7,7,7,7},
                      {5,5,5,5,7,7,7,7},
                      {7,7,7,7,7,7,7,7},
                      {7,7,7,7,7,7,7,7},
                      {7,7,7,7,7,7,7,7},
                      {4,7,7,7,7,7,7,4}};

byte Triforce0[8][8] = {{3,3,3,3,3,3,3,3},
                        {3,3,3,3,3,3,3,3},
                        {3,3,3,3,3,3,3,3},
                        {3,3,3,3,2,3,3,3},
                        {3,3,3,2,6,2,3,3},
                        {3,3,2,6,6,6,2,3},
                        {3,2,6,6,6,6,6,2},
                        {2,6,6,6,6,6,6,6}};
                      
byte Triforce1[8][8] = {{3,3,3,3,3,3,3,3},
                        {3,3,3,3,3,3,3,3},
                        {3,3,3,3,3,3,3,3},
                        {3,3,3,2,3,3,3,3},
                        {3,3,2,6,2,3,3,3},
                        {3,2,6,6,6,2,3,3},
                        {2,6,6,6,6,6,2,3},
                        {6,6,6,6,6,6,6,2}};


byte Triforce2[8][8] = {{3,3,3,3,3,3,3,3},
                        {3,3,3,3,3,3,3,3},
                        {3,3,3,3,3,3,3,3},
                        {3,3,2,3,3,3,3,3},
                        {3,2,6,2,3,3,3,3},
                        {2,6,6,6,2,3,3,3},
                        {6,6,6,6,6,2,3,2},
                        {6,6,6,6,6,6,2,6}};


byte Triforce3[8][8] = {{3,3,3,3,3,3,3,3},
                        {3,3,3,3,3,3,3,3},
                        {3,3,3,3,3,3,3,3},
                        {3,2,3,3,3,3,3,3},
                        {2,6,2,3,3,3,3,3},
                        {6,6,6,2,3,3,3,2},
                        {6,6,6,6,2,3,2,6},
                        {6,6,6,6,6,2,6,6}};


byte Triforce4[8][8] = {{3,3,3,3,3,3,3,3},
                        {3,3,3,3,3,3,3,3},
                        {3,3,3,3,3,3,3,3},
                        {2,3,3,3,3,3,3,3},
                        {6,2,3,3,3,3,3,2},
                        {6,6,2,3,3,3,2,6},
                        {6,6,6,2,3,2,6,6},
                        {6,6,6,6,2,6,6,6}};


byte Triforce5[8][8] = {{3,3,3,3,3,3,3,3},
                        {3,3,3,3,3,3,3,3},
                        {3,3,3,3,3,3,3,3},
                        {3,3,3,3,3,3,3,2},
                        {2,3,3,3,3,3,2,6},
                        {6,2,3,3,3,2,6,6},
                        {6,6,2,3,2,6,6,6},
                        {6,6,6,2,6,6,6,6}};
                      
byte Triforce6[8][8] = {{3,3,3,3,3,3,3,3},
                        {3,3,3,3,3,3,3,3},
                        {3,3,3,3,3,3,3,3},
                        {3,3,3,3,3,3,2,3},
                        {3,3,3,3,3,2,6,2},
                        {2,3,3,3,2,6,6,6},
                        {6,2,3,2,6,6,6,6},
                        {6,6,2,6,6,6,6,6}};

byte Triforce7[8][8] = {{3,3,3,3,3,3,3,3},
                        {3,3,3,3,3,3,3,3},
                        {3,3,3,3,3,3,3,3},
                        {3,3,3,3,3,2,3,3},
                        {3,3,3,3,2,6,2,3},
                        {3,3,3,2,6,6,6,2},
                        {2,3,2,6,6,6,6,6},
                        {6,2,6,6,6,6,6,6}};

byte Triforce8[8][8] = {{3,3,3,3,3,3,3,3},
                        {3,3,3,3,3,3,3,3},
                        {3,3,3,3,3,3,3,3},
                        {3,3,3,3,2,3,3,3},
                        {3,3,3,2,6,2,3,3},
                        {3,3,2,6,6,6,2,3},
                        {3,2,6,6,6,6,6,2},
                        {2,6,6,6,6,6,6,6}};

byte Dead0[8][8] = {
  {7, 1, 1, 1, 7, 7, 7, 7},
  {7, 1, 1, 1, 7, 7, 7, 7},
  {7, 7, 1, 7, 7, 7, 7, 5},
  {7, 1, 1, 1, 7, 7, 7, 7},
  {1, 7, 1, 7, 1, 7, 7, 7},
  {7, 7, 1, 7, 7, 7, 7, 7},
  {7, 1, 7, 1, 7, 7, 7, 7},
  {7, 1, 7, 1, 7, 7, 7, 7}
};


byte Dead1[8][8] = {
  {7, 1, 1, 1, 7, 7, 7, 7},
  {7, 1, 1, 1, 7, 7, 7, 7},
  {7, 7, 1, 7, 7, 7, 5, 5},
  {7, 1, 1, 1, 7, 7, 7, 7},
  {1, 7, 1, 7, 1, 7, 7, 7},
  {7, 7, 1, 7, 7, 7, 7, 7},
  {7, 1, 7, 1, 7, 7, 7, 7},
  {7, 1, 7, 1, 7, 7, 7, 7}
};


byte Dead2[8][8] = {
  {7, 1, 1, 1, 7, 7, 7, 7},
  {7, 1, 1, 1, 7, 7, 7, 7},
  {7, 7, 1, 7, 7, 5, 5, 5},
  {7, 1, 1, 1, 7, 7, 7, 7},
  {1, 7, 1, 7, 1, 7, 7, 7},
  {7, 7, 1, 7, 7, 7, 7, 7},
  {7, 1, 7, 1, 7, 7, 7, 7},
  {7, 1, 7, 1, 7, 7, 7, 7}
};


byte Dead3[8][8] = {
  {7, 1, 1, 1, 7, 7, 7, 7},
  {7, 1, 1, 1, 7, 7, 7, 7},
  {7, 7, 1, 7, 5, 5, 5, 7},
  {7, 1, 1, 1, 7, 7, 7, 7},
  {1, 7, 1, 7, 1, 7, 7, 7},
  {7, 7, 1, 7, 7, 7, 7, 7},
  {7, 1, 7, 1, 7, 7, 7, 7},
  {7, 1, 7, 1, 7, 7, 7, 7}
};


byte Dead4[8][8] = {
  {7, 7, 7, 7, 7, 7, 7, 7},
  {7, 7, 7, 7, 1, 1, 7, 7},
  {7, 7, 1, 7, 1, 1, 1, 7},
  {7, 1, 1, 1, 7, 1, 1, 7},
  {1, 7, 1, 7, 1, 7, 7, 7},
  {7, 7, 1, 7, 7, 7, 7, 7},
  {7, 1, 7, 1, 7, 7, 7, 7},
  {7, 1, 7, 1, 7, 7, 7, 7}
};


byte Dead5[8][8] = {
  {7, 7, 7, 7, 7, 7, 7, 7},
  {7, 7, 7, 7, 7, 7, 7, 7},
  {7, 7, 1, 7, 7, 7, 7, 7},
  {7, 1, 1, 1, 7, 7, 7, 7},
  {1, 7, 1, 7, 1, 7, 7, 7},
  {7, 7, 1, 7, 7, 7, 1, 1},
  {7, 1, 7, 1, 7, 7, 1, 1},
  {7, 1, 7, 1, 7, 7, 1, 1}
};

byte Dead6[8][8] = {
  {2, 7, 2, 7, 2, 7, 2, 7},
  {7, 2, 2, 2, 7, 7, 7, 7},
  {7, 7, 1, 7, 7, 2, 7, 2},
  {7, 1, 1, 1, 7, 7, 7, 7},
  {1, 7, 1, 7, 1, 7, 2, 7},
  {7, 7, 1, 7, 2, 7, 7, 7},
  {7, 1, 7, 1, 7, 1, 1, 1},
  {7, 1, 7, 1, 2, 1, 1, 1}
};

unsigned long LastStateChangeTime;
unsigned long StateWaitTime;
int State;

void sendBit(uint8_t aData)
{
  digitalWrite(DATA,  aData);  
  digitalWrite(CLOCK, HIGH);
  digitalWrite(CLOCK, LOW);
  digitalWrite(DATA,  LOW);  
}

void sendDataFromArray()
{
  byte lineIndex;
  byte rowIndex;

  for(lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    //Set Anode Line
    for(rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      if (lineIndex == rowIndex)
      {
        sendBit(HIGH);
      }
      else
      {
        sendBit(LOW);
      }
    }

    //Set Green Row
    for(rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      if ((Screen[lineIndex][rowIndex] & 1) == 0)
      {
        sendBit(HIGH);
      }
      else
      {
        sendBit(LOW);
      }
    }

    //Set Red Row
    for(rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      if ((Screen[lineIndex][rowIndex] & 2) == 0)
      {
        sendBit(HIGH);
      }
      else
      {
        sendBit(LOW);
      }
    }

    //Set Blue Row
    for(rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      if ((Screen[lineIndex][rowIndex] & 4) == 0)
      {
        sendBit(HIGH);
      }
      else
      {
        sendBit(LOW);
      }
    }

    //Send data to output
    digitalWrite(LATCH, HIGH);
    digitalWrite(LATCH, LOW);
  }
}

void Clear()
{  
  byte lineIndex;
  byte rowIndex;

  for(lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for(rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = 0;
    }
  }
}

void ShowRainBow()
{  
  byte lineIndex;
  byte rowIndex;

  for(lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    Screen[lineIndex][0] = 7;
    Screen[lineIndex][1] = 7;
    Screen[lineIndex][2] = 7;
    Screen[lineIndex][3] = 7;
    Screen[lineIndex][4] = 7;
    Screen[lineIndex][5] = 7;
    Screen[lineIndex][6] = 7;
    Screen[lineIndex][7] = 7;
  }
}

void ShowHeart0(){  
  byte lineIndex;
  byte rowIndex;

  for(lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for(rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Heart0[lineIndex][rowIndex];
    }
  }
}

void ShowHeart1(){  
  byte lineIndex;
  byte rowIndex;

  for(lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for(rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Heart1[lineIndex][rowIndex];
    }
  }
}

void ShowHeart2(){
    
  byte lineIndex;
  byte rowIndex;

  for(lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for(rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Heart2[lineIndex][rowIndex];
    }
  }
}

void ShowHeart3(){
    
  byte lineIndex;
  byte rowIndex;

  for(lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for(rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Heart3[lineIndex][rowIndex];
    }
  }
}

void ShowHeart4(){
    
  byte lineIndex;
  byte rowIndex;

  for(lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for(rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Heart4[lineIndex][rowIndex];
    }
  }
}

void ShowHeart5(){  
  byte lineIndex;
  byte rowIndex;

  for(lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for(rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Heart5[lineIndex][rowIndex];
    }
  }
}

void ShowSineAmp0() {
  byte lineIndex;
  byte rowIndex;

  for (lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for (rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = SineAmp0[lineIndex][rowIndex];
    }
  }
}

void ShowSineAmp1() {
  byte lineIndex;
  byte rowIndex;

  for (lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for (rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = SineAmp1[lineIndex][rowIndex];
    }
  }
}

void ShowSineAmp2() {

  byte lineIndex;
  byte rowIndex;

  for (lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for (rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = SineAmp2[lineIndex][rowIndex];
    }
  }
}

void ShowSineAmp3() {

  byte lineIndex;
  byte rowIndex;

  for (lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for (rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = SineAmp3[lineIndex][rowIndex];
    }
  }
}

void ShowSineAmp4() {

  byte lineIndex;
  byte rowIndex;

  for (lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for (rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = SineAmp4[lineIndex][rowIndex];
    }
  }
}

void ShowSineAmp5() {
  byte lineIndex;
  byte rowIndex;

  for (lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for (rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = SineAmp5[lineIndex][rowIndex];
    }
  }
}

void ShowSineAmp6() {
  byte lineIndex;
  byte rowIndex;

  for (lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for (rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = SineAmp6[lineIndex][rowIndex];
    }
  }
}

void ShowSineAmp7() {
  byte lineIndex;
  byte rowIndex;

  for (lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for (rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = SineAmp7[lineIndex][rowIndex];
    }
  }
}
void ShowSineAmp8() {
  byte lineIndex;
  byte rowIndex;

  for (lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for (rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = SineAmp8[lineIndex][rowIndex];
    }
  }
}
void ShowSineAmp9() {
  byte lineIndex;
  byte rowIndex;

  for (lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for (rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = SineAmp9[lineIndex][rowIndex];
    }
  }
}
void ShowSineAmp10() {
  byte lineIndex;
  byte rowIndex;

  for (lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for (rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = SineAmp10[lineIndex][rowIndex];
    }
  }
}
void ShowSineAmp11() {
  byte lineIndex;
  byte rowIndex;

  for (lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for (rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = SineAmp11[lineIndex][rowIndex];
    }
  }
}
void ShowSineAmp12() {
  byte lineIndex;
  byte rowIndex;

  for (lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for (rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = SineAmp12[lineIndex][rowIndex];
    }
  }
}
void ShowSineAmp13() {
  byte lineIndex;
  byte rowIndex;

  for (lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for (rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = SineAmp13[lineIndex][rowIndex];
    }
  }
}

void ShowPhase0() {
  byte lineIndex;
  byte rowIndex;

  for (lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for (rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Phase0[lineIndex][rowIndex];
    }
  }
}

void ShowPhase1() {
  byte lineIndex;
  byte rowIndex;

  for (lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for (rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Phase1[lineIndex][rowIndex];
    }
  }
}

void ShowPhase2() {

  byte lineIndex;
  byte rowIndex;

  for (lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for (rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Phase2[lineIndex][rowIndex];
    }
  }
}

void ShowPhase3() {

  byte lineIndex;
  byte rowIndex;

  for (lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for (rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Phase3[lineIndex][rowIndex];
    }
  }
}

void ShowPhase4() {

  byte lineIndex;
  byte rowIndex;

  for (lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for (rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Phase4[lineIndex][rowIndex];
    }
  }
}

void ShowPhase5() {
  byte lineIndex;
  byte rowIndex;

  for (lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for (rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Phase5[lineIndex][rowIndex];
    }
  }
}

void ShowPhase6() {
  byte lineIndex;
  byte rowIndex;

  for (lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for (rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Phase6[lineIndex][rowIndex];
    }
  }
}

void ShowPhase7() {
  byte lineIndex;
  byte rowIndex;

  for (lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for (rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Phase7[lineIndex][rowIndex];
    }
  }
}
void ShowPhase8() {
  byte lineIndex;
  byte rowIndex;

  for (lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for (rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Phase8[lineIndex][rowIndex];
    }
  }
}
void ShowPhase9() {
  byte lineIndex;
  byte rowIndex;

  for (lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for (rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Phase9[lineIndex][rowIndex];
    }
  }
}
void ShowPhase10() {
  byte lineIndex;
  byte rowIndex;

  for (lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for (rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Phase10[lineIndex][rowIndex];
    }
  }
}
void ShowPhase11() {
  byte lineIndex;
  byte rowIndex;

  for (lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for (rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Phase11[lineIndex][rowIndex];
    }
  }
}
void ShowPhase12() {
  byte lineIndex;
  byte rowIndex;

  for (lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for (rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Phase12[lineIndex][rowIndex];
    }
  }
}
void ShowPhase13() {
  byte lineIndex;
  byte rowIndex;

  for (lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for (rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Phase13[lineIndex][rowIndex];
    }
  }
}
void ShowPhase14() {
  byte lineIndex;
  byte rowIndex;

  for (lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for (rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Phase14[lineIndex][rowIndex];
    }
  }
}
void ShowPhase15() {
  byte lineIndex;
  byte rowIndex;

  for (lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for (rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Phase15[lineIndex][rowIndex];
    }
  }
}


void ShowCircle1(){  
  byte lineIndex;
  byte rowIndex;

  for(lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for(rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Circle1[lineIndex][rowIndex];
    }
  }
}

void ShowCircle2(){
    
  byte lineIndex;
  byte rowIndex;

  for(lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for(rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Circle2[lineIndex][rowIndex];
    }
  }
}

void ShowCircle3(){
    
  byte lineIndex;
  byte rowIndex;

  for(lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for(rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Circle3[lineIndex][rowIndex];
    }
  }
}

void ShowCircle4(){
    
  byte lineIndex;
  byte rowIndex;

  for(lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for(rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Circle4[lineIndex][rowIndex];
    }
  }
}

void ShowSquare0(){  
  byte lineIndex;
  byte rowIndex;

  for(lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for(rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Square0[lineIndex][rowIndex];
    }
  }
}

void ShowSquare1(){  
  byte lineIndex;
  byte rowIndex;

  for(lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for(rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Square1[lineIndex][rowIndex];
    }
  }
}

void ShowSquare2(){
    
  byte lineIndex;
  byte rowIndex;

  for(lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for(rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Square2[lineIndex][rowIndex];
    }
  }
}

void ShowSquare3(){
    
  byte lineIndex;
  byte rowIndex;

  for(lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for(rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Square3[lineIndex][rowIndex];
    }
  }
}

void ShowSquare4(){
    
  byte lineIndex;
  byte rowIndex;

  for(lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for(rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Square4[lineIndex][rowIndex];
    }
  }
}

void ShowTriforce0(){  
  byte lineIndex;
  byte rowIndex;

  for(lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for(rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Triforce0[lineIndex][rowIndex];
    }
  }
}

void ShowTriforce1(){  
  byte lineIndex;
  byte rowIndex;

  for(lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for(rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Triforce1[lineIndex][rowIndex];
    }
  }
}

void ShowTriforce2(){
    
  byte lineIndex;
  byte rowIndex;

  for(lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for(rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Triforce2[lineIndex][rowIndex];
    }
  }
}

void ShowTriforce3(){
    
  byte lineIndex;
  byte rowIndex;

  for(lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for(rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Triforce3[lineIndex][rowIndex];
    }
  }
}

void ShowTriforce4(){
    
  byte lineIndex;
  byte rowIndex;

  for(lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for(rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Triforce4[lineIndex][rowIndex];
    }
  }
}

void ShowTriforce5(){  
  byte lineIndex;
  byte rowIndex;

  for(lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for(rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Triforce5[lineIndex][rowIndex];
    }
  }
}

void ShowTriforce6(){  
  byte lineIndex;
  byte rowIndex;

  for(lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for(rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Triforce6[lineIndex][rowIndex];
    }
  }
}

void ShowTriforce7(){  
  byte lineIndex;
  byte rowIndex;

  for(lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for(rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Triforce7[lineIndex][rowIndex];
    }
  }
}

void ShowTriforce8(){  
  byte lineIndex;
  byte rowIndex;

  for(lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for(rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Triforce8[lineIndex][rowIndex];
    }
  }
}

void ShowDead0() {
  byte lineIndex;
  byte rowIndex;

  for (lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for (rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Dead0[lineIndex][rowIndex];
    }
  }
}

void ShowDead1() {
  byte lineIndex;
  byte rowIndex;

  for (lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for (rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Dead1[lineIndex][rowIndex];
    }
  }
}

void ShowDead2() {

  byte lineIndex;
  byte rowIndex;

  for (lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for (rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Dead2[lineIndex][rowIndex];
    }
  }
}

void ShowDead3() {

  byte lineIndex;
  byte rowIndex;

  for (lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for (rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Dead3[lineIndex][rowIndex];
    }
  }
}

void ShowDead4() {

  byte lineIndex;
  byte rowIndex;

  for (lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for (rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Dead4[lineIndex][rowIndex];
    }
  }
}

void ShowDead5() {
  byte lineIndex;
  byte rowIndex;

  for (lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for (rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Dead5[lineIndex][rowIndex];
    }
  }
}

void ShowDead6() {
  byte lineIndex;
  byte rowIndex;

  for (lineIndex = 0; lineIndex < 8; lineIndex++)
  {
    for (rowIndex = 0; rowIndex < 8; rowIndex++)
    {
      Screen[lineIndex][rowIndex] = Dead6[lineIndex][rowIndex];
    }
  }
}

//Animates the Heart Animation
void AnimateHeart()
{
  State++;
  if (State == 7)
  {
    State = 0;
  }

  LastStateChangeTime = millis();
  switch (State)
  {

     case 1:
       ShowHeart0();
       StateWaitTime = 200;
       break;
     case 2:
       ShowHeart1();
       StateWaitTime = 200;
       break;
     case 3:
       ShowHeart2();
       StateWaitTime = 200;
       break;
     case 4:
       ShowHeart3();
       StateWaitTime = 200;
       break;   
     case 5:
       ShowHeart4();
       StateWaitTime = 100;
       break;   
     case 6:
       ShowHeart5();
       StateWaitTime = 200;
       break;   

  }
}

//Animates the SineAmp Animation
void AnimateSineAmp()
{
  State++;
  if (State == 14)
  {
    State = 1;
  }

  LastStateChangeTime = millis();
  switch (State)
  {

    case 1:
      ShowSineAmp0();
      StateWaitTime = 100;
      break;
    case 2:
      ShowSineAmp1();
      StateWaitTime = 100;
      break;
    case 3:
      ShowSineAmp2();
      StateWaitTime = 100;
      break;
    case 4:
      ShowSineAmp3();
      StateWaitTime = 100;
      break;
    case 5:
      ShowSineAmp4();
      StateWaitTime = 100;
      break;
    case 6:
      ShowSineAmp5();
      StateWaitTime = 100;
      break;
    case 7:
      ShowSineAmp6();
      StateWaitTime = 100;
      break;
    case 8:
      ShowSineAmp7();
      StateWaitTime = 100;
      break;
      case 9:
      ShowSineAmp8();
      StateWaitTime = 100;
      break;
      case 10:
      ShowSineAmp9();
      StateWaitTime = 100;
      break;
      case 11:
      ShowSineAmp10();
      StateWaitTime = 100;
      break;
      case 12:
      ShowSineAmp11();
      StateWaitTime = 100;
      break;
      case 13:
      ShowSineAmp12();
      StateWaitTime = 100;
      break;
  }
}

//Animates the Phase Animation
void AnimatePhase()
{
  State++;
  if (State == 17)
  {
    State = 1;
  }

  LastStateChangeTime = millis();
  switch (State)
  {

    case 1:
      ShowPhase0();
      StateWaitTime = 150;
      break;
    case 2:
      ShowPhase1();
      StateWaitTime = 150;
      break;
    case 3:
      ShowPhase2();
      StateWaitTime = 150;
      break;
    case 4:
      ShowPhase3();
      StateWaitTime = 100;
      break;
    case 5:
      ShowPhase4();
      StateWaitTime = 150;
      break;
    case 6:
      ShowPhase5();
      StateWaitTime = 150;
      break;
    case 7:
      ShowPhase6();
      StateWaitTime = 150;
      break;
    case 8:
      ShowPhase7();
      StateWaitTime = 150;
      break;
      case 9:
      ShowPhase8();
      StateWaitTime = 150;
      break;
      case 10:
      ShowPhase9();
      StateWaitTime = 150;
      break;
      case 11:
      ShowPhase10();
      StateWaitTime = 150;
      break;
      case 12:
      ShowPhase11();
      StateWaitTime = 150;
      break;
      case 13:
      ShowPhase12();
      StateWaitTime = 150;
      break;
      case 14:
      ShowPhase13();
      StateWaitTime = 150;
      break;
      case 15:
      ShowPhase14();
      StateWaitTime = 150;
      break;
      case 16:
      ShowPhase15();
      StateWaitTime = 150;
      break;
  }
}

//Animates the Circle Animation
void AnimateCircle()
{
  State++;
  if (State == 5)
  {
    State = 0;
  }

  LastStateChangeTime = millis();
  switch (State)
  {

     case 1:
       ShowCircle1();
       StateWaitTime = 60;
       break;
     case 2:
       ShowCircle2();
       StateWaitTime = 60;
       break;
     case 3:
       ShowCircle3();
       StateWaitTime = 60;
       break;
     case 4:
       ShowCircle4();
       StateWaitTime = 60;
       break;   

  }
}

//Animates the Square Animation
void AnimateSquare()
{
  State++;
  if (State == 6)
  {
    State = 1;
  }

  LastStateChangeTime = millis();
  switch (State)
  {

     case 1:
       ShowSquare0();
       StateWaitTime = 200;
       break;
     case 2:
       ShowSquare1();
       StateWaitTime = 200;
       break;
     case 3:
       ShowSquare2();
       StateWaitTime = 200;
       break;
     case 4:
       ShowSquare3();
       StateWaitTime = 200;
       break;   
     case 5:
       ShowSquare4();
       StateWaitTime = 200;
       break;   

  }
}

//Animates the Triforce Animation
void AnimateTriforce()
{
  State++;
  if (State == 8)
  {
    State = 1;
  }

  LastStateChangeTime = millis();
  switch (State)
  {

     case 1:
       ShowTriforce0();
       StateWaitTime = 300;
       break;
     case 2:
       ShowTriforce1();
       StateWaitTime = 300;
       break;
     case 3:
       ShowTriforce2();
       StateWaitTime = 300;
       break;
     case 4:
       ShowTriforce3();
       StateWaitTime = 300;
       break;   
     case 5:
       ShowTriforce4();
       StateWaitTime = 300;
       break;   
     case 6:
       ShowTriforce5();
       StateWaitTime = 300;
       break;  
       case 7:
       ShowTriforce6();
       StateWaitTime = 300;
       break;  
       case 8:
       ShowTriforce7();
       StateWaitTime = 300;
       break;  
       case 9:
       ShowTriforce8();
       StateWaitTime = 300;
       break;   

  }
}

//Animates the Dead Animation
void AnimateDead()
{
  State++;
  if (State == 8)
  {
    State = 1;
  }

  LastStateChangeTime = millis();
  switch (State)
  {

    case 1:
      ShowDead0();
      StateWaitTime = 300;
      break;
    case 2:
      ShowDead1();
      StateWaitTime = 300;
      break;
    case 3:
      ShowDead2();
      StateWaitTime = 300;
      break;
    case 4:
      ShowDead3();
      StateWaitTime = 300;
      break;
    case 5:
      ShowDead4();
      StateWaitTime = 300;
      break;
    case 6:
      ShowDead5();
      StateWaitTime = 500;
      break;
    case 7:
      ShowDead6();
      StateWaitTime = 800;
      break;
  }
}

void setup() 
{

  Serial.begin(9600);
  pinMode(DATA, OUTPUT);
  pinMode(DATA_OUTPUT_ENABLE, OUTPUT);
  pinMode(LATCH, OUTPUT);
  pinMode(CLOCK, OUTPUT);
  pinMode(RESET, OUTPUT);

  pinMode(button1Pin, INPUT);
  
  digitalWrite(DATA_OUTPUT_ENABLE, LOW);
  digitalWrite(RESET, HIGH); 
  digitalWrite(CLOCK, LOW);
  digitalWrite(LATCH, LOW);
  digitalWrite(DATA, LOW);
  
  State = 0;
  StateWaitTime = 50;
  LastStateChangeTime = millis();
}

//  Serial.print(i);
//  Serial.println();
//  ShowPicture();
 // }

void loop() {
  
  if ((StateWaitTime > 0) &&
      (LastStateChangeTime + StateWaitTime < millis()))
  {

    
//Serial.print("Loop");
 //   UpdateState();
 //BlinkingState();
 //  ShowPicture();
 // ShowHeart2();

// AnimateHeart();
// AnimateSineAmp();
// AnimatePhase();
// AnimateCircle();
// AnimateSquare();
// AnimateTriforce();
 AnimateDead();
  }  
  
  sendDataFromArray();
}
