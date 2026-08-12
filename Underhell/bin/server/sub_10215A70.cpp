int __thiscall sub_10215A70(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // edx
  bool v4; // cc

  result = a2;
  if ( *(_DWORD *)(a2 + 24) == 5 )
    v3 = *(_DWORD *)(a2 + 8);
  else
    v3 = 0;
  v4 = this[208] < 90;
  this[210] = v3;
  if ( v4 && (result = this[211], result >= 0) )
    this[209] = result;
  else
    this[209] = v3;
  return result;
}
