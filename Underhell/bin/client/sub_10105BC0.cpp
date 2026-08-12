void *__cdecl sub_10105BC0(int *a1)
{
  void *result; // eax
  int v2; // esi
  const char **v3; // edi
  const char *v4; // eax
  int v5; // eax

  result = (void *)*a1;
  if ( *a1 > 1 )
  {
    v2 = 1;
    v3 = (const char **)(a1 + 259);
    do
    {
      if ( v2 < 0 || v2 >= (int)result )
        v4 = Locale;
      else
        v4 = *v3;
      v5 = atoi(v4);
      if ( v5 < 2048 )
        dword_10436820[v5 >> 5] &= ~(1 << (v5 & 0x1F));
      result = (void *)*a1;
      ++v2;
      ++v3;
    }
    while ( v2 < *a1 );
  }
  else
  {
    result = memset(dword_10436820, 0, 0x100u);
    off_103E22C0 = off_103E22E0;
  }
  return result;
}
