int __thiscall sub_10094490(_DWORD *this)
{
  int i; // esi

  for ( i = sub_100930B0(this); i != -1; i = sub_10093890(this, i) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this[1] + 40 * i + 16));
  return sub_100941A0(this);
}
