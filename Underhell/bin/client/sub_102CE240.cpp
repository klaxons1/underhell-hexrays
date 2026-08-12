void __cdecl sub_102CE240()
{
  int *v0; // esi
  int v1; // edi

  dword_1044CDD8[0] = &CAmmoDef::`vftable';
  v0 = &dword_1044CDD8[15];
  v1 = 31;
  do
  {
    sub_10034930(*v0);
    v0 += 13;
    --v1;
  }
  while ( v1 );
}
