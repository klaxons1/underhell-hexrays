char __thiscall sub_101613F0(_DWORD *this)
{
  unsigned __int16 i; // si

  for ( i = sub_10160510((int)this); i != 0xFFFF; i = sub_101605E0(this, i) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(52 * i + this[1] + 8));
  return sub_10160450((int)this);
}
