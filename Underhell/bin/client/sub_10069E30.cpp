char __thiscall sub_10069E30(_DWORD *this)
{
  _BYTE *v1; // eax
  char *v2; // edi
  int v3; // ebx
  int v4; // esi
  const char *v5; // eax
  char *v6; // eax
  const char *v7; // eax
  const char *v8; // eax
  int v11; // [esp+10h] [ebp-4h]

  this[51] = 0;
  v1 = (_BYTE *)sub_100D2FF0();
  v2 = 0;
  if ( v1 && *v1 )
    v2 = (char *)sub_10076640("scripts/soundscapes_%s.txt", (char)v1);
  if ( sub_10229D00(32) )
  {
    v3 = sub_10229D20("scripts/soundscapes_manifest.txt");
    v11 = v3;
  }
  else
  {
    v11 = 0;
    v3 = 0;
  }
  if ( (*(unsigned __int8 (__thiscall **)(int, int, int, const char *, const char *))(*(_DWORD *)dword_10413188 + 296))(
         dword_10413188,
         v3,
         2,
         "scripts/soundscapes_manifest.txt",
         "GAME") )
  {
    v4 = sub_10229C90(v3);
    if ( v4 )
    {
      do
      {
        v5 = (const char *)sub_10229A00(v4);
        if ( !_stricmp(v5, "file") )
        {
          v6 = (char *)sub_1022B4C0(0, (int)Locale);
          sub_10069CF0(this, v6);
          if ( v2 )
          {
            v7 = (const char *)sub_1022B4C0(0, (int)Locale);
            if ( !_stricmp(v7, v2) )
              v2 = 0;
          }
        }
        else
        {
          v8 = (const char *)sub_10229A00(v4);
          Warning(
            "C_SoundscapeSystem::Init:  Manifest '%s' with bogus file type '%s', expecting 'file'\n",
            "scripts/soundscapes_manifest.txt",
            v8);
        }
        v4 = sub_1021F0F0(v4);
      }
      while ( v4 );
      v3 = v11;
    }
    if ( v2
      && (*(unsigned __int8 (__thiscall **)(int, char *, _DWORD))(*(_DWORD *)(dword_10413188 + 4) + 40))(
           dword_10413188 + 4,
           v2,
           0) )
    {
      sub_10069CF0(this, v2);
      sub_1022AF00(v3);
      return 1;
    }
  }
  else
  {
    Error("Unable to load manifest file '%s'\n", "scripts/soundscapes_manifest.txt");
  }
  sub_1022AF00(v3);
  return 1;
}
