char __thiscall sub_101E36C0(_BYTE *this, int a2)
{
  char result; // al

  if ( *(_DWORD *)(a2 + 24) == 6 )
  {
    result = *(_BYTE *)(a2 + 8);
    this[2138] = result;
  }
  else
  {
    result = 0;
    this[2138] = 0;
  }
  return result;
}
