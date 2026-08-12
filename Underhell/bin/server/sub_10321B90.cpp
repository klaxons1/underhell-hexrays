BOOL __thiscall sub_10321B90(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // eax
  int v5; // eax
  BOOL result; // eax

  v2 = this[935];
  result = 0;
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (this[935] & 0xFFF) + 1], v3[1] != v2 >> 12) || !*v3 )
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*this + 368))(this) )
    {
      v4 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 320))(v4) )
      {
        v5 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
        if ( !sub_100D7680(v5) && *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*this + 368))(this) + 306) == 6 )
          return 1;
      }
    }
  }
  return result;
}
