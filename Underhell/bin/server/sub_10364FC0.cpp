int __thiscall sub_10364FC0(float *this, int a2)
{
  int result; // eax
  double v3; // st7

  result = dword_106B31C8;
  if ( *(_DWORD *)(a2 + 24) == 1 )
    v3 = *(float *)(a2 + 8) + *(float *)(dword_106B31C8 + 12);
  else
    v3 = *(float *)(dword_106B31C8 + 12) + 0.0;
  this[943] = v3;
  return result;
}
