int __thiscall sub_1002CC40(_DWORD *this, int a2)
{
  int v2; // edi
  unsigned int v4; // eax
  unsigned int v6; // eax
  int v7; // eax

  v2 = a2;
  switch ( a2 )
  {
    case 17:
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 2168))(this) )
        v2 = 19;
      break;
    case 66:
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 2168))(this) )
        v2 = 69;
      break;
    case 1:
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 2168))(this) )
        v2 = 46;
      break;
    default:
      if ( a2 == 306 && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 2168))(this) )
        v2 = 282;
      break;
  }
  if ( ((*(int (__thiscall **)(_DWORD *))(*this + 1672))(this) & 0x8000000) == 0 )
    return v2;
  if ( v2 != 66 )
  {
    if ( v2 == 3 || v2 == 1 && (this[679] & 2) != 0 )
    {
      v6 = this[722];
      if ( v6 == -1 || off_1061BE18[4 * (this[722] & 0xFFF) + 2] != v6 >> 12 )
        v7 = 0;
      else
        v7 = off_1061BE18[4 * (this[722] & 0xFFF) + 1];
      v2 = (*(int (__thiscall **)(_DWORD *, int))(*this + 2068))(this, v7);
      if ( sub_100BDCE0(v2) == -1 )
        return 1;
    }
    return v2;
  }
  v4 = this[722];
  if ( v4 == -1 || off_1061BE18[4 * (this[722] & 0xFFF) + 2] != v4 >> 12 )
    return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 2072))(this, 0);
  else
    return (*(int (__thiscall **)(_DWORD *, int))(*this + 2072))(this, off_1061BE18[4 * (this[722] & 0xFFF) + 1]);
}
