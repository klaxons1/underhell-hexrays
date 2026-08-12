float *__cdecl sub_101F0770(float *a1, float *a2, int a3, int a4, float a5, char a6, float *a7, float *a8, float *a9)
{
  double v9; // st7
  int v10; // ecx
  float *v11; // edi
  int v12; // eax
  double v13; // st6
  double v14; // st7
  double v15; // st7
  float *result; // eax
  double v17; // st7
  double v18; // st5

  v9 = a5;
  v10 = 0;
  if ( a3 < 4 )
  {
LABEL_8:
    while ( v10 < a3 )
    {
      if ( v9 <= a1[v10] )
        break;
      ++v10;
    }
  }
  else
  {
    v11 = a1 + 2;
    while ( v9 > *(v11 - 2) )
    {
      if ( v9 <= *(v11 - 1) )
      {
        ++v10;
        break;
      }
      if ( v9 <= *v11 )
      {
        v10 += 2;
        break;
      }
      if ( v9 <= v11[1] )
      {
        v10 += 3;
        break;
      }
      v10 += 4;
      v11 += 4;
      if ( v10 >= a3 - 3 )
        goto LABEL_8;
    }
  }
  if ( v10 )
  {
    if ( v10 == a3 )
    {
      if ( !a6 )
      {
        v17 = a2[a3 - 1];
        *a8 = a2[a3 - 1];
        result = a9;
        *a7 = v17;
        *a9 = 1.0;
        return result;
      }
      v12 = 4 * a3 - 4;
      v10 = 0;
      v13 = (double)a4 - *(float *)((char *)a1 + v12) + *a1;
    }
    else
    {
      v12 = 4 * v10 - 4;
      v13 = a1[v10] - *(float *)((char *)a1 + v12);
    }
    v14 = v9 - *(float *)((char *)a1 + v12);
  }
  else
  {
    if ( !a6 )
    {
      v15 = *a2;
      result = a7;
      *a8 = *a2;
      *a7 = v15;
      *a9 = 1.0;
      return result;
    }
    v12 = 4 * a3 - 4;
    v13 = (double)a4 - *(float *)((char *)a1 + v12) + *a1;
    v14 = v9 + (double)a4 - *(float *)((char *)a1 + v12);
  }
  v18 = *(float *)((char *)a2 + v12);
  result = a7;
  *a7 = v18;
  *a8 = a2[v10];
  *a9 = v14 / v13;
  return result;
}
