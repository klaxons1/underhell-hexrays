void __thiscall sub_10072B20(_DWORD *this)
{
  int i; // esi

  for ( i = sub_10071FF0(this); i != -1; i = sub_10072090(this, i) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this[1] + 24 * i + 16));
  sub_10072260(this);
}
