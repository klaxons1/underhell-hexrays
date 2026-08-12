int __thiscall sub_1000F2D0(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // eax

  if ( !a2 )
  {
    result = this[31];
    if ( result != -1 )
      return result;
    return -1;
  }
  v4 = sub_1000F270(this, a2);
  if ( v4 == -1 )
    return -1;
  result = *(_DWORD *)(this[49] + 32 * v4 + 20);
  if ( result == -1 )
    return -1;
  return result;
}
