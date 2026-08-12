int __thiscall sub_101F9B80(_DWORD *this, int a2)
{
  int v3; // ebx
  int v4; // esi

  v3 = this[22];
  v4 = 0;
  if ( v3 <= 0 )
    return 0;
  while ( !(unsigned __int8)sub_10232FD0(*(_DWORD *)(this[19] + 4 * v4) + 520, a2) )
  {
    if ( ++v4 >= v3 )
      return 0;
  }
  return *(_DWORD *)(this[19] + 4 * v4);
}
