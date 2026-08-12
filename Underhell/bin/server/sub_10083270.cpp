int __thiscall sub_10083270(_DWORD *this, float *a2)
{
  _DWORD *v3; // ecx
  float *v4; // edi
  float *v5; // eax
  double v6; // st4
  double v7; // st6
  double v8; // st4
  double v9; // st5
  double v10; // st6
  double v11; // st7
  int v12; // ecx
  int v13; // esi
  double v14; // st7
  double v16; // st7
  int v17; // edi
  float *v18; // ebx
  float v19; // [esp+0h] [ebp-64h]
  _BYTE v20[44]; // [esp+Ch] [ebp-58h] BYREF
  float v21; // [esp+38h] [ebp-2Ch]
  float v22; // [esp+60h] [ebp-4h]
  int savedregs; // [esp+64h] [ebp+0h] BYREF

  v3 = (_DWORD *)this[9];
  if ( v3 && *v3 )
  {
    v4 = (float *)this[1];
    v5 = (float *)sub_100A6030(v3);
    v6 = v5[1] - v4[180];
    v7 = v6 * v6;
    v8 = *v5 - v4[179];
    v9 = v7;
    v10 = v5[2] - v4[181];
    v19 = v8 * v8 + v9 + v10 * v10;
    v11 = off_10689708(v19);
    v12 = this[9];
    v22 = v11;
    if ( (unsigned __int8)sub_100A61C0(v12) )
    {
      v13 = this[9];
      if ( *(float *)(v13 + 4) >= (double)a2[4] )
        v14 = *(float *)(v13 + 4);
      else
        v14 = a2[4];
      if ( v14 >= v22 )
        return 2;
      return 0;
    }
    if ( (sub_100A61A0(this[9]) & 0x22) != 0 )
      v16 = a2[1];
    else
      v16 = a2[3];
    if ( v16 >= v22 )
    {
      v17 = this[1];
      v18 = *(float **)(*(_DWORD *)this[9] + 40);
      if ( (*(_DWORD *)(v17 + 252) & 0x800) != 0 )
        sub_100DAE60(v17);
      sub_1002A5F0((int)&savedregs, (int)this, (float *)(v17 + 580), v18, 33701899, v17, 0, (int)v20);
      if ( 1.0 == v21 )
      {
        sub_100820C0((int)this);
        return 1;
      }
    }
    if ( sub_10082630((int)this, (int)a2) )
      return 1;
  }
  return 0;
}
