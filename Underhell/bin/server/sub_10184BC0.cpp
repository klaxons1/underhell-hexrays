char __thiscall sub_10184BC0(_BYTE *this, int a2)
{
  char result; // al

  if ( *(_DWORD *)(a2 + 24) == 6 )
  {
    result = *(_BYTE *)(a2 + 8);
    this[816] = result;
  }
  else
  {
    result = 0;
    this[816] = 0;
  }
  return result;
}
