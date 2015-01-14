//
//  main.c
//  Boxes
//
//  Created by Johnny on 2015-01-13.
//  Copyright (c) 2015 Empath Solutions. All rights reserved.
//

#include <stdio.h>

//
// Types
//

typedef struct Box {
	float height;
	float width;
	float depth;
} Box;

//
// Prototypes
//

Box* createBox(Box* box, float height, float width, float depth);
float volume(Box *box);
float volumeRatio(Box *box1, Box *box2);

//
// Main
//

int main(int argc, const char * argv[]) {

	Box box1 = *createBox(&box1, 3.0, 6.0, 2.0);
	Box box2 = *createBox(&box2, 3.0, 4.0, 2.0);
	
	printf("Box (%.2f, %.2f, %.2f) has volume %.2f.\n", box1.height, box1.width, box1.depth, volume(&box1));
	
	printf("Box (%.2f, %.2f, %.2f) has volume %.2f.\n", box2.height, box2.width, box2.depth, volume(&box2));
	
	printf("Volume ratio of first box to second box is %.2f.\n", volumeRatio(&box1, &box2));

    return 0;
}

//
// Definitions
//

Box* createBox(Box* box, float height, float width, float depth) {
	
	box->height = height;
	box->width = width;
	box->depth = depth;
	
	return box;
}

float volume(Box *box) {
	return box->height * box->width * box->depth;
}

float volumeRatio(Box *box1, Box *box2) {
	return volume(box1) / volume(box2);
}
