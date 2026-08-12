bool __thiscall sub_101663F0(int this)
{
  int v2; // ecx
  bool result; // al
  int v4; // eax

  v2 = *(_DWORD *)(this + 424);
  result = 0;
  if ( !v2
    || ((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 76))(v2) & 4) == 0 && (*(_DWORD *)(this + 252) & 0x100000) == 0 )
  {
    if ( *(_DWORD *)(dword_106B31C8 + 20) != 1 )
      return 1;
    v4 = sub_10261B20();
    if ( !v4
      || !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v4 + 876))(v4, this)
      || *(_BYTE *)(this + 1136) )
    {
      return 1;
    }
  }
  return result;
}
