int __cdecl sub_100BAB70(int a1, int a2, int a3)
{
  int v4; // ecx
  int v5; // esi

  if ( !a1 || a3 >= *(_DWORD *)(*(_DWORD *)a1 + 232) )
    return 0;
  v4 = *(_DWORD *)a1 + 16 * a3 + *(_DWORD *)(*(_DWORD *)a1 + 236);
  v5 = *(_DWORD *)(v4 + 4);
  if ( v5 > 1 )
    return a2 / *(_DWORD *)(v4 + 8) % v5;
  else
    return 0;
}
