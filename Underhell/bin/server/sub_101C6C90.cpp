unsigned int *__thiscall sub_101C6C90(_DWORD *this, int a2, int a3)
{
  unsigned int *result; // eax

  result = (unsigned int *)a2;
  if ( a2 )
  {
    if ( ((this[64] | *(_DWORD *)(a2 + 256)) & 0x4000000) == 0 )
      return sub_101C6C20(this, a2, a3);
  }
  return result;
}
