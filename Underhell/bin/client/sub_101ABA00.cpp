void __thiscall sub_101ABA00(_DWORD *this, int a2)
{
  int v3; // edx
  unsigned int v4; // eax
  int v5; // ecx
  int v6; // esi

  v3 = this[1];
  v4 = *(_DWORD *)(v3 + 5228);
  if ( v4 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v3 + 5228) & 0xFFF) + 2) != v4 >> 12 )
    v5 = 0;
  else
    v5 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v3 + 5228) & 0xFFF) + 1);
  if ( !a2 && v5 )
    nullsub_5(v3);
  v6 = this[1];
  if ( a2 )
    *(_DWORD *)(v6 + 5228) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    *(_DWORD *)(v6 + 5228) = -1;
}
