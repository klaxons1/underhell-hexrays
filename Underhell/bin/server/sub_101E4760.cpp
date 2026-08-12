char __thiscall sub_101E4760(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // eax
  char v4; // cl
  int v6; // esi

  if ( !a2 )
    return 0;
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 320))(a2) )
    return 0;
  v3 = (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 320))(a2) != 0 ? a2 : 0;
  if ( v3 == this )
    return 0;
  if ( (v3[48] & 0x20) != 0 )
    return 0;
  v4 = *((_BYTE *)v3 + 224);
  if ( v4 == 3 )
    return 0;
  if ( (v4 == 2 || v4 == 1) && *((float *)v3 + 868) + 3.0 < *(float *)(dword_106B31C8 + 12) )
    return 0;
  if ( sub_100D8840(this) != 1 )
  {
    if ( *(_DWORD *)(dword_106B4C1C + 48) == 1 )
    {
      v6 = sub_100D8840(a2);
      if ( sub_100D8840(this) != v6 )
        return 0;
    }
    else if ( *(_DWORD *)(dword_106B4C1C + 48) == 2 )
    {
      return 0;
    }
  }
  return 1;
}
