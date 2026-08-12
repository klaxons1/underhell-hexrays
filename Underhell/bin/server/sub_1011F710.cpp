int __thiscall sub_1011F710(float *this, int a2)
{
  int result; // eax

  result = a2;
  if ( *(_DWORD *)(a2 + 24) == 1 )
    this[27] = *(float *)(a2 + 8);
  else
    this[27] = 0.0;
  return result;
}
