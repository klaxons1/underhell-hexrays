char *__stdcall sub_100E77A0(char *Str, int *a2)
{
  char *v2; // ebx
  char *result; // eax
  char *v4; // esi
  signed int v5; // edi
  int v6; // esi
  int v7; // ebx
  int v8; // eax
  int v9; // edi
  int v10; // esi
  __int16 v11; // ax
  int i; // ebx
  char *v13; // eax
  char *v14; // eax
  int v15; // edi
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // esi
  char Buffer[256]; // [esp+8h] [ebp-438h] BYREF
  char String[512]; // [esp+108h] [ebp-338h] BYREF
  char String2[256]; // [esp+308h] [ebp-138h] BYREF
  int v23; // [esp+408h] [ebp-38h]
  int v24; // [esp+40Ch] [ebp-34h]
  bool (__cdecl *v25)(int, int); // [esp+410h] [ebp-30h] BYREF
  int v26; // [esp+414h] [ebp-2Ch]
  int v27; // [esp+418h] [ebp-28h]
  int v28; // [esp+41Ch] [ebp-24h]
  int v29; // [esp+420h] [ebp-20h]
  int v30; // [esp+424h] [ebp-1Ch]
  int v31; // [esp+428h] [ebp-18h]
  char *v32; // [esp+42Ch] [ebp-14h]
  int v33; // [esp+430h] [ebp-10h] BYREF
  int v34; // [esp+434h] [ebp-Ch]
  int v35; // [esp+438h] [ebp-8h]
  char *Stra; // [esp+448h] [ebp+8h]
  char *Strb; // [esp+448h] [ebp+8h]

  v2 = Str;
  if ( strstr(Str, "ent_fire") )
    v2 = Str + 9;
  result = strstr(v2, " ");
  v4 = result;
  Stra = result;
  if ( !result )
    return result;
  v5 = strlen(v2);
  v6 = v4 - v2;
  String2[0] = 0;
  sub_10429750((int)String2, v2, 256, v6);
  v7 = 0;
  v8 = sub_1012BF20(0, String2, 0, 0, 0, 0);
  if ( !v8 )
    return 0;
  v25 = sub_100D8A50;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0xFFFF;
  v30 = -1;
  v31 = 0;
  v23 = v5 - v6 - 1;
  if ( v5 <= v6 )
    v32 = 0;
  else
    v32 = Stra + 1;
  Strb = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 44))(v8);
  if ( !Strb )
    goto LABEL_33;
  while ( HIWORD(v29) < 0x40u )
  {
    v24 = *((_DWORD *)Strb + 1);
    if ( v24 <= 0 )
      goto LABEL_32;
    v9 = 0;
    while ( 1 )
    {
      v10 = *(_DWORD *)Strb;
      v11 = *(_WORD *)(*(_DWORD *)Strb + v9 + 18);
      if ( (v11 & 8) != 0 && (v11 & 2) == 0 && (!v32 || !sub_104292D0(v32, *(_DWORD *)(v10 + v9 + 20), v23)) )
        break;
LABEL_26:
      ++v7;
      v9 += 52;
      if ( v7 >= v24 )
        goto LABEL_32;
    }
    sub_104311C0(*(void **)(v10 + v9 + 20));
    if ( sub_100DDD30(&v25, (int)&v33) == -1 )
      sub_100E3BF0((int)&v25, (int)&v33);
    if ( HIWORD(v29) < 0x40u )
    {
      if ( v35 >= 0 )
      {
        if ( v33 )
        {
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v33);
          v33 = 0;
        }
        v34 = 0;
      }
      goto LABEL_26;
    }
    if ( v35 >= 0 )
    {
      if ( v33 )
      {
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v33);
        v33 = 0;
      }
      v34 = 0;
    }
LABEL_32:
    Strb = (char *)*((_DWORD *)Strb + 3);
    if ( Strb )
    {
      v7 = 0;
      continue;
    }
    break;
  }
LABEL_33:
  for ( i = (unsigned __int16)sub_100DDE30((int)&v25); i != 0xFFFF; i = (unsigned __int16)sub_100DDF00(&v25, i) )
  {
    v13 = (char *)sub_10430F10(v26 + 24 * (unsigned __int16)i + 8);
    sub_104299C0(String, v13, 0x200u);
    _strlwr(String);
    sub_10431290(&v33);
    v14 = sub_1001E280(Buffer, "%s %s %s", "ent_fire", String2, String);
    sub_10431100(v14);
    v15 = a2[3];
    v16 = a2[1];
    if ( v15 + 1 > v16 )
      sub_100C86E0(a2, v15 - v16 + 1);
    ++a2[3];
    v17 = *a2;
    v18 = a2[3] - v15 - 1;
    a2[4] = *a2;
    if ( v18 > 0 )
      memcpy((void *)(16 * v15 + v17 + 16), (const void *)(16 * v15 + v17), 16 * v18);
    if ( *a2 + 16 * v15 )
      sub_10431220(&v33);
    if ( v35 >= 0 )
    {
      if ( v33 )
      {
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v33);
        v33 = 0;
      }
      v34 = 0;
    }
  }
  v19 = HIWORD(v29);
  sub_100E3DA0((int)&v25);
  if ( v28 >= 0 )
  {
    if ( v26 )
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v26);
  }
  return (char *)v19;
}
