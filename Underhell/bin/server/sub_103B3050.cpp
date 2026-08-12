bool __thiscall sub_103B3050(int this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx
  bool result; // al
  int v8; // eax
  _BYTE *v9; // eax
  int v10; // [esp-8h] [ebp-Ch]

  v3 = *(_DWORD *)(this + 3800);
  if ( v3 == -1 || (v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 3800) & 0xFFF) + 1], v5 = v3 >> 12, v4[1] != v5) || !*v4 )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2)
      || sub_100538F0(this, *(const char **)(this + 3636)) <= 0 )
    {
      v8 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 288))(a2);
      if ( !v8 )
        return sub_10027D40((_DWORD *)this, a2);
      if ( *(_DWORD *)(this + 2932) == -1 )
        return 1;
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 2932) & 0xFFF) + 2] != *(_DWORD *)(this + 2932) >> 12 )
        return 1;
      if ( !off_1061BE18[4 * (*(_DWORD *)(this + 2932) & 0xFFF) + 1] )
        return 1;
      v10 = v8;
      v9 = (_BYTE *)sub_1026A890((unsigned int *)(this + 2932));
      if ( (unsigned __int8)sub_1013D760(v9, this, v10) )
        return 1;
    }
    return 0;
  }
  result = 0;
  if ( v4[1] == v5 )
  {
    v6 = *v4;
    if ( v6 )
    {
      if ( v6 == a2 )
        return 1;
    }
  }
  return result;
}
