int __thiscall sub_102AC220(float *this, int a2)
{
  int result; // eax

  result = a2;
  if ( *(_DWORD *)(a2 + 24) == 1 )
    this[242] = *(float *)(a2 + 8);
  else
    this[242] = 0.0;
  return result;
}
