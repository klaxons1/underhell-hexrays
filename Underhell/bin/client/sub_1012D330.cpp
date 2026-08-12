const char *__cdecl sub_1012D330(int a1, char *Str, const char *a3)
{
  const char *v3; // eax
  char *v4; // ebx
  unsigned int v6; // kr00_4
  char *v7; // edi

  v3 = (const char *)sub_1022B4C0(Str, 0);
  v4 = (char *)v3;
  if ( v3 )
  {
    v6 = strlen(v3);
    v7 = (char *)sub_100DDA40(v6 + 1);
    sub_102282F0(v7, v4, v6 + 1);
    return v7;
  }
  else
  {
    if ( a3 )
      DevWarning("Can't get key value\t'%s' from file '%s'.\n", Str, a3);
    return Locale;
  }
}
