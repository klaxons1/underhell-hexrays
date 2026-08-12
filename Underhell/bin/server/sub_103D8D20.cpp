int __thiscall sub_103D8D20(float *this, int a2)
{
  int result; // eax

  result = a2;
  if ( *(_DWORD *)(a2 + 24) == 1 )
    this[906] = *(float *)(a2 + 8);
  else
    this[906] = 0.0;
  return result;
}
