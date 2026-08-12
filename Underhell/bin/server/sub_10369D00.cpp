char __thiscall sub_10369D00(int this, int a2)
{
  char result; // al

  result = (*(int (__thiscall **)(int))(*(_DWORD *)this + 264))(this);
  if ( result )
  {
    if ( *(_BYTE *)(this + 3672) )
      return sub_100457E0((_DWORD *)this, 108);
  }
  return result;
}
