void __thiscall sub_100A4010(_DWORD *this)
{
  __int16 i; // si

  for ( i = sub_1009D280((int)this); i != -1; i = sub_1009D350(this, i) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this[1] + 60 * i + 8));
  sub_100A31B0((int)this);
}
