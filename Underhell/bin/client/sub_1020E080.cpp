void __thiscall sub_1020E080(float *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int i; // ebp
  int v8; // ecx
  float *v9; // ebx
  int v10; // eax
  int v11; // ecx
  bool v12; // c3
  float *v13; // ecx

  if ( 0.0 != this[11] )
  {
    if ( a2[2] )
    {
      for ( i = a4; i; ++a3 )
      {
        v8 = a3 & 3;
        v9 = (float *)(a2[1518] + 4 * (v8 + a3 / 4 * a2[1582]));
        --i;
        v10 = (int)*(float *)(a2[1526] + 4 * (v8 + a3 / 4 * a2[1590]));
        v11 = a2[2];
        v12 = 0.0 == *(float *)(v11 + 4 * v10 + 644);
        v13 = (float *)(v11 + 4 * v10 + 644);
        if ( v12 )
          *v9 = 1.0;
        else
          *v9 = *v13 / this[11];
      }
    }
  }
}
