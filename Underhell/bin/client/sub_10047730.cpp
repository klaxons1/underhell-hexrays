int __thiscall sub_10047730(unsigned __int8 *this)
{
  _DWORD *v2; // esi

  v2 = (_DWORD *)sub_100422D0();
  if ( !v2 || !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v2 + 880))(v2) )
  {
    v2 = (_DWORD *)(*(int (__thiscall **)(unsigned __int8 *))(*((_DWORD *)this - 1) + 776))(this - 4);
    if ( !v2 || !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v2 + 1308))(v2) )
      return sub_10034810(this);
  }
  (*(void (__thiscall **)(_DWORD *))(v2[1] + 48))(v2 + 1);
  return (*(int (__thiscall **)(_DWORD *))(v2[1] + 52))(v2 + 1);
}
