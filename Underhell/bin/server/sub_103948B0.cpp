bool __thiscall sub_103948B0(_BYTE *this)
{
  bool result; // al
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  int v5; // eax

  result = 1;
  if ( !this[5640] && !sub_100296A0(this) )
  {
    v3 = (_DWORD *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 2424))(this);
    if ( !sub_10050FC0(v3) )
      return 0;
    v4 = (_DWORD *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 2424))(this);
    v5 = sub_10050FC0(v4);
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 320))(v5) )
      return 0;
  }
  return result;
}
