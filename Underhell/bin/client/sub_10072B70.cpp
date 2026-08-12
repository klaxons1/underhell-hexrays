void sub_10072B70()
{
  int i; // esi
  int j; // esi

  for ( i = sub_10071FF0(&off_103DC4AC); i != -1; i = sub_10072090(&off_103DC4AC, i) )
    sub_1022AF00(*(_DWORD *)(dword_103DC4B0 + 24 * i + 20));
  for ( j = sub_10071FF0(&off_103DC4AC); j != -1; j = sub_10072090(&off_103DC4AC, j) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(dword_103DC4B0 + 24 * j + 16));
  sub_10072260(&off_103DC4AC);
}
