char __thiscall sub_10244B00(_DWORD *this)
{
  unsigned __int16 i; // si

  for ( i = sub_10244160((int)this); i != 0xFFFF; i = sub_10244230(this, i) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this[1] + 16 * i + 8));
  return sub_102440A0((int)this);
}
