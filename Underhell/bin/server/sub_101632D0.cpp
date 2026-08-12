int __thiscall sub_101632D0(float *this, int a2)
{
  int result; // eax

  result = a2;
  if ( *(_DWORD *)(a2 + 24) == 1 )
    this[202] = *(float *)(a2 + 8);
  else
    this[202] = 0.0;
  return result;
}
