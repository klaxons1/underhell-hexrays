int __cdecl sub_102614C0(int a1, unsigned int a2, unsigned int a3)
{
  int v3; // eax
  int v4; // ecx
  int v6; // eax
  int v7; // ecx

  v3 = *(_DWORD *)(a2 + 52);
  v4 = *(_DWORD *)(a3 + 52);
  if ( v3 < v4 )
    return 1;
  if ( v3 > v4 )
    return -1;
  v6 = *(_DWORD *)(a2 + 56);
  v7 = *(_DWORD *)(a3 + 56);
  if ( v6 < v7 )
    return 1;
  if ( v6 > v7 )
    return -1;
  else
    return a2 < a3 ? 1 : -1;
}
