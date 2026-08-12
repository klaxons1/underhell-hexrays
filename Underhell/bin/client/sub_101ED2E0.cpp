int __thiscall sub_101ED2E0(_DWORD *this)
{
  int i; // esi

  for ( i = sub_101EB240(this); i != -1; i = sub_101EC1B0(this, i) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(48 * i + this[1] + 16));
  return sub_101ED1D0(this);
}
