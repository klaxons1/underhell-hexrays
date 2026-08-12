char *__stdcall sub_100E7C90(char *Str, int *a2)
{
  char *v3; // esi
  unsigned int v4; // edi
  int v5; // esi
  int v6; // eax
  char *v7; // eax
  int i; // ebx
  char *v9; // eax
  char *v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // esi
  char Buffer[256]; // [esp+8h] [ebp-32Ch] BYREF
  char String[512]; // [esp+108h] [ebp-22Ch] BYREF
  bool (__cdecl *v18)(int, int); // [esp+308h] [ebp-2Ch] BYREF
  int v19; // [esp+30Ch] [ebp-28h]
  int v20; // [esp+310h] [ebp-24h]
  int v21; // [esp+314h] [ebp-20h]
  int v22; // [esp+318h] [ebp-1Ch]
  int v23; // [esp+31Ch] [ebp-18h]
  int v24; // [esp+320h] [ebp-14h]
  int v25; // [esp+324h] [ebp-10h] BYREF
  int v26; // [esp+328h] [ebp-Ch]
  int v27; // [esp+32Ch] [ebp-8h]

  if ( !dword_106B3CDC )
    return 0;
  v3 = Str;
  if ( strstr(Str, "ent_fire") )
    Str += 9;
  if ( strstr(Str, " ") )
    return sub_100E77A0(v3, a2);
  v4 = strlen(Str);
  v18 = sub_100D8A50;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0xFFFF;
  v23 = -1;
  v24 = 0;
  v5 = sub_1012BC10(0);
  if ( !v5 )
    goto LABEL_24;
  while ( 1 )
  {
    v6 = *(_DWORD *)(v5 + 260);
    if ( v6 )
    {
      if ( !sub_104292D0(v6, Str, v4) )
        break;
    }
LABEL_19:
    v5 = sub_1012BC10(v5);
    if ( !v5 )
      goto LABEL_24;
  }
  v7 = *(char **)(v5 + 260);
  if ( !v7 )
    v7 = (char *)::String;
  sub_104311C0(v7);
  if ( sub_100DDD30(&v18, (int)&v25) == -1 )
    sub_100E3BF0((int)&v18, (int)&v25);
  if ( HIWORD(v22) < 0x40u )
  {
    if ( v27 >= 0 )
    {
      if ( v25 )
      {
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v25);
        v25 = 0;
      }
      v26 = 0;
    }
    goto LABEL_19;
  }
  if ( v27 >= 0 && v25 )
    (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v25);
LABEL_24:
  for ( i = (unsigned __int16)sub_100DDE30((int)&v18); i != 0xFFFF; i = (unsigned __int16)sub_100DDF00(&v18, i) )
  {
    v9 = (char *)sub_10430F10(v19 + 24 * (unsigned __int16)i + 8);
    sub_104299C0(String, v9, 0x200u);
    _strlwr(String);
    sub_10431290(&v25);
    v10 = sub_1001E280(Buffer, "%s %s", "ent_fire", String);
    sub_10431100(v10);
    v11 = a2[3];
    v12 = a2[1];
    if ( v11 + 1 > v12 )
      sub_100C86E0(a2, v11 - v12 + 1);
    ++a2[3];
    v13 = *a2;
    v14 = a2[3] - v11 - 1;
    a2[4] = *a2;
    if ( v14 > 0 )
      memcpy((void *)(16 * v11 + v13 + 16), (const void *)(16 * v11 + v13), 16 * v14);
    if ( *a2 + 16 * v11 )
      sub_10431220(&v25);
    if ( v27 >= 0 )
    {
      if ( v25 )
      {
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v25);
        v25 = 0;
      }
      v26 = 0;
    }
  }
  v15 = HIWORD(v22);
  sub_100E73E0((int)&v18);
  return (char *)v15;
}
