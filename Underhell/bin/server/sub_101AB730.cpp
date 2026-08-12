int __cdecl sub_101AB730(_BYTE *ArgList, char a2)
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

  sub_10427610(a2);
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
    v24 = (char *)sub_1025F440("particles/particles_%s.txt", (char)ArgList);
    v3 = v24;
  }
  if ( sub_1042A310(32) )
    v4 = sub_1042A330(v3);
  else
    v4 = 0;
  if ( dword_106B31D8 )
    v5 = dword_106B31D8 + 4;
  else
    v5 = 0;
  if ( !(unsigned __int8)sub_1042A380(v5, v3, "GAME") )
    return sub_101AB630(&v18);
  for ( i = sub_1042A2F0(v4); i; i = sub_1042A300(i) )
  {
    v7 = (const char *)sub_1042A070(i);
    if ( !_stricmp(v7, "file") )
    {
      v8 = (void *)sub_1042B460(0, (int)String);
      sub_104311C0(v8);
      v9 = v2;
      if ( v2 + 1 > v19 )
      {
        sub_100C86E0(&v18, v2 - v19 + 1);
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
        sub_10431220(v23);
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
      v11 = (const char *)sub_1042A070(i);
      Warning("CParticleMgr::LevelInit:  Manifest '%s' with bogus file type '%s', expecting 'file'\n", v24, v11);
    }
  }
  if ( v2 > 0 )
  {
    v12 = v18;
    v13 = v2;
    do
    {
      v14 = (void *)sub_10430F10(v12);
      sub_10428E00(v14, 1, 1);
      v12 += 16;
      --v13;
    }
    while ( v13 );
  }
  result = sub_10427600(off_10689BA4);
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
