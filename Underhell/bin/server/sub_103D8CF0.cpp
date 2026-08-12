int __thiscall sub_103D8CF0(float *this, int a2)
{
  int result; // eax

  result = a2;
  if ( *(_DWORD *)(a2 + 24) == 1 )
    this[905] = *(float *)(a2 + 8);
  else
    this[905] = 0.0;
  return result;
}
