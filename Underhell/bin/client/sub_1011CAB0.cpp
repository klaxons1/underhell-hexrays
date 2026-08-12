void __thiscall sub_1011CAB0(int *this, int a2, int a3, char a4, char a5)
{
  int v6; // eax
  int v7; // edi
  double v8; // st7
  int v9; // ebx
  int v10; // ecx

  if ( a2 )
  {
    if ( !this[3] )
      sub_1011CA20(this, 0);
    v6 = 32 * this[3];
    v7 = v6 + *this - 32;
    v8 = 0.0;
    if ( 0.0 != *(float *)(v6 + *this - 8) && (*(_DWORD *)v7 != a3 || a4) )
    {
      v9 = sub_10127960(a3);
      if ( (*(_BYTE *)(v9 + 12) & 2) != 0 || !a5 )
      {
        this[3] = 0;
      }
      else
      {
        v10 = sub_10127960(*(_DWORD *)v7);
        if ( *(float *)(v9 + 104) <= (double)*(float *)(v10 + 108) )
          *(float *)(v7 + 28) = *(float *)(v9 + 104);
        else
          *(float *)(v7 + 28) = *(float *)(v10 + 108);
      }
      sub_1011CA20(this, this[3]);
      v8 = 0.0;
      v7 = 32 * this[3] + *this - 32;
    }
    *(float *)(v7 + 24) = v8;
    *(_DWORD *)v7 = -1;
    *(float *)(v7 + 28) = v8;
  }
}
