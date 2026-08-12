bool __cdecl sub_10092E60(const char **a1, const char **a2)
{
  const char *v2; // eax
  const char *v3; // ecx

  v2 = *a2;
  if ( !*a2 )
    v2 = String;
  v3 = *a1;
  if ( !*a1 )
    v3 = String;
  return _stricmp(v3, v2) < 0;
}
