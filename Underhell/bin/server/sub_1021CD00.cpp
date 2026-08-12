void __thiscall sub_1021CD00(int this, int a2, int a3)
{
  int v3; // ebx
  double v5; // st7
  int i; // edi
  int v7; // ecx
  float *v8; // edx
  float *v9; // ecx
  double v10; // st6
  double v11; // st5
  double v12; // st4
  long double v13; // st3
  long double v14; // st2
  long double v15; // st3
  long double v16; // rt0
  long double v17; // rt1
  long double v18; // rt2

  v3 = 0;
  if ( dword_10646650 > 0 )
  {
    v5 = 0.5;
    do
    {
      for ( i = 0; i < *(_DWORD *)(this + 12) - 1; ++i )
      {
        v7 = *(_DWORD *)(this + 16);
        v8 = *(float **)(v7 + 8 * i);
        v9 = *(float **)(v7 + 8 * i + 4);
        v10 = *v8 - *v9;
        v11 = v8[1] - v9[1];
        v12 = v8[2] - v9[2];
        v13 = v11 * v11 + v10 * v10 + v12 * v12;
        v14 = *(float *)(this + 24);
        if ( 0.0 == v14 )
          v14 = *(float *)(*(_DWORD *)(this + 28) + 4 * i);
        if ( v14 < v13 )
        {
          v15 = 1.0 - *(float *)(this + 20) / sqrt(v13);
          v16 = v12 * v15;
          v17 = v10 * v15 * v5;
          v18 = v11 * v15 * v5;
          *v8 = *v8 - v17;
          v8[1] = v8[1] - v18;
          v8[2] = v8[2] - v16 * v5;
          *v9 = v17 + *v9;
          v9[1] = v18 + v9[1];
          v9[2] = v16 * v5 + v9[2];
        }
      }
      if ( *(_DWORD *)(this + 4) )
      {
        (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 4) + 4))(*(_DWORD *)(this + 4), a2, a3);
        v5 = 0.5;
      }
      ++v3;
    }
    while ( v3 < dword_10646650 );
  }
}
