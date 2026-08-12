char __thiscall sub_104180F0(_DWORD *this)
{
  int v2; // eax
  char result; // al
  _DWORD v4[3]; // [esp+4h] [ebp-Ch] BYREF

  sub_10171060(v4);
  v2 = ((int (__cdecl *)(const char *, _DWORD))v4[0])("VSERVERENGINETOOLS001", 0);
  this[4] = v2;
  if ( v2 )
    return 1;
  result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 8))(dword_106B31D0);
  if ( result )
    return 1;
  return result;
}
