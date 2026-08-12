int __thiscall sub_101850D0(unsigned __int16 *this)
{
  int result; // eax
  int v3; // eax
  unsigned int v4; // esi
  int *v5; // ecx

  result = (*(int (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 720))(this);
  if ( !(_BYTE)result )
  {
    if ( *((_DWORD *)this + 200) != 1 )
      sub_101129A0(this + 160, this[178] & 0xFFFB);
    v3 = *((_DWORD *)this + 48);
    v4 = v3 & 0xFFFFFFDF;
    if ( v3 != (v3 & 0xFFFFFFDF) )
    {
      if ( *((_BYTE *)this + 84) )
      {
        *((_BYTE *)this + 88) |= 1u;
      }
      else
      {
        v5 = (int *)*((_DWORD *)this + 6);
        if ( v5 )
          sub_100194B0(v5, 192);
      }
      *((_DWORD *)this + 48) = v4;
    }
    if ( *((_DWORD *)this + 6) )
      **((_DWORD **)this + 6) |= 0x80u;
    return sub_100D8500(this);
  }
  return result;
}
