void __thiscall sub_1006CEA0(_DWORD *this)
{
  int i; // esi

  for ( i = sub_1006BE10(this); i != -1; i = sub_1006BEA0(this, i) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(32 * i + this[1] + 16));
  sub_1006C050(this);
}
