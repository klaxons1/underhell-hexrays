int __thiscall sub_102AC2F0(_DWORD *this, int a2)
{
  int result; // eax

  if ( *(_DWORD *)(a2 + 24) == 5 )
  {
    result = *(_DWORD *)(a2 + 8);
    this[258] = result;
  }
  else
  {
    result = 0;
    this[258] = 0;
  }
  return result;
}
