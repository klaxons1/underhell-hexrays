int __thiscall sub_1032EA00(float *this)
{
  unsigned int v2; // eax
  float *v3; // eax
  double v4; // st6
  double v5; // st7
  int (__thiscall *v6)(float *); // eax
  int v7; // eax
  unsigned int v8; // esi
  int v9; // ecx
  double v10; // st7
  char v11; // fps^1
  bool v12; // c0
  char v13; // c2
  bool v14; // c3
  char v15; // ah
  bool v16; // c0
  bool v17; // c3
  int result; // eax
  float v19; // [esp+Ch] [ebp-20h]
  float v20[3]; // [esp+10h] [ebp-1Ch] BYREF
  float v21; // [esp+1Ch] [ebp-10h]
  float v22; // [esp+20h] [ebp-Ch]
  float v23; // [esp+24h] [ebp-8h]
  float v24; // [esp+28h] [ebp-4h]

  sub_104222B0(this + 182, 0, v20, 0);
  v2 = *((_DWORD *)this + 949);
  if ( v2 == -1 || off_1061BE18[4 * ((_DWORD)this[949] & 0xFFF) + 2] != v2 >> 12 )
    v3 = 0;
  else
    v3 = (float *)off_1061BE18[4 * ((_DWORD)this[949] & 0xFFF) + 1];
  v4 = v3[180] - this[180];
  v5 = v3[181] - this[181];
  v21 = v3[179] - this[179];
  v22 = v4;
  v23 = v5;
  off_10689714();
  v6 = *(int (__thiscall **)(float *))(*(_DWORD *)this + 576);
  v20[2] = 0.0;
  v23 = 0.0;
  v24 = v20[1] * v22 + v20[0] * v21;
  v7 = v6(this);
  v8 = *((_DWORD *)this + 949);
  if ( v8 == -1 || off_1061BE18[4 * (v8 & 0xFFF) + 2] != v8 >> 12 )
    v9 = 0;
  else
    v9 = off_1061BE18[4 * (v8 & 0xFFF) + 1];
  v19 = *(float *)(v7 + 8);
  v10 = v19 - *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)v9 + 576))(v9) + 8);
  v12 = v24 > 0.0;
  v13 = 0;
  v14 = 0.0 == v24;
  v15 = v11;
  v16 = v10 > 0.0;
  v17 = 0.0 == v10;
  if ( __SETP__(v15 & 0x41, 0) )
  {
    result = dword_106E5704;
    if ( v16 || v17 )
      return dword_106E56FC;
  }
  else if ( v16 || v17 )
  {
    return dword_106E56F8;
  }
  else
  {
    return dword_106E5700;
  }
  return result;
}
