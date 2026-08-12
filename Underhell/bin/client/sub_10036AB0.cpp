void __thiscall sub_10036AB0(unsigned __int8 *this, int a2, float *a3, float *a4, float a5, float a6)
{
  double v6; // st7
  int v7; // edi
  float *v8; // eax
  int v9; // esi
  int v10; // edx
  double v11; // st7
  char *v12; // ebx
  double v13; // st6
  double v14; // st4
  double v15; // st5
  double v16; // st6
  int v17; // edi
  int v18; // edx
  float *v19; // eax
  int i; // [esp+14h] [ebp+8h]

  if ( fabs(*a3 - *a4) < 0.001 || a5 <= (double)*a4 )
  {
    v17 = 0;
    if ( this[29] )
    {
      v18 = a2 + 8;
      v19 = a4 + 3;
      do
      {
        ++v17;
        *(float *)(v18 - 8) = *(v19 - 2);
        v19 += 3;
        v18 += 12;
        *(float *)(v18 - 16) = *(v19 - 4);
        *(float *)(v18 - 12) = *(v19 - 3);
      }
      while ( v17 < this[29] );
    }
  }
  else
  {
    v6 = a5 - *a4;
    if ( a6 <= v6 )
      v6 = a6;
    v7 = 0;
    if ( this[29] )
    {
      v8 = a3 + 3;
      v9 = (char *)a4 - (char *)a3;
      v10 = a2 + 4;
      v11 = v6 * (1.0 / (*a4 - *a3)) + 1.0;
      v12 = (char *)a4 - a2;
      for ( i = (int)a4 - a2; ; v12 = (char *)i )
      {
        ++v7;
        v13 = *(float *)&v12[v10] - *(v8 - 2);
        v8 += 3;
        v10 += 12;
        v14 = v13 * v11 + *(v8 - 5);
        v15 = (*(float *)((char *)v8 + v9 - 16) - *(v8 - 4)) * v11 + *(v8 - 4);
        v16 = (*(float *)((char *)v8 + v9 - 12) - *(v8 - 3)) * v11 + *(v8 - 3);
        *(float *)(v10 - 16) = v14;
        *(float *)(v10 - 12) = v15;
        *(float *)(v10 - 8) = v16;
        if ( v7 >= this[29] )
          break;
      }
    }
  }
}
