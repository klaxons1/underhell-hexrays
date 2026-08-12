void __thiscall sub_1002C000(unsigned __int8 *this, int a2, float *a3, int a4, float a5, float a6)
{
  float *v6; // ebx
  double v7; // st7
  int v8; // esi
  double v9; // st7
  int v10; // eax
  int v11; // edx
  double v12; // st6
  int v13; // eax
  double v14; // st7

  v6 = a3;
  if ( fabs(*a3 - *(float *)a4) < 0.001 || a5 <= (double)*(float *)a4 )
  {
    v13 = 0;
    if ( this[29] )
    {
      do
      {
        v14 = *(float *)(*(_DWORD *)(a4 + 8) + 4 * v13++);
        *(float *)(a2 + 4 * v13 - 4) = v14;
      }
      while ( v13 < this[29] );
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
      v9 = v7 * (1.0 / (*(float *)a4 - *a3)) + 1.0;
      while ( 1 )
      {
        v10 = *((_DWORD *)v6 + 2);
        v11 = 4 * v8;
        v12 = *(float *)(*(_DWORD *)(a4 + 8) + 4 * v8) - *(float *)(v10 + 4 * v8);
        ++v8;
        *(float *)(v11 + a2) = v12 * v9 + *(float *)(v10 + v11);
        if ( v8 >= this[29] )
          break;
        v6 = a3;
      }
    }
  }
}
