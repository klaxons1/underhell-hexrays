int sub_10074550()
{
  int v0; // ebx
  int v1; // esi
  int v2; // edi
  char v3; // al
  char *v4; // eax
  int result; // eax

  v0 = -1;
  if ( sub_10229D00(32) )
    v1 = sub_10229D20("gameinfo.txt");
  else
    v1 = 0;
  if ( dword_10413188 )
    v2 = dword_10413188 + 4;
  else
    v2 = 0;
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 140))(dword_1041315C);
  v4 = (char *)sub_10076640("%s/gameinfo.txt", v3);
  if ( (unsigned __int8)sub_10229D70(v2, v4, "MOD") && sub_1022A6A0("FileSystem", 0) )
    v0 = sub_1022A800("AdditionalContentId", -1);
  result = sub_1022AF00(v1);
  if ( v0 != -1 )
  {
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413188 + 24))(dword_10413188, -v0);
    if ( result )
      return Warning("Unable to mount extra content with appId: %i\n", v0);
  }
  return result;
}
