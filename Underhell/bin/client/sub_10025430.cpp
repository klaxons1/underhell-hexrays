char __thiscall sub_10025430(_DWORD *this, int a2, int a3)
{
  int v4; // edi
  int v5; // ebx
  int v6; // eax
  _DWORD *v8; // eax
  char String1[128]; // [esp+Ch] [ebp-80h] BYREF

  v4 = 0;
  v5 = sub_10076840(String1, a2, 32);
  if ( !_stricmp(String1, "COMBINE") )
  {
    v4 = 5;
  }
  else if ( !_stricmp(String1, "SMG1") )
  {
    v4 = 2;
  }
  else if ( !_stricmp(String1, "PISTOL") )
  {
    v4 = 4;
  }
  else if ( !_stricmp(String1, "SHOTGUN") )
  {
    v4 = 1;
  }
  else if ( !_stricmp(String1, "357") )
  {
    v4 = 6;
  }
  else if ( !_stricmp(String1, "RPG") )
  {
    v4 = 7;
  }
  sub_10076840(String1, v5, 32);
  v6 = (*(int (__thiscall **)(_DWORD *, char *))(this[1] + 140))(this + 1, String1);
  if ( v6 <= 0 )
    return 0;
  v8 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int, int))(*this + 8))(this, v6, a3);
  ((void (__thiscall *)(void ***, int, _DWORD))(*off_103E9C2C)[10])(off_103E9C2C, v4, *v8);
  return 1;
}
