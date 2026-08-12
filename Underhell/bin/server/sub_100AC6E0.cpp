bool __thiscall sub_100AC6E0(_DWORD **this, int a2)
{
  int v3; // esi
  int v4; // eax
  char v5; // al
  float *v6; // ecx

  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this[1] + 8))(this[1]) )
    return 1;
  v3 = sub_100D7680(a2);
  if ( !sub_100D7680(v3) )
    return 1;
  v4 = sub_100D7680(v3);
  v5 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 1528))(v4, 0);
  v6 = &flt_1060B428;
  if ( !v5 )
    v6 = &flt_1060B430;
  return sub_100AC680(v6, a2);
}
