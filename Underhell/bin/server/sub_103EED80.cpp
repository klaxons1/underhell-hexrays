int __thiscall sub_103EED80(_BYTE *this, int a2)
{
  int result; // eax
  char v4; // bl

  result = a2;
  if ( *(_DWORD *)(a2 + 24) == 6 )
    v4 = *(_BYTE *)(a2 + 8);
  else
    v4 = 0;
  if ( v4 != this[2120] )
  {
    result = sub_100C1600((int)this, 2, v4 != 0);
    this[2120] = v4;
  }
  return result;
}
