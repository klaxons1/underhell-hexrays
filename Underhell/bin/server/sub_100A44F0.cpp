void __thiscall sub_100A44F0(_DWORD *this)
{
  __int16 i; // si

  for ( i = sub_1009CB70((int)this); i != -1; i = sub_1009CC40(this, i) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this[1] + 60 * i + 8));
  sub_100A34F0((int)this);
}
