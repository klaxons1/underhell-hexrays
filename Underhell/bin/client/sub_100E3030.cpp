char __cdecl sub_100E3030(int a1, char *Str, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  const char *v6; // eax
  const char *v7; // esi

  *a6 = 255;
  *a5 = 255;
  *a4 = 255;
  *a3 = 255;
  v6 = (const char *)sub_1022B4C0(Str, (int)"255 255 255 255");
  v7 = v6;
  if ( !v6 || !*v6 )
    return 0;
  if ( sscanf(v6, "%i %i %i %i", a3, a4, a5, a6) != 4 )
  {
    Warning("Couldn't scan four color values from %s\n", v7);
    return 0;
  }
  return 1;
}
