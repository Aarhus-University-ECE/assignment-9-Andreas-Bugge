extern "C"{
    // Add the header files required to run your 
    #include "dfs.h" 
}

#include <cstddef>

// File for sandboxing and trying out code
int main(int argc, char **argv)
{
     bnode *root = make_node (4,
			  make_node (7,
				     make_node (28,
						make_node (77,
							   NULL,
							   NULL),
						make_node (23,
							   NULL,
							   NULL)),
				     make_node (86,
						make_node (3,
							   NULL,
							   NULL),
						make_node (9,
							   NULL,
							   NULL))),
			  make_node (98,
				     NULL,
				     NULL));
    // Print Tree
    DFT(root);
    return 0;
}