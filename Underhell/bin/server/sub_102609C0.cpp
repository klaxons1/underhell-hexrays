const char **__cdecl sub_102609C0(const char **a1, _BYTE *a2)
{
  const char **v2; // edi
  const char **result; // eax

  v2 = a1;
  if ( !*a1 || !strlen(*a1) || (result = (const char **)_stricmp(*a1, "0")) == 0 )
  {
    result = (const char **)sub_10162BE0(&a1, a2);
    *v2 = *result;
  }
  return result;
}
