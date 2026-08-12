int __thiscall sub_1039E120(int this, int a2, int a3)
{
  int result; // eax
  bool v5; // zf
  double v6; // st7
  double v7; // st7

  if ( a3 == 1 )
  {
    result = sub_1001FBB0((_DWORD *)this, 2048.0);
    v5 = *(_BYTE *)(this + 3837) == 0;
    v6 = 2048.0;
    *(float *)(this + 2896) = 2048.0;
    if ( v5 )
      v6 = 300.0;
    *(float *)(this + 3772) = v6;
    *(float *)(this + 3740) = flt_106F1CA8;
    *(float *)(this + 3744) = flt_106F1CAC;
    *(float *)(this + 3748) = flt_106F1CB0;
    *(_BYTE *)(this + 3827) = 1;
  }
  else
  {
    if ( a2 == 1 )
      sub_1039DF80(this);
    result = sub_1001FBB0((_DWORD *)this, 2048.0);
    if ( *(_BYTE *)(this + 3837) )
      v7 = 2048.0;
    else
      v7 = 800.0;
    *(float *)(this + 3772) = v7;
    *(float *)(this + 2896) = 2048.0;
  }
  return result;
}
