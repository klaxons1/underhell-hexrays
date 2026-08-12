int __thiscall sub_100E9270(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // eax

  if ( !a2 )
  {
    result = this[47];
    if ( result != -1 )
      return result;
    return -1;
  }
  v4 = sub_100E91A0(this, a2);
  if ( v4 == -1 )
    return -1;
  result = *(_DWORD *)(this[36] + 16 * v4 + 8);
  if ( result == -1 )
    return -1;
  return result;
}
