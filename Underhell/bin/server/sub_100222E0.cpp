int __thiscall sub_100222E0(float *this, int a2)
{
  double v2; // st7
  int result; // eax

  v2 = 10.0;
  if ( *(_DWORD *)(a2 + 24) == 1 && *(float *)(a2 + 8) > 0.0 )
    v2 = *(float *)(a2 + 8);
  result = dword_106B31C8;
  this[898] = v2 + *(float *)(dword_106B31C8 + 12);
  return result;
}
