int __thiscall sub_10393DD0(_DWORD *this)
{
  int v2; // esi

  v2 = sub_100DA1F0(this) | 8;
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 264))(this) )
    v2 |= 0x10u;
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 264))(this) )
    return v2 | 0x10;
  return v2;
}
