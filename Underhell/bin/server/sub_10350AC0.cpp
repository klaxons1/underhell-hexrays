int __thiscall sub_10350AC0(float *this, int a2)
{
  int result; // eax

  result = a2;
  if ( *(_DWORD *)(a2 + 24) == 1 )
    this[1039] = *(float *)(a2 + 8);
  else
    this[1039] = 0.0;
  return result;
}
