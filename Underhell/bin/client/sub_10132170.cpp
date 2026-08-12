int __stdcall sub_10132170(int a1, int a2, int a3)
{
  void *v3; // eax

  v3 = *(void **)(*(int (__cdecl **)(int))(a3 + 20))(a1);
  if ( v3 )
    return sub_1022ABA0(*(char **)a3, v3);
  else
    return sub_1022ABA0(*(char **)a3, (void *)Locale);
}
