int __thiscall sub_1017C290(float *this, int a2)
{
  int result; // eax

  result = a2;
  if ( *(_DWORD *)(a2 + 24) == 1 )
    this[200] = *(float *)(a2 + 8);
  else
    this[200] = 0.0;
  return result;
}
