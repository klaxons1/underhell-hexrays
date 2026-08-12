_DWORD *__thiscall sub_1007F6F0(int *this, int a2)
{
  float *v3; // eax
  float *v4; // eax
  bool v5; // zf
  double v6; // st7
  double v7; // st7
  _DWORD *v8; // ebx
  int v9; // eax
  unsigned int v10; // eax
  int v11; // eax
  double v12; // st7
  int v13; // edx
  int v14; // ecx
  _DWORD *result; // eax

  *(_DWORD *)(a2 + 48) = this[3];
  v3 = (float *)sub_100A6030(this[9]);
  *(float *)a2 = *v3;
  *(float *)(a2 + 4) = v3[1];
  *(float *)(a2 + 8) = v3[2];
  v4 = (float *)this[1];
  v5 = this[3] == 0;
  *(float *)(a2 + 12) = *(float *)a2 - v4[179];
  *(float *)(a2 + 16) = *(float *)(a2 + 4) - v4[180];
  if ( v5 )
  {
    *(float *)(a2 + 20) = 0.0;
    v6 = sub_10018C80((float *)(a2 + 12));
  }
  else
  {
    *(float *)(a2 + 20) = *(float *)(a2 + 8) - v4[181];
    v6 = off_10689714();
  }
  *(float *)(a2 + 40) = v6;
  *(float *)(a2 + 24) = *(float *)(a2 + 12);
  *(float *)(a2 + 28) = *(float *)(a2 + 16);
  v7 = *(float *)(a2 + 20);
  *(float *)(a2 + 32) = *(float *)(a2 + 20);
  v8 = (_DWORD *)this[5];
  v9 = sub_1007DD80(this);
  sub_10078F70(v8, v9);
  *(float *)(a2 + 36) = v7;
  *(float *)(a2 + 44) = v7 * *(float *)(this[5] + 16);
  if ( sub_100A6180(this[9]) == 2 || sub_100A6180(this[9]) == 1 )
  {
    v11 = sub_100209E0((_DWORD *)this[1]);
  }
  else
  {
    v10 = *(_DWORD *)(this[9] + 16);
    if ( v10 == -1 || off_1061BE18[4 * (*(_DWORD *)(this[9] + 16) & 0xFFF) + 2] != v10 >> 12 )
      v11 = 0;
    else
      v11 = off_1061BE18[4 * (*(_DWORD *)(this[9] + 16) & 0xFFF) + 1];
  }
  v12 = *(float *)(a2 + 40);
  *(_DWORD *)(a2 + 52) = v11;
  if ( v12 < *(float *)(a2 + 44) )
    *(float *)(a2 + 44) = *(float *)(a2 + 40);
  if ( (unsigned __int8)sub_100A61C0(this[9]) )
  {
    *(_DWORD *)(a2 + 56) |= 1u;
  }
  else
  {
    v13 = this[9];
    v14 = *(_DWORD *)(*(_DWORD *)v13 + 40);
    if ( v14 && *(_DWORD *)(v14 + 36) != *(_DWORD *)(*(_DWORD *)v13 + 36) )
      *(_DWORD *)(a2 + 56) |= 4u;
  }
  result = (_DWORD *)sub_10043EC0((_DWORD *)this[1]);
  if ( result )
  {
    if ( *result == 124 )
      *(_DWORD *)(a2 + 56) |= 0x18u;
    *(_DWORD *)(a2 + 60) = this[9];
  }
  else
  {
    result = (_DWORD *)this[9];
    *(_DWORD *)(a2 + 60) = result;
  }
  return result;
}
