int __thiscall sub_10215AB0(_DWORD *this, int a2)
{
  int result; // eax
  bool v3; // cc

  if ( *(_DWORD *)(a2 + 24) == 5 )
    result = *(_DWORD *)(a2 + 8);
  else
    result = 0;
  v3 = this[208] < 90;
  this[211] = result;
  if ( !v3 || result < 0 )
    result = this[210];
  this[209] = result;
  return result;
}
