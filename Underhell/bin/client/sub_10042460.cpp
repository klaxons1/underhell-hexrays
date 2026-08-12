int sub_10042460()
{
  int v0; // ebx
  int v1; // edi
  int v2; // eax
  int result; // eax
  int i; // esi
  int v5; // eax
  int v6; // esi
  int v7; // edi
  char *v8; // eax
  char v9[256]; // [esp+Ch] [ebp-308h] BYREF
  char v10[512]; // [esp+10Ch] [ebp-208h] BYREF
  int v11; // [esp+310h] [ebp-4h]

  sub_10229600("sv_unlockedchapters");
  v0 = *(_DWORD *)(v11 + 48);
  if ( v0 <= 0 )
    v0 = 1;
  strcpy(v9, "scripts/ChapterBackgrounds.txt");
  memset(&v9[31], 0, 0xE1u);
  if ( sub_10229D00(32) )
    v1 = sub_10229D20("background_list");
  else
    v1 = 0;
  if ( dword_1047C968 )
    v2 = dword_1047C968 + 4;
  else
    v2 = 0;
  result = sub_10229D70(v2, v9, "GAME");
  if ( (_BYTE)result )
  {
    for ( i = sub_10229C90(v1); i; i = sub_1021F0F0(i) )
    {
      v5 = *(char *)sub_10229A00(i) - 48;
      if ( v5 < v0 )
        v0 = v5;
    }
    v6 = sub_10115FB0() % v0;
    v7 = sub_10229C90(v1);
    if ( v6 > 0 )
    {
      do
      {
        --v6;
        v7 = sub_1021F0F0(v7);
      }
      while ( v6 );
    }
    strcpy(v10, "map_background ");
    memset(&v10[16], 0, 0x1F0u);
    v8 = (char *)sub_1022B4C0(0, (int)Locale);
    sub_10228100((int)v10, v8, 512, -1);
    sub_10228100((int)v10, "\n", 512, -1);
    return (*(int (__thiscall **)(int, char *))(*(_DWORD *)dword_1041315C + 28))(dword_1041315C, v10);
  }
  return result;
}
