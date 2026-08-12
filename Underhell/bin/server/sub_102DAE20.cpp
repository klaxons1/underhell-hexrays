int __thiscall sub_102DAE20(int this, int a2)
{
  double v2; // st7
  int result; // eax
  double v4; // st7

  if ( *(_DWORD *)(a2 + 24) != 1 || (v2 = *(float *)(a2 + 8), v2 <= 0.0) )
    v2 = 10.0;
  result = dword_106B31C8;
  v4 = v2 + *(float *)(dword_106B31C8 + 12);
  *(_BYTE *)(this + 5592) = 1;
  *(float *)(this + 5588) = v4;
  return result;
}
