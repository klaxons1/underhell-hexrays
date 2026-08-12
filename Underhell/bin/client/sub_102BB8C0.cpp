int sub_102BB8C0()
{
  _DWORD *v0; // esi
  int i; // edi

  v0 = &unk_10437570;
  for ( i = 2; i >= 0; --i )
    unknown_libname_2(v0++);
  return atexit(sub_102CB630);
}
