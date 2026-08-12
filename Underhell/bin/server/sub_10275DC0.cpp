char __thiscall sub_10275DC0(_DWORD *this)
{
  unsigned __int16 i; // si

  for ( i = sub_10275030((int)this); i != 0xFFFF; i = sub_102754A0(this, i) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this[1] + 16 * i + 8));
  return sub_102753E0((int)this);
}
