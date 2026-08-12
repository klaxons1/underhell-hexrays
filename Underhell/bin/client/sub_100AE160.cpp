void sub_100AE160()
{
  int v0; // eax

  if ( !dword_1042EA4C )
  {
    v0 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_10413180 + 12))(
           dword_10413180,
           "GameRulesCreation");
    dword_1042EA4C = v0;
    if ( v0 )
      (*(void (__thiscall **)(int, _DWORD, int (__cdecl *)(int, int, int, int, char *)))(*(_DWORD *)v0 + 52))(
        v0,
        0,
        sub_100AE0E0);
  }
}
