
/*
1. Read external file input.txt
has input values
 - pipe diameter
 - pipe length
 - fluid velocity
 - fluid density
 - fluid viscocity
 -

2. Ask for input to select pipe material
  - carbon/steel
  - concrete
  - glass
  - PVC/plastic
  then select roughness values based on this
  Note: values in mm convert to m ? Not sure if this means meters

3. Calculate
  - Reynolds number
  - frictional pressure
  - flow regime(laminar, transitional or turbulent)

4. For a series of fluid velocity values, between 0.1m/s and 2m/s in step of 0.1m/s,
calculate the resultant frictional pressure loss and write the pair of values (i.e. fluid
velocity versus frictional pressure loss) onto an external excel spreadsheet (name
this file output.csv)

*/
#include <stdio.h>

// roughness values
// values in mm
const float CONCRETE_ROUGHNESS = 1.0;
const float CARBON_ROUGHNESS   = 0.045 ; // steel
const float GLASS_ROUGHNESS    = 0.0015;
const float PVC_ROUGHNESS      = 0.0060; // plastic

int main(void) {

    printf("\n");
    printf("            Frictional pressure loss estimation \n");
    printf("-------------------------------------------------------------\n\n");


    char pipeMaterial;
    printf("Please select pipe material:\n\n");
    printf("1. Carbon/steel\n");
    printf("2. Concrete\n");
    printf("3. Glass\n");
    printf("4. PVC/plastic\n");
    scanf( "%c" , &pipeMaterial);
    printf("You selected: %c\n", pipeMaterial );
    getchar();


    switch (pipeMaterial) {
      case '1':
        printf("%s\n", "We have carbon/steel");
        break;
      case '2':
        printf("%s\n", "We have concrete");
        break;
      case '3':
        printf("%s\n", "We have glass");
        break;
      case '4':
        printf("%s\n", "We have pvc/plastic");
        break;

    }

  return 0;
}


int read_input(/* arguments */) {
  /* code */
  return 0;
}
