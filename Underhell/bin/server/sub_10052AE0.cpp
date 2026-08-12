float *__thiscall sub_10052AE0(_DWORD *this, float *a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // ecx
  bool v6; // zf
  unsigned int v7; // eax
  int v8; // ecx
  float *v9; // eax
  double v10; // st7
  unsigned int v11; // eax
  int v12; // eax
  unsigned int v13; // eax
  int v14; // ecx
  unsigned int v15; // eax
  int v16; // ecx
  float *result; // eax
  int v18; // esi
  _BYTE v19[12]; // [esp+4h] [ebp-78h] BYREF
  float v20; // [esp+10h] [ebp-6Ch]
  float v21; // [esp+14h] [ebp-68h]
  float v22; // [esp+18h] [ebp-64h]
  float v23[3]; // [esp+58h] [ebp-24h] BYREF
  float v24[3]; // [esp+64h] [ebp-18h] BYREF
  float v25; // [esp+70h] [ebp-Ch] BYREF
  float v26; // [esp+74h] [ebp-8h]
  float v27; // [esp+78h] [ebp-4h]

  v3 = this[5];
  if ( v3 == -1 || (v4 = &off_1061BE18[4 * (this[5] & 0xFFF) + 1], v4[1] != v3 >> 12) )
    v5 = 0;
  else
    v5 = *v4;
  v6 = __RTDynamicCast(
         v5,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CPointEntity `RTTI Type Descriptor',
         0) == 0;
  v7 = this[5];
  if ( v6 )
  {
    if ( v7 == -1 || off_1061BE18[4 * (this[5] & 0xFFF) + 2] != v7 >> 12 )
      v8 = 0;
    else
      v8 = off_1061BE18[4 * (this[5] & 0xFFF) + 1];
    v9 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)v8 + 504))(v8, v23);
    v25 = *v9;
    v26 = v9[1];
    v10 = v9[2];
    v11 = this[5];
    v27 = v10;
    if ( v11 == -1 || off_1061BE18[4 * (v11 & 0xFFF) + 2] != v11 >> 12 )
      v12 = 0;
    else
      v12 = off_1061BE18[4 * (v11 & 0xFFF) + 1];
    if ( __RTDynamicCast(
           v12,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CBasePlayer `RTTI Type Descriptor',
           0) )
    {
      sub_100F5A30(v24, 0, 0);
    }
    else
    {
      v13 = this[5];
      if ( v13 == -1 || off_1061BE18[4 * (this[5] & 0xFFF) + 2] != v13 >> 12 )
        v14 = 0;
      else
        v14 = off_1061BE18[4 * (this[5] & 0xFFF) + 1];
      (*(void (__thiscall **)(int, float *, _DWORD, _DWORD))(*(_DWORD *)v14 + 528))(v14, v24, 0, 0);
    }
    v15 = this[5];
    if ( v15 == -1 || off_1061BE18[4 * (this[5] & 0xFFF) + 2] != v15 >> 12 )
      v16 = 0;
    else
      v16 = off_1061BE18[4 * (this[5] & 0xFFF) + 1];
    v23[0] = v24[0] * 8192.0 + v25;
    v23[1] = v24[1] * 8192.0 + v26;
    v23[2] = 8192.0 * v24[2] + v27;
    sub_10030570((int)this, &v25, v23, v16, (int)v19, 0);
    result = a2;
    *a2 = v20;
    a2[1] = v21;
    a2[2] = v22;
  }
  else
  {
    if ( v7 == -1 || off_1061BE18[4 * (this[5] & 0xFFF) + 2] != v7 >> 12 )
      v18 = 0;
    else
      v18 = off_1061BE18[4 * (this[5] & 0xFFF) + 1];
    if ( (*(_DWORD *)(v18 + 252) & 0x800) != 0 )
      sub_100DAE60(v18);
    result = a2;
    *a2 = *(float *)(v18 + 580);
    a2[1] = *(float *)(v18 + 584);
    a2[2] = *(float *)(v18 + 588);
  }
  return result;
}
