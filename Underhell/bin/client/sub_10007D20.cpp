int __thiscall sub_10007D20(_DWORD *this)
{
  int i; // esi

  for ( i = sub_10002260(this); i != -1; i = sub_10002410(this, i) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this[1] + 40 * i + 16));
  return sub_10007BE0(this);
}
