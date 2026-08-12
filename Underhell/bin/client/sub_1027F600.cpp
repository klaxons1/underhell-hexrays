int __thiscall sub_1027F600(_DWORD **this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  int v4; // esi

  v2 = (_DWORD *)sub_10229D00(32);
  if ( v2 )
    v3 = sub_10229D20(v2, (int)"BuildDialog");
  else
    v3 = 0;
  sub_1022ACE0(v3, "BuildGroupPtr", (int)this);
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD *))(*this[27] + 44))(this[27], v3) )
    return 0;
  v4 = sub_1022A910(v3, "PanelPtr", 0);
  if ( v4 )
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 80))(dword_1047CA68);
  return v4;
}
