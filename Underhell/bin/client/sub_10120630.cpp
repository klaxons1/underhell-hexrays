int __cdecl sub_10120630(char *Str, char *Buffer)
{
  int v2; // ebx
  int result; // eax
  int v5; // esi
  unsigned int v6; // [esp+Ch] [ebp-Ch]
  char *v7; // [esp+10h] [ebp-8h]
  int v8; // [esp+14h] [ebp-4h]

  v8 = 0;
  v7 = 0;
  v6 = 0;
  if ( strstr(Str, "playgamesound") && strlen(Str) > 0xE )
  {
    v7 = Str + 14;
    v6 = strlen(Str + 14);
  }
  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_104131AC + 36))(dword_104131AC) - 1;
  if ( v2 < 0 )
    return 0;
  while ( 1 )
  {
    result = v8;
    if ( v8 >= 64 )
      break;
    v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_104131AC + 40))(dword_104131AC, v2);
    if ( v5 && (!v7 || !sub_10227BC0(v5, v7, v6)) )
    {
      sub_10228370(Buffer, 0x40u, "%s %s", (char)"playgamesound");
      ++v8;
      Buffer += 64;
    }
    if ( --v2 < 0 )
      return v8;
  }
  return result;
}
