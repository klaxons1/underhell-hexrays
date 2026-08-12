void __cdecl sub_101C2560(unsigned __int16 *a1, int a2, int a3, int a4)
{
  unsigned __int16 *v4; // esi
  unsigned int v5; // ebx
  float *v6; // edi
  double v7; // st7

  v4 = a1;
  v5 = (unsigned int)&a1[4 * a4 * a3];
  if ( (unsigned int)a1 < v5 )
  {
    v6 = (float *)(a2 + 8);
    do
    {
      *(v6 - 2) = sub_1001AB20(*v4);
      *(v6 - 1) = sub_1001AB20(v4[1]);
      v7 = sub_1001AB20(v4[2]);
      v4 += 4;
      *v6 = v7;
      v6 += 3;
    }
    while ( (unsigned int)v4 < v5 );
  }
}
