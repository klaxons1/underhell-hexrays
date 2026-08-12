int __thiscall sub_1015FD90(_DWORD *this)
{
  int result; // eax
  _DWORD *v3; // esi
  int v4; // eax
  _DWORD *v5; // esi

  result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 436))(dword_106B31D0);
  if ( !result )
  {
    v3 = (_DWORD *)this[648];
    if ( v3 )
    {
      if ( *v3 )
      {
        sub_1042B1A0(*v3);
        *v3 = 0;
      }
      sub_10184660(v3);
      this[648] = 0;
    }
    v4 = sub_10184390(8);
    v5 = (_DWORD *)v4;
    if ( v4 )
    {
      *(_DWORD *)v4 = 0;
      *(_BYTE *)(v4 + 4) = 0;
      if ( sub_1042A310(32) )
        *v5 = sub_1042A330("gamestats");
      else
        *v5 = 0;
    }
    else
    {
      v5 = 0;
    }
    this[648] = v5;
    sub_1042AFD0("version", 1);
    return sub_1042AF60("srcid", &byte_106B3F00);
  }
  return result;
}
