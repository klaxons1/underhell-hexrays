bool __thiscall sub_1013D9F0(int this, _DWORD *a2)
{
  int v4; // eax
  bool v5; // al
  _BYTE v6[4]; // [esp+4h] [ebp-4h] BYREF

  if ( !*(_DWORD *)(this + 852) )
    return 1;
  if ( !*(_DWORD *)(this + 868) )
    *(_DWORD *)(this + 868) = *(_DWORD *)sub_10162C20(v6, "!player");
  if ( *(_DWORD *)(this + 852) == *(_DWORD *)(this + 868)
    && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 320))(a2) )
  {
    return *(_BYTE *)(this + 800) == 0;
  }
  v4 = *(_DWORD *)(this + 852);
  v5 = v4 == a2[65] || v4 == a2[23];
  if ( *(_BYTE *)(this + 800) )
  {
    if ( v5 )
      return 0;
  }
  else if ( !v5 )
  {
    return 0;
  }
  return 1;
}
