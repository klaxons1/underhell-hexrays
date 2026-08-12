char __thiscall sub_101E36F0(_BYTE *this, int a2)
{
  char result; // al

  if ( *(_DWORD *)(a2 + 24) == 6 )
  {
    result = *(_BYTE *)(a2 + 8);
    this[3371] = result;
  }
  else
  {
    result = 0;
    this[3371] = 0;
  }
  return result;
}
