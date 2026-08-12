int __thiscall sub_101A5B50(float *this, int a2)
{
  int result; // eax

  result = a2;
  if ( *(_DWORD *)(a2 + 24) == 1 )
    this[969] = *(float *)(a2 + 8);
  else
    this[969] = 0.0;
  return result;
}
