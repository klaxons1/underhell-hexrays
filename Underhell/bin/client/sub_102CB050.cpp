void __cdecl sub_102CB050()
{
  int *v0; // esi
  int i; // edi
  int v2; // ecx

  v0 = dword_10435CE8;
  for ( i = 1; i >= 0; --i )
  {
    v2 = *--v0;
    if ( v2 )
      sub_100F2FF0(v2);
  }
}
