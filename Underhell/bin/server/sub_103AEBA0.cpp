int __thiscall sub_103AEBA0(float *this, int a2)
{
  int result; // eax

  result = a2;
  if ( *(_DWORD *)(a2 + 24) == 1 )
    this[953] = *(float *)(a2 + 8);
  else
    this[953] = 0.0;
  return result;
}
