/*
  ------------------------------------------------------------------------------
  Author: Craig Lage, UC Davis
  Date: Oct 23, 2019

  Standalone cpp Poisson solver

*/

//****************** poisson.cpp **************************

#include "poisson.h"
#include <iostream>

int main(int argc, char *argv[])
{
  if(argc != 2)
    {
      printf("\nwrong number of arguments\n");
      printf("Only argument should be name of .cfg file");
      exit(0);
    }
  std::cout << "Poisson_CCD Xcode Version\n";
  MultiGrid* multi = new MultiGrid(argv[1]);

  delete multi;
  return 0;
}


