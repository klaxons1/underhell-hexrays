char __thiscall sub_10022900(_BYTE *this, int a2)
{
  char result; // al

  if ( *(_DWORD *)(a2 + 24) == 6 )
  {
    result = *(_BYTE *)(a2 + 8);
    this[2112] = result;
  }
  else
  {
    result = 0;
    this[2112] = 0;
  }
  return result;
}
