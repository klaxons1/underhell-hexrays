int __thiscall sub_10206780(_DWORD *this, int a2)
{
  int result; // eax

  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    result = *(_DWORD *)(a2 + 8);
    this[380] = result;
  }
  else
  {
    result = 0;
    this[380] = 0;
  }
  return result;
}
