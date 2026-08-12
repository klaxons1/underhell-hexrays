char __thiscall sub_103CDEE0(int this)
{
  int v2; // edi
  const char *v3; // eax
  const char **v4; // eax
  const char *v5; // eax
  void (__thiscall *v6)(int, const char *); // eax
  char result; // al
  _BYTE v8[4]; // [esp+8h] [ebp-4h] BYREF

  v2 = *(_DWORD *)(this + 1676);
  v3 = *(const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 28))(this, v8);
  if ( !v3 )
    v3 = String;
  if ( !strcmp(v3, String) )
  {
    v6 = *(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104);
    if ( *(_BYTE *)(this + 3776) )
    {
      v6(this, "models/zombie/classic_torso.mdl");
      *(_DWORD *)(this + 1676) = 3;
    }
    else
    {
      v6(this, "models/zombie/classic.mdl");
      *(_DWORD *)(this + 1676) = 0;
    }
  }
  else
  {
    v4 = (const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 28))(this, v8);
    Msg("Custom Model set %s\n", *v4);
    v5 = *(const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 28))(this, v8);
    if ( !v5 )
      v5 = String;
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, v5);
  }
  sub_100C1600(this, 1, *(_BYTE *)(this + 3777) == 0);
  sub_10027A90(this, 1);
  sub_10020F00((char *)this);
  result = (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 1416))(this, 1);
  if ( v2 != *(_DWORD *)(this + 1676) )
  {
    if ( *(_DWORD *)(this + 424) )
      return sub_10027740(this);
  }
  return result;
}
