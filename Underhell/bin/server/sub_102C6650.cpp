char __thiscall sub_102C6650(_DWORD *this)
{
  unsigned __int16 i; // si

  for ( i = sub_102C2930((int)this); i != 0xFFFF; i = sub_102C2A00(this, i) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(392 * i + this[1] + 8));
  return sub_102C6470((int)this);
}
