int __cdecl sub_10101F80(int a1, int *a2)
{
  int v2; // edi
  int *v3; // eax
  int v4; // esi
  const char *v5; // eax
  const char *v6; // eax
  const char *v7; // eax
  int v9; // [esp+Ch] [ebp-4h]

  if ( sub_10229D00(32) )
  {
    v2 = sub_10229D20(off_103E214C);
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
  if ( !(unsigned __int8)sub_10229D70(v3, off_103E214C, "GAME") )
  {
    Error("Unable to load manifest file '%s'\n", off_103E214C);
    return sub_1022AF00(v2);
  }
  v4 = sub_10229C90(v2);
  if ( !v4 )
    return sub_1022AF00(v2);
  do
  {
    v5 = (const char *)sub_10229A00(v4);
    if ( !_stricmp(v5, "file") )
    {
      v6 = (const char *)sub_1022B4C0(0, (int)Locale);
      sub_10101EC0(v6, a1, a2);
    }
    else
    {
      v7 = (const char *)sub_10229A00(v4);
      Warning("surfaceprops::Init:  Manifest '%s' with bogus file type '%s', expecting 'file'\n", off_103E214C, v7);
    }
    v4 = sub_1021F0F0(v4);
  }
  while ( v4 );
  return sub_1022AF00(v9);
}
