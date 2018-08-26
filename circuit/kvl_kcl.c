#include <stdio.h>

int main()
{


  //  float p1,p2,p3,p4,p5,p6,p7,p8,p9;
  //  float v1,v2,v3,v4,v5,v6,v7,v8,v9;
  //  float i1,i2,i3,i4,i5,i6,i7,i8,i9;
  //  float r1,r2,r3,r4,r5,r6,r7,r8,r9;
  float sum;
  float p[10]={0};
  float v[10]={0};
  float i[10]={0};
  float r[10]={0};
  
  //as we know
  i[1] = 2;
  v[2] = 4;
  v[3] = -3;
  i[4] = 3;
  v[5] = 12;
  i[6] = -1.5;

  //things we can guess
  v[1] = 1;
  v[4] = -16;
  v[6] = -15;
  i[2] = 1;
  i[3] = -0.5;
  i[5] = 1.5;



  //power of every element
  p[0] = v[0] * i[0];
  p[1] = v[1] * i[1];
  p[2] = v[2] * i[2];
  p[3] = v[3] * i[3];
  p[4] = v[4] * i[4];
  p[5] = v[5] * i[5];
  p[6] = v[6] * i[6];
  p[7] = v[7] * i[7];
  p[8] = v[8] * i[8];
  p[9] = v[9] * i[9];

      
  



  sum = p[1] + p[2] + p[3] + p[4] + p[5] + p[6] + p[7] + p[8] + p[9] ;
  
  
  printf("sum of power = %f\n",sum);
  
  printf(
"$p1 = %f\n\
$p2 = %f\n\
$p3 = %f\n"
	 ,p[1],p[2],p[3]);

  return 0;
}
