int __thiscall sub_104215C0(_DWORD *this)
{
  int i; // esi

  for ( i = sub_1041F7F0(this); i != -1; i = sub_104206F0(this, i) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(48 * i + this[1] + 16));
  return sub_104214B0(this);
}
