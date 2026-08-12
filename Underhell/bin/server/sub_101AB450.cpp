int __cdecl sub_101AB450(int *a1)
{
  int v1; // eax
  int v2; // ebx
  const char *v3; // eax
  void *v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  const char *v9; // eax
  _DWORD v11[4]; // [esp+0h] [ebp-14h] BYREF
  int v12; // [esp+10h] [ebp-4h]

  if ( sub_1042A310(32) )
    v12 = sub_1042A330("particles/particles_manifest.txt");
  else
    v12 = 0;
  if ( dword_106B31D8 )
    v1 = dword_106B31D8 + 4;
  else
    v1 = 0;
  if ( !(unsigned __int8)sub_1042A380(v1, "particles/particles_manifest.txt", "GAME") )
  {
    Warning("PARTICLE SYSTEM: Unable to load manifest file '%s'\n", "particles/particles_manifest.txt");
    return sub_1042B1A0(v12);
  }
  v2 = sub_1042A2F0(v12);
  if ( !v2 )
    return sub_1042B1A0(v12);
  do
  {
    v3 = (const char *)sub_1042A070(v2);
    if ( !_stricmp(v3, "file") )
    {
      v4 = (void *)sub_1042B460(0, (int)String);
      sub_104311C0(v4);
      v5 = a1[3];
      v6 = a1[1];
      if ( v5 + 1 > v6 )
        sub_100C86E0(a1, v5 - v6 + 1);
      ++a1[3];
      v7 = *a1;
      v8 = a1[3] - v5 - 1;
      a1[4] = *a1;
      if ( v8 > 0 )
        memcpy((void *)(16 * v5 + v7 + 16), (const void *)(16 * v5 + v7), 16 * v8);
      if ( *a1 + 16 * v5 )
        sub_10431220(v11);
      if ( v11[2] >= 0 )
      {
        if ( v11[0] )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v11[0]);
          v11[0] = 0;
        }
        v11[1] = 0;
      }
    }
    else
    {
      v9 = (const char *)sub_1042A070(v2);
      Warning(
        "CParticleMgr::Init:  Manifest '%s' with bogus file type '%s', expecting 'file'\n",
        "particles/particles_manifest.txt",
        v9);
    }
    v2 = sub_1042A300(v2);
  }
  while ( v2 );
  return sub_1042B1A0(v12);
}
