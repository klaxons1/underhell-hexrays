int __thiscall sub_1004CD80(int this, int a2)
{
  bool v4; // bl
  int v5; // ebx
  unsigned int v6; // eax
  int v7; // esi
  double v8; // st4
  double v9; // st7
  double v10; // st4
  double v11; // st5
  float v12; // [esp+0h] [ebp-10h]

  if ( a2 > 43 )
  {
    if ( a2 == 100003 )
    {
      v5 = *(_DWORD *)(this + 4);
      if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
        sub_100DAE60(*(_DWORD *)(this + 4));
      v6 = *(_DWORD *)(this + 20);
      if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 2] != v6 >> 12 )
        v7 = 0;
      else
        v7 = off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 1];
      if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
        sub_100DAE60(v7);
      v8 = *(float *)(v7 + 580) - *(float *)(v5 + 580);
      v9 = v8 * v8;
      v10 = *(float *)(v7 + 584) - *(float *)(v5 + 584);
      v11 = *(float *)(v7 + 588) - *(float *)(v5 + 588);
      v12 = v11 * v11 + v10 * v10 + v9;
      if ( off_10689708(v12) <= 12.0 )
        return 100004;
    }
    else if ( a2 == 100005 )
    {
      v4 = sub_10023D10(*(_DWORD **)(this + 4), 4);
      if ( v4 | sub_10023D10(*(_DWORD **)(this + 4), 3) )
        return 51;
    }
    return sub_1004B470((_DWORD **)this);
  }
  if ( a2 != 43 )
  {
    if ( a2 == 17 || a2 == 34 )
      return 4 * (*(_BYTE *)(this + 37) != 0) + 100003;
    if ( a2 == 36 )
      return 12;
    return sub_1004B470((_DWORD **)this);
  }
  if ( !(unsigned __int8)sub_100B8D10(*(_DWORD *)(this + 4) + 2760) )
    return sub_1004B470((_DWORD **)this);
  if ( sub_1004AEE0(*(_DWORD **)(this + 4), 0, 1) )
    sub_1004AF00(*(_DWORD **)(this + 4));
  return 12;
}
