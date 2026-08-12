char __thiscall sub_1004BF80(_BYTE *this, int a2)
{
  char result; // al

  if ( *(_DWORD *)(a2 + 24) == 6 )
  {
    result = *(_BYTE *)(a2 + 8);
    this[837] = result;
  }
  else
  {
    result = 0;
    this[837] = 0;
  }
  return result;
}
