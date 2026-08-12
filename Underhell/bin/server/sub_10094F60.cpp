char __thiscall sub_10094F60(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  char *v3; // eax
  char *v4; // ebx
  int v5; // eax
  int v7; // eax
  int v8; // edi
  int v9; // eax

  v2 = this;
  if ( *a2 == 14 )
  {
    if ( sub_10023D10(this, 67) && *(_DWORD *)(dword_106B31C8 + 20) == 1 )
    {
      v7 = sub_10261B20();
      v8 = v2[651];
      v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 576))(v7);
      sub_10078690(v8, v9, 0.0, 0.0);
    }
    this = v2;
    return sub_1001E620(this, a2);
  }
  if ( *a2 == 116 )
  {
    this[1093] = -1;
    return sub_1001E620(this, a2);
  }
  if ( *a2 != 150 )
    return sub_1001E620(this, a2);
  if ( !this[1089] )
    return (*(int (__thiscall **)(_DWORD *, int))(*this + 1312))(this, 17);
  v3 = (char *)sub_10184390(168);
  if ( v3 )
    v4 = sub_10065740(v3);
  else
    v4 = 0;
  sub_10068030((int)v4, (int)(v2 + 1043));
  if ( v2[1090] < 0x10u )
    v5 = (int)(v2 + 1085);
  else
    v5 = v2[1085];
  sub_10092D30(v2, v5, (int)v4);
  sub_10093DC0(v2 + 1085, 0, 0xFFFFFFFF);
  return sub_10027CD0(v2, 0);
}
