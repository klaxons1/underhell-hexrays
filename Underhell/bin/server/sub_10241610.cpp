char __thiscall sub_10241610(_DWORD *this)
{
  _DWORD *v1; // esi
  const char *v2; // eax
  const char *v3; // ebx
  int i; // edi
  const char *v5; // eax
  int v6; // esi
  int v7; // eax
  const char *v8; // eax
  const char *v9; // eax
  int v11; // [esp+Ch] [ebp-8h]

  v1 = this;
  this[4] = 0;
  v2 = *(const char **)(dword_106B31C8 + 60);
  if ( !v2 )
    v2 = String;
  v3 = 0;
  if ( v2 && *v2 )
    v3 = (const char *)sub_1025F440("scripts/soundscapes_%s.txt", (char)v2);
  if ( sub_1042A310(32) )
    v11 = sub_1042A330("scripts/soundscapes_manifest.txt");
  else
    v11 = 0;
  if ( (*(unsigned __int8 (__thiscall **)(int, int, int, const char *, const char *))(*(_DWORD *)dword_106B31D8 + 296))(
         dword_106B31D8,
         v11,
         2,
         "scripts/soundscapes_manifest.txt",
         "GAME") )
  {
    for ( i = sub_1042A2F0(v11); i; i = sub_1042A300(i) )
    {
      v5 = (const char *)sub_1042A070(i);
      if ( !_stricmp(v5, "file") )
      {
        v6 = *v1;
        v7 = sub_1042B460(0, (int)String);
        (*(void (__thiscall **)(_DWORD *, int))(v6 + 64))(this, v7);
        if ( v3 )
        {
          v8 = (const char *)sub_1042B460(0, (int)String);
          if ( v8 == v3 || !_stricmp(v8, v3) )
            v3 = 0;
        }
        v1 = this;
      }
      else
      {
        v9 = (const char *)sub_1042A070(i);
        Warning(
          "CSoundscapeSystem::Init:  Manifest '%s' with bogus file type '%s', expecting 'file'\n",
          "scripts/soundscapes_manifest.txt",
          v9);
      }
    }
    if ( v3
      && (*(unsigned __int8 (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)(dword_106B31D8 + 4) + 40))(
           dword_106B31D8 + 4,
           v3,
           0) )
    {
      (*(void (__thiscall **)(_DWORD *, const char *))(*v1 + 64))(v1, v3);
    }
  }
  else
  {
    Error("Unable to load manifest file '%s'\n", "scripts/soundscapes_manifest.txt");
  }
  sub_1042B1A0(v11);
  v1[10] = -1;
  return 1;
}
