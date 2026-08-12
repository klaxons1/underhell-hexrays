int __thiscall sub_10329080(float *this, int a2)
{
  int result; // eax

  result = a2;
  if ( *(_DWORD *)(a2 + 24) == 1 )
    this[955] = *(float *)(a2 + 8);
  else
    this[955] = 0.0;
  return result;
}
