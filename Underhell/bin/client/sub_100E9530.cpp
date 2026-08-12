int __cdecl sub_100E9530(const char *ArgList, char a2)
{
  int v2; // edi
  char *v3; // ebx
  int v4; // esi
  int v5; // eax
  int i; // ebx
  const char *v7; // eax
  void *v8; // eax
  int v9; // esi
  int v10; // ecx
  const char *v11; // eax
  int v12; // esi
  int v13; // ebx
  void *v14; // eax
  int result; // eax
  int v16; // edi
  _DWORD *v17; // esi
  int v18; // [esp+Ch] [ebp-28h] BYREF
  int v19; // [esp+10h] [ebp-24h]
  int v20; // [esp+14h] [ebp-20h]
  int v21; // [esp+18h] [ebp-1Ch]
  int v22; // [esp+1Ch] [ebp-18h]
  _DWORD v23[4]; // [esp+20h] [ebp-14h] BYREF
  char *v24; // [esp+30h] [ebp-4h]

  sub_101F8CE0(a2);
  v2 = 0;
  v3 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v24 = 0;
  if ( ArgList && *ArgList )
  {
    v24 = sub_10076640("particles/particles_%s.txt", ArgList);
    v3 = v24;
  }
  if ( sub_10229D00(32) )
    v4 = sub_10229D20(v3);
  else
    v4 = 0;
  if ( dword_10413188 )
    v5 = dword_10413188 + 4;
  else
    v5 = 0;
  if ( !(unsigned __int8)sub_10229D70(v5, v3, "GAME") )
    return sub_100CF530(&v18);
  for ( i = sub_10229C90(v4); i; i = sub_1021F0F0(i) )
  {
    v7 = (const char *)sub_10229A00(i);
    if ( !_stricmp(v7, "file") )
    {
      v8 = (void *)sub_1022B4C0(0, (int)Locale);
      sub_1022D310(v8);
      v9 = v2;
      if ( v2 + 1 > v19 )
      {
        sub_1007CFB0(&v18, v2 - v19 + 1);
        v2 = v21;
      }
      v10 = v18;
      v21 = ++v2;
      v22 = v18;
      if ( v2 - v9 - 1 > 0 )
      {
        memcpy((void *)(16 * v9 + v18 + 16), (const void *)(16 * v9 + v18), 16 * (v2 - v9 - 1));
        v10 = v18;
      }
      if ( v10 + 16 * v9 )
        sub_1022D370(v23);
      if ( v23[2] >= 0 )
      {
        if ( v23[0] )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v23[0]);
          v23[0] = 0;
        }
        v23[1] = 0;
      }
    }
    else
    {
      v11 = (const char *)sub_10229A00(i);
      Warning("CParticleMgr::LevelInit:  Manifest '%s' with bogus file type '%s', expecting 'file'\n", v24, v11);
    }
  }
  if ( v2 > 0 )
  {
    v12 = v18;
    v13 = v2;
    do
    {
      v14 = (void *)sub_1022CF00(v12);
      sub_101FDD00(v14, 1, 1);
      v12 += 16;
      --v13;
    }
    while ( v13 );
  }
  result = sub_101F8CB0(off_103EE614);
  v16 = v2 - 1;
  if ( v16 >= 0 )
  {
    v17 = (_DWORD *)(v18 + 16 * v16);
    do
    {
      if ( (int)v17[2] >= 0 )
      {
        result = *v17;
        if ( *v17 )
        {
          result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *v17);
          *v17 = 0;
        }
        v17[1] = 0;
      }
      v17 -= 4;
      --v16;
    }
    while ( v16 >= 0 );
  }
  if ( v20 >= 0 )
  {
    result = v18;
    if ( v18 )
      return (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v18);
  }
  return result;
}
