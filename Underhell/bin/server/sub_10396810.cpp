bool __thiscall sub_10396810(_DWORD *this, int a2, float a3, int a4)
{
  _DWORD *v4; // ebx
  int v5; // edi
  int v6; // esi
  _DWORD *v7; // edi
  int v8; // ebx
  int v9; // eax

  v4 = this;
  v5 = a2;
  if ( sub_100737B0(*(this - 107)) * 1.5 > *(float *)(a2 + 100) - *(float *)(a2 + 104) )
  {
    v6 = sub_100D7680(*(_DWORD *)(a2 + 96));
    if ( v6 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 1528))(v6, 0)
        && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 296))(v6)
        && !*(_BYTE *)(v6 + 2680) )
      {
        v7 = v4 - 526;
        if ( (sub_100697A0(v4 - 526, 63, 1)
           || sub_100697A0(v4 - 526, 66, 1)
           || sub_100697A0((_DWORD *)v6, 81, 1)
           || sub_100296A0(v4 - 526) && !sub_100296A0((_DWORD *)v6)
           || (*(int (__thiscall **)(_DWORD *))(*v7 + 220))(v4 - 526) == 3
           || *((_BYTE *)v4 + 576))
          && (sub_10024070((_DWORD *)v6, 48) || sub_10024070((_DWORD *)v6, 67)) )
        {
          v8 = *(_DWORD *)(v6 + 2604);
          v9 = (*(int (__thiscall **)(_DWORD *))(*v7 + 576))(v7);
          sub_10078690(v8, v9, 0.0, 0.0);
          sub_100457E0((_DWORD *)v6, 68);
          v4 = this;
        }
        v5 = a2;
      }
    }
  }
  return sub_10022470(v4, v5, a3, a4);
}
