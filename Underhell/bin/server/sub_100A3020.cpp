void __thiscall sub_100A3020(_DWORD *this)
{
  int v2; // esi
  int v3; // edi
  int v4; // ecx
  _DWORD *v5; // edi
  int i; // esi

  v2 = this[344] - 1;
  if ( v2 >= 0 )
  {
    v3 = 24 * v2;
    do
    {
      v4 = *(_DWORD *)(this[340] + v3 + 20);
      (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 16))(v4);
      v3 -= 24;
      --v2;
    }
    while ( v2 >= 0 );
  }
  v5 = this + 339;
  for ( i = sub_1009DB90(this + 339); i != -1; i = sub_1009DC30(v5, i) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this[340] + 24 * i + 16));
  sub_1009DAD0(v5);
}
