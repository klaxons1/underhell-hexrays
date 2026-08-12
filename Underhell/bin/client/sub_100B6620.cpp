void __cdecl sub_100B6620(_DWORD *a1)
{
  int v1; // ebx
  int v2; // esi
  int i; // esi

  v1 = a1[5];
  if ( v1 > 0 )
  {
    v2 = 0;
    do
    {
      sub_10034930(*(_DWORD *)(v2 + a1[1] + 20));
      v2 += 24;
      --v1;
    }
    while ( v1 );
  }
  for ( i = sub_100B4CF0(a1); i != -1; i = sub_100B4D90(a1, i) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(a1[1] + 24 * i + 16));
  sub_100B4C30(a1);
}
