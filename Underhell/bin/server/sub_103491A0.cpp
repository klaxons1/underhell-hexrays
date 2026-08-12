int __thiscall sub_103491A0(float *this, int a2)
{
  int result; // eax

  result = a2;
  if ( *(_DWORD *)(a2 + 24) == 1 )
    this[999] = *(float *)(a2 + 8);
  else
    this[999] = 0.0;
  return result;
}
