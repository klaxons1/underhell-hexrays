void __thiscall sub_10110120(unsigned __int8 *this, int a2, float *a3, int a4, float a5, float a6)
{
  float *v6; // edx
  double v7; // st7
  int v8; // ebx
  int v9; // edi
  int v10; // esi
  double v11; // st7
  int v12; // eax
  int v13; // edx
  int v14; // edi
  float *v15; // eax
  double v16; // st5
  double v17; // st6
  int v18; // esi
  int v19; // edx
  float *v20; // eax
  int v21; // [esp+14h] [ebp+8h]

  v6 = a3;
  if ( fabs(*a3 - *(float *)a4) < 0.001 || a5 <= (double)*(float *)a4 )
  {
    v18 = 0;
    if ( this[29] )
    {
      v19 = a2 + 8;
      do
      {
        v20 = (float *)(*(_DWORD *)(a4 + 8) + v19 + -8 - a2);
        ++v18;
        v19 += 12;
        *(float *)(v19 - 20) = *v20;
        *(float *)(v19 - 16) = v20[1];
        *(float *)(v19 - 12) = v20[2];
      }
      while ( v18 < this[29] );
    }
  }
  else
  {
    v7 = a5 - *(float *)a4;
    if ( a6 <= v7 )
      v7 = a6;
    v8 = 0;
    if ( this[29] )
    {
      v9 = -8 - a2;
      v10 = a2 + 8;
      v11 = v7 * (1.0 / (*(float *)a4 - *a3)) + 1.0;
      v21 = -8 - a2;
      while ( 1 )
      {
        v12 = *((_DWORD *)v6 + 2);
        v13 = *(_DWORD *)(a4 + 8);
        v14 = v10 + v9;
        v15 = (float *)(v14 + v12);
        ++v8;
        v10 += 12;
        v16 = (*(float *)(v13 + v14 + 4) - v15[1]) * v11 + v15[1];
        v17 = (*(float *)(v13 + v14 + 8) - v15[2]) * v11 + v15[2];
        *(float *)(v10 - 20) = (*(float *)(v13 + v14) - *v15) * v11 + *v15;
        *(float *)(v10 - 16) = v16;
        *(float *)(v10 - 12) = v17;
        if ( v8 >= this[29] )
          break;
        v9 = v21;
        v6 = a3;
      }
    }
  }
}
