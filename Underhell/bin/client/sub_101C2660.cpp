__int16 __cdecl sub_101C2660(float *a1, int a2, int a3, int a4)
{
  float *v4; // esi
  __int16 result; // ax
  unsigned int v6; // ebx
  __int16 *v7; // edi

  v4 = a1;
  result = 3 * a4 * a3;
  v6 = (unsigned int)&a1[3 * a4 * a3];
  if ( (unsigned int)a1 < v6 )
  {
    v7 = (__int16 *)(a2 + 4);
    do
    {
      *(v7 - 2) = sub_10094C40(*v4);
      *(v7 - 1) = sub_10094C40(v4[1]);
      result = sub_10094C40(v4[2]);
      *v7 = result;
      v4 += 3;
      v7 += 4;
    }
    while ( (unsigned int)v4 < v6 );
  }
  return result;
}
