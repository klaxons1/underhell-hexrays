void __thiscall sub_102C48B0(_DWORD *this)
{
  int i; // esi

  for ( i = sub_102C2320(this); i != -1; i = sub_102C23C0(this, i) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this[1] + 40 * i + 16));
  sub_102C2D40(this);
}
