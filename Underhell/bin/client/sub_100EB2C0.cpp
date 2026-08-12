int __cdecl sub_100EB2C0(int a1)
{
  int v1; // esi
  int i; // edi
  int v3; // eax

  v1 = *(_DWORD *)(a1 + 6008);
  for ( i = 1; v1; i += v3 )
  {
    v3 = sub_100EB2C0(v1);
    v1 = *(_DWORD *)(v1 + 5980);
  }
  return i;
}
