void __thiscall sub_100A2160(_DWORD *this)
{
  __int16 i; // si

  for ( i = sub_1009D730((int)this); i != -1; i = sub_1009D7F0(this, i) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this[1] + 16 * i + 8));
  sub_1009D670((int)this);
}
