int __thiscall sub_102B75A0(int this)
{
  int result; // eax
  int v3; // esi
  int v4; // edx
  double v5; // st7
  double v6; // st7
  double (__thiscall *v7)(int); // edx
  double v8; // st7
  void (__thiscall *v9)(int, _DWORD, _DWORD, float *); // edx
  void (__thiscall *v10)(int, float *); // edx
  double v11; // st7
  void (__thiscall *v12)(int, float *); // edx
  unsigned int v13; // eax
  int *v14; // ecx
  unsigned int v15; // eax
  int v16; // ecx
  void (__thiscall *v17)(int, float *); // edx
  float v18; // [esp+2Ch] [ebp-94h]
  _BYTE v19[20]; // [esp+3Ch] [ebp-84h] BYREF
  float v20; // [esp+50h] [ebp-70h]
  int v21; // [esp+88h] [ebp-38h]
  float v22[3]; // [esp+90h] [ebp-30h] BYREF
  float v23[3]; // [esp+9Ch] [ebp-24h] BYREF
  float v24; // [esp+A8h] [ebp-18h]
  float v25; // [esp+ACh] [ebp-14h]
  float v26; // [esp+B0h] [ebp-10h] BYREF
  float v27; // [esp+B4h] [ebp-Ch]
  float v28; // [esp+B8h] [ebp-8h]
  float v29; // [esp+BCh] [ebp-4h]
  int savedregs; // [esp+C0h] [ebp+0h] BYREF

  v18 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)this, v18, 0);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)this + 728))(this);
  v3 = *(_DWORD *)(this + 424);
  if ( !v3 )
    return result;
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v4 = *(_DWORD *)(this + 252);
  v26 = *(float *)(this + 580);
  v27 = *(float *)(this + 584);
  v28 = *(float *)(this + 588) + 200.0;
  if ( (v4 & 0x800) != 0 )
    sub_100DAE60(this);
  sub_1002A5F0((int)&savedregs, v3, (float *)(this + 580), &v26, 1174421507, this, 4, (int)v19);
  if ( v21 && *(_DWORD *)(v21 + 424) )
  {
    v5 = 200.0;
  }
  else
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v6 = v20 - *(float *)(this + 588) - 24.0;
    v25 = v6;
    if ( v6 >= 0.1 )
      goto LABEL_14;
    v5 = 0.1;
  }
  v25 = v5;
LABEL_14:
  v24 = *(float *)(dword_106B6F0C + 44);
  v7 = *(double (__thiscall **)(int))(*(_DWORD *)v3 + 116);
  v29 = *(float *)(dword_106B6F0C + 44);
  v8 = v7(v3);
  v9 = *(void (__thiscall **)(int, _DWORD, _DWORD, float *))(*(_DWORD *)this + 528);
  v29 = v8 * (sqrt(v25 / (v24 * 0.5)) * v29);
  v9(this, 0, 0, v23);
  (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 96))(v3);
  v10 = *(void (__thiscall **)(int, float *))(*(_DWORD *)v3 + 236);
  v26 = v23[0] * v29;
  v27 = v23[1] * v29;
  v28 = v29 * v23[2];
  v10(v3, &v26);
  v29 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          5.0,
          25.0);
  v11 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          5.0,
          25.0);
  v12 = *(void (__thiscall **)(int, float *))(*(_DWORD *)v3 + 244);
  v26 = v29;
  v27 = v11;
  v28 = 0.0;
  v12(v3, &v26);
  v13 = *(_DWORD *)(this + 1132);
  if ( v13 != -1 )
  {
    v14 = &off_1061BE18[4 * (*(_DWORD *)(this + 1132) & 0xFFF) + 1];
    v15 = v13 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 1132) & 0xFFF) + 2] == v15 )
    {
      if ( *v14 )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 1132) & 0xFFF) + 2] == v15 )
          v16 = *v14;
        else
          v16 = 0;
        (*(void (__thiscall **)(int, float *))(*(_DWORD *)v16 + 536))(v16, &v26);
        v17 = *(void (__thiscall **)(int, float *))(*(_DWORD *)v3 + 236);
        v22[0] = v26 * 10.0;
        v22[1] = v27 * 10.0;
        v22[2] = 10.0 * v28;
        v17(v3, v22);
      }
    }
  }
  sub_1023C380((_DWORD *)this, (int)"NPC_CombineMine.Hop", 0.0, 0);
  return sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
}
