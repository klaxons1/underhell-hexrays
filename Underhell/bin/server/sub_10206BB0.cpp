BOOL __cdecl sub_10206BB0(const char **a1, const char **a2)
{
  const char *v2; // eax
  const char *v3; // ecx

  v2 = *a1;
  if ( !*a1 )
    v2 = String;
  v3 = *a2;
  if ( !*a2 )
    v3 = String;
  return v2 < v3;
}
