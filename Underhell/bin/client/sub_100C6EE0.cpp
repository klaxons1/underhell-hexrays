char __thiscall sub_100C6EE0(int this)
{
  _DWORD *v3; // esi
  int v4; // eax
  int v5; // [esp+4h] [ebp-4h]

  if ( *(_BYTE *)(this + 301) )
    return 0;
  v3 = (_DWORD *)sub_100422D0();
  if ( !v3 )
    return 0;
  v4 = (*(int (__thiscall **)(_DWORD *))(*v3 + 788))(v3);
  if ( v4 )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 1264))(v4) )
      return 0;
  }
  if ( *(_DWORD *)(this + 252) )
  {
    if ( *(_DWORD *)(dword_10430B6C + 48) )
    {
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 112))(dword_1041315C)
        && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 312))(dword_1041315C) )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 100))(dword_1044CC48) )
        {
          if ( (v3[183] & 0x20) == 0 )
          {
            v5 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10413168 + 108))(dword_10413168);
            if ( (*(int (__thiscall **)(_DWORD *))(v3[2] + 36))(v3 + 2) == v5
              && !sub_10042A30(v3)
              && ((*(unsigned __int8 (__thiscall **)(_DWORD *))(*v3 + 500))(v3)
               || (*(int (__thiscall **)(_DWORD *))(*v3 + 844))(v3) == 4
               || *(_DWORD *)(dword_10430BB4 + 48) && (*(int (__thiscall **)(_DWORD *))(*v3 + 844))(v3) == 6)
              && sub_100B68D0((int *)this) )
            {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}
