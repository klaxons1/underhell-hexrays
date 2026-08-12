int sub_101E5F90(int a1, int a2, char *a3, ...)
{
  int i; // esi
  void (__cdecl *v4)(const char *); // eax
  void (__cdecl *v5)(char *); // eax
  char Format[2048]; // [esp+Ch] [ebp-800h] BYREF
  va_list va; // [esp+81Ch] [ebp+10h] BYREF

  va_start(va, a3);
  sub_102283C0(Format, 0x800u, a3, va);
  for ( i = a2; i > 0; --i )
  {
    v4 = *(void (__cdecl **)(const char *))(a1 + 156);
    if ( v4 )
      v4("  ");
    else
      printf("  ");
    Msg("  ");
  }
  v5 = *(void (__cdecl **)(char *))(a1 + 156);
  if ( v5 )
    v5(Format);
  else
    printf(Format);
  return Msg("%s", Format);
}
