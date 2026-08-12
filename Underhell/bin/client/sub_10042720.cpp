int __thiscall sub_10042720(_DWORD *this)
{
  int v2; // eax
  unsigned int v4; // eax

  if ( (_DWORD *)dword_10407394 == this
    && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 320))(dword_1041315C) )
  {
    v2 = sub_100B1EE0();
    return sub_100B1FF0(v2);
  }
  else
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*this + 844))(this) == 6 )
      return 0;
    v4 = this[1022];
    if ( v4 == -1 || *((_DWORD *)off_103DCD74 + 4 * (this[1022] & 0xFFF) + 2) != v4 >> 12 )
      return 0;
    else
      return *((_DWORD *)off_103DCD74 + 4 * (this[1022] & 0xFFF) + 1);
  }
}
