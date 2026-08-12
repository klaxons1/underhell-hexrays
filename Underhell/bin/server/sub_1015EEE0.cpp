int __usercall sub_1015EEE0@<eax>(int a1@<ebx>, int a2@<edi>, int a3@<esi>, char *String1)
{
  int v4; // esi
  int result; // eax

  if ( dword_106B3CDC )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 48))(dword_106B3CDC, 1);
  v4 = dword_106B3EF8;
  dword_106B3CDC = 0;
  if ( dword_106B3EF8 )
  {
    while ( _stricmp(String1, *(const char **)v4) )
    {
      v4 = *(_DWORD *)(v4 + 8);
      if ( !v4 )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    v4 = 0;
    Error("InitGameRules: missing gamerules class '%s' on the server", String1);
  }
  (*(void (__stdcall **)(int, int, int))(v4 + 4))(a2, a3, a1);
  if ( !dword_106B3CDC )
    Error("InitGameRules: game rules entity (%s) not created", String1);
  strlen(String1);
  result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B3EFC + 32))(dword_106B3EFC, 1);
  if ( dword_106B3CDC )
    return (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 488))(dword_106B3CDC);
  return result;
}
