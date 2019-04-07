int conv_chN_to_pixN(int chN){
  map<int, int> channel_to_pixel = {
				    {99, 1},
				    {101, 2},
				    {103, 3},
				    {97, 4},
				    {73, 5},
				    {105, 6},
				    {107, 7},
				    {109, 8},
				    {100, 9},
				    {102, 10},
				    {104, 11},
				    {65, 12},
				    {112, 13},
				    {106, 14},
				    {108, 15},
				    {110, 16},
				    {98, 17},
				    {70, 18},
				    {68, 19},
				    {67, 20},
				    {77, 21},
				    {75, 22},
				    {78, 23},
				    {80, 24},
				    {71, 25},
				    {66, 26},
				    {69, 27},
				    {72, 28},
				    {76, 29},
				    {74, 30},
				    {79, 31},
				    {111, 32},
				    {7, 33},
				    {35, 34},
				    {37, 35},
				    {36, 36},
				    {46, 37},
				    {44, 38},
				    {42, 39},
				    {47, 40},
				    {34, 41},
				    {39, 42},
				    {38, 43},
				    {33, 44},
				    {45, 45},
				    {43, 46},
				    {41, 47},
				    {10, 48},
				    {6, 49},
				    {4, 50},
				    {2, 51},
				    {8, 52},
				    {48, 53},
				    {16, 54},
				    {14, 55},
				    {12, 56},
				    {5, 57},
				    {3, 58},
				    {1, 59},
				    {40, 60},
				    {9, 61},
				    {15, 62},
				    {13, 63},
				    {11, 64}
  };

  int pixel;
  return channel_to_pixel.at(chN);
}