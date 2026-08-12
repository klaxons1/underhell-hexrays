int __cdecl sub_101DB4F0(int a1, int *a2)
{
  int v2; // edi
  int *v3; // eax
  int v4; // esi
  const char *v5; // eax
  const char *v6; // eax
  const char *v7; // eax
  int v9; // [esp+Ch] [ebp-4h]

  if ( sub_1042A310(32) )
  {
    v2 = sub_1042A330(off_1063AFB4);
    v9 = v2;
  }
  else
  {
    v9 = 0;
    v2 = 0;
  }
  if ( a2 )
    v3 = a2 + 1;
  else
    v3 = 0;
  if ( !(unsigned __int8)sub_1042A380(v3, off_1063AFB4, "GAME") )
  {
    Error("Unable to load manifest file '%s'\n", off_1063AFB4);
    return sub_1042B1A0(v2);
  }
  v4 = sub_1042A2F0(v2);
  if ( !v4 )
    return sub_1042B1A0(v2);
  do
  {
    v5 = (const char *)sub_1042A070(v4);
    if ( !_stricmp(v5, "file") )
    {
      v6 = (const char *)sub_1042B460(0, (int)String);
      sub_101DB440(v6, a1, a2);
    }
    else
    {
      v7 = (const char *)sub_1042A070(v4);
      Warning("surfaceprops::Init:  Manifest '%s' with bogus file type '%s', expecting 'file'\n", off_1063AFB4, v7);
    }
    v4 = sub_1042A300(v4);
  }
  while ( v4 );
  return sub_1042B1A0(v9);
}
