int __thiscall sub_10123400(int *this, int a2, float a3, int a4, float a5, float a6)
{
  float v7; // esi
  double v8; // st7
  int v9; // ecx
  double v10; // st7

  v7 = COERCE_FLOAT(sub_1022FDF0(24));
  if ( v7 == 0.0 )
  {
    v7 = 0.0;
  }
  else
  {
    v8 = ((double (__thiscall *)(int (__stdcall ***)(char)))(*off_103DFD80)[9])(off_103DFD80);
    v9 = a4;
    *(float *)(LODWORD(v7) + 4) = v8 + a3;
    *(_DWORD *)LODWORD(v7) = a2;
    v10 = a5;
    *(_DWORD *)(LODWORD(v7) + 12) = v9;
    *(float *)(LODWORD(v7) + 8) = v10;
    *(float *)(LODWORD(v7) + 16) = a6;
  }
  a3 = v7;
  return sub_10122F90(this + 9, (int *)&a3);
}
