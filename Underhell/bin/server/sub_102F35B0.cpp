char __thiscall sub_102F35B0(_BYTE *this, int a2)
{
  char result; // al

  if ( *(_DWORD *)(a2 + 24) == 6 )
  {
    result = *(_BYTE *)(a2 + 8);
    this[5708] = result;
  }
  else
  {
    result = 0;
    this[5708] = 0;
  }
  return result;
}
