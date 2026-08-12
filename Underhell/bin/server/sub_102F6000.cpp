int __thiscall sub_102F6000(int this, float *a2)
{
  int result; // eax
  int v4; // ebx
  double v5; // st4
  double v6; // st6
  double v7; // st4
  double v8; // st5
  double v9; // st6
  float *v10; // esi
  float *v11; // eax
  double v12; // st4
  double v13; // st6
  double v14; // st4
  double v15; // st5
  double v16; // st6
  bool v17; // zf

  result = sub_103971C0(a2);
  v4 = result;
  if ( a2 )
  {
    if ( (*(int (__thiscall **)(float *))(*(_DWORD *)a2 + 220))(a2) == 4 )
    {
      if ( v4 == 1 )
      {
        if ( ((_DWORD)a2[63] & 0x800) != 0 )
          sub_100DAE60((int)a2);
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        v5 = *(float *)(this + 584) - a2[146];
        v6 = v5 * v5;
        v7 = *(float *)(this + 580) - a2[145];
        v8 = v6;
        v9 = *(float *)(this + 588) - a2[147];
        if ( v7 * v7 + v8 + v9 * v9 < 129600.0 )
          return 2;
      }
      return v4;
    }
    if ( (*(int (__thiscall **)(float *))(*(_DWORD *)a2 + 220))(a2) == 19 && v4 == 1 && sub_100CF460((_DWORD *)this) )
    {
      v10 = (float *)sub_10019640(a2);
      v11 = (float *)sub_10019640((_DWORD *)this);
      v12 = v11[1] - v10[1];
      v13 = v12 * v12;
      v14 = *v11 - *v10;
      v15 = v13;
      v16 = v11[2] - v10[2];
      if ( v14 * v14 + v15 + v16 * v16 < 3600.0 )
        return 2;
      return v4;
    }
    if ( (*(int (__thiscall **)(float *))(*(_DWORD *)a2 + 220))(a2) != 21 )
      return v4;
    v17 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 1088))(this) == 0;
    result = 1;
    if ( v17 )
      return v4;
  }
  return result;
}
