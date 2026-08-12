void *__thiscall sub_100159D0(_DWORD *this)
{
  int v2; // eax
  unsigned int v3; // eax
  int v4; // eax

  if ( (dword_10402BAC & 1) == 0 )
    dword_10402BAC |= 1u;
  v2 = this[305];
  if ( v2
    && v2 != 3
    && ((v3 = this[307], v3 == -1) || *((_DWORD *)off_103DCD74 + 4 * (this[307] & 0xFFF) + 2) != v3 >> 12
      ? (v4 = 0)
      : (v4 = *((_DWORD *)off_103DCD74 + 4 * (this[307] & 0xFFF) + 1)),
        (unsigned __int8)sub_10136EE0(v4, this[317], 0, &unk_10402BA0)) )
  {
    return &unk_10402BA0;
  }
  else
  {
    return (void *)(*(int (__thiscall **)(_DWORD *))(*this + 36))(this);
  }
}
