char *__thiscall sub_101A3450(int this)
{
  char *result; // eax
  int v3; // edi
  float *v4; // ebx
  int v5; // eax
  int v6; // ecx
  double v7; // st4
  double v8; // st5
  double v9; // st7
  _DWORD *v10; // edi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  double (__thiscall *v15)(int); // edx
  double v16; // st7
  float v17; // [esp+8h] [ebp-64h]
  int v18[14]; // [esp+18h] [ebp-54h] BYREF
  float v19; // [esp+50h] [ebp-1Ch]
  float v20; // [esp+54h] [ebp-18h]
  float v21; // [esp+58h] [ebp-14h]
  int v22; // [esp+5Ch] [ebp-10h] BYREF
  float v23; // [esp+60h] [ebp-Ch]
  float v24; // [esp+64h] [ebp-8h]
  float v25; // [esp+68h] [ebp-4h]

  sub_1032F450(this);
  sub_101A30A0(this);
  result = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
  if ( result )
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
    if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
      sub_100DAE60(v3);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v4 = (float *)(this + 580);
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this)
      && *(_BYTE *)(this + 3837)
      && *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 3888) )
    {
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
      v6 = *(_DWORD *)(v5 + 252) >> 11;
      v25 = *(float *)&v5;
      if ( (v6 & 1) != 0 )
      {
        sub_100DAE60(v5);
        v5 = LODWORD(v25);
      }
      v7 = *(float *)(v5 + 584) - *(float *)(this + 584);
      v8 = *(float *)(v5 + 588) - *(float *)(this + 588);
      v17 = v8 * v8 + v7 * v7 + (*(float *)(v5 + 580) - *v4) * (*(float *)(v5 + 580) - *v4);
      if ( off_10689708(v17) >= 128.0 )
      {
        v19 = *(float *)(v3 + 580) - *v4;
        v20 = *(float *)(v3 + 584) - *(float *)(this + 584);
        v21 = *(float *)(v3 + 588) - *(float *)(this + 588);
        off_10689714();
        v9 = *sub_10023450((float *)this) * 0.5;
        *(float *)&v22 = *(float *)(v3 + 580) - v19 * v9;
        v23 = *(float *)(v3 + 584) - v20 * v9;
        v24 = *(float *)(v3 + 588) - v9 * v21;
        memset(v18, 0, sizeof(v18));
        v10 = *(_DWORD **)(this + 2600);
        v11 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
        sub_1007C550(v10, 0, (float *)(this + 580), (float *)&v22, 147467, v11, 100.0, 0, (float *)v18);
        if ( v18[0] >= 0 )
          return sub_10023CB0((char *)this, 79);
        if ( v18[7] )
        {
          v12 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0);
          v13 = sub_10038080(v12);
          v14 = v18[7];
          if ( v18[7] != v13 )
          {
LABEL_20:
            if ( *(_BYTE *)(v14 + 225) || *(_BYTE *)(v14 + 306) == 6 )
              return sub_10023CB0((char *)this, 79);
            return sub_10023E00((char *)this, 79);
          }
          v15 = *(double (__thiscall **)(int))(*(_DWORD *)this + 1724);
          v25 = fabs(*(float *)&v18[3] - v24);
          v16 = v15(this);
          if ( v16 >= v25 )
          {
            if ( fabs(*(float *)&v18[2] - v23)
               + fabs(*(float *)&v18[1] - *(float *)&v22)
               + fabs(*(float *)&v18[3] - v24) >= 64.0 )
            {
              v14 = v18[7];
              goto LABEL_20;
            }
            return sub_10023CB0((char *)this, 79);
          }
        }
      }
    }
    return sub_10023E00((char *)this, 79);
  }
  return result;
}
