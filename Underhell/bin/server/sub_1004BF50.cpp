char __thiscall sub_1004BF50(_BYTE *this, int a2)
{
  char result; // al

  if ( *(_DWORD *)(a2 + 24) == 6 )
  {
    result = *(_BYTE *)(a2 + 8);
    this[836] = result;
  }
  else
  {
    result = 0;
    this[836] = 0;
  }
  return result;
}
