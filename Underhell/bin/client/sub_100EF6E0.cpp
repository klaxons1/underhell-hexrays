char __thiscall sub_100EF6E0(_DWORD *this)
{
  unsigned __int16 i; // bx
  int v3; // esi

  for ( i = sub_100EDD20((int)this); i != 0xFFFF; i = sub_100EDDF0(this, i) )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this[1] + 16 * i + 8));
    v3 = *(_DWORD *)(this[1] + 16 * i + 12);
    if ( v3 )
      sub_10034930(v3);
  }
  return sub_100EDC60((int)this);
}
