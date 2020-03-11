#include<stdio.h>
#include "Struct.h"
#include "Buildtree.h"
#include "Writetree.h"
#include <stdlib.h>
#include <math.h>
// main

int main( int argc, char **argv ) {

  Node *head;

  // make the head node
  head = makeNode( 0.0,0.0, 0 );

  // make a tree
  makeChildren( head );
  makeChildren( head->child[1] );

  // print the tree for Gnuplot
	writeTree( head );

  return 0;
}
