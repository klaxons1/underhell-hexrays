char __thiscall sub_102FBF60(float *this, float *a2)
{
  int v3; // eax
  int v5; // eax
  _DWORD *v6; // ecx
  float *v7; // edi
  float *v8; // eax
  double v9; // st7
  double v10; // st4
  double v11; // st6
  double v12; // st4
  double v13; // st5
  double v14; // st6
  double v15; // st7
  int v17; // ecx
  float v18[3]; // [esp+8h] [ebp-Ch] BYREF
  _DWORD *v19; // [esp+1Ch] [ebp+8h]
  float v20; // [esp+1Ch] [ebp+8h]

  v3 = sub_101679A0((int)"antlion_allied");
  if ( sub_10167A00(v3) == 1 && (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a2 + 320))(a2) )
    return 0;
  if ( !(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *((_DWORD *)a2 + 6)) )
    return 0;
  v5 = (*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 1308))(this, 98);
  if ( sub_100697A0(this, v5, 1) )
  {
    v6 = (_DWORD *)*((_DWORD *)this + 647);
    if ( v6 )
    {
      if ( sub_1007E040(v6) )
      {
        v19 = (_DWORD *)*((_DWORD *)this + 647);
        v7 = (float *)sub_10019640(a2);
        v8 = (float *)sub_1007DD50(v19);
        v18[0] = *v8 - *v7;
        v18[1] = v8[1] - v7[1];
        v18[2] = v8[2] - v7[2];
        v9 = *(float *)(dword_106DE754 + 44);
        v20 = *(float *)(dword_106DE754 + 44);
        sub_100D7A40(v18);
        if ( v9 > v20 )
          return 0;
      }
    }
  }
  if ( sub_10050FC0((_DWORD *)this + 925) )
  {
    if ( ((_DWORD)this[63] & 0x800) != 0 )
      sub_100DAE60((int)this);
    if ( ((_DWORD)a2[63] & 0x800) != 0 )
      sub_100DAE60((int)a2);
    v10 = a2[146] - this[146];
    v11 = v10 * v10;
    v12 = a2[145] - this[145];
    v13 = v11;
    v14 = a2[147] - this[147];
    v15 = v12 * v12 + v13 + v14 * v14;
    if ( *(float *)(dword_106B31C8 + 12) >= (double)this[1019] )
    {
      if ( v15 > 4000000.0 )
        return 0;
    }
    else if ( v15 > 16384.0 )
    {
      return 0;
    }
  }
  v17 = *((_DWORD *)this + 906);
  if ( v17 )
    return (*(int (__thiscall **)(int, float *))(*(_DWORD *)v17 + 160))(v17, a2);
  else
    return sub_10027D40(this, (int)a2);
}
