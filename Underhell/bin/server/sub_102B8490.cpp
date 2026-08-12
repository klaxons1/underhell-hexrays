int __thiscall sub_102B8490(int this)
{
  int result; // eax
  int v3; // edi
  int v4; // edx
  double v5; // st7
  double v6; // st7
  double (__thiscall *v7)(int); // edx
  double v8; // st7
  void (__thiscall *v9)(int, _DWORD, _DWORD, float *); // edx
  void (__thiscall *v10)(int, float *); // edx
  unsigned int v11; // eax
  int *v12; // ecx
  unsigned int v13; // eax
  int v14; // ecx
  double v15; // st7
  void (__thiscall *v16)(int, float *); // edx
  double v17; // st7
  void (__thiscall *v18)(int, float *); // edx
  float v19; // [esp+34h] [ebp-94h]
  float v20; // [esp+34h] [ebp-94h]
  _BYTE v21[20]; // [esp+44h] [ebp-84h] BYREF
  float v22; // [esp+58h] [ebp-70h]
  int v23; // [esp+90h] [ebp-38h]
  float v24[3]; // [esp+98h] [ebp-30h] BYREF
  float v25; // [esp+A4h] [ebp-24h] BYREF
  float v26; // [esp+A8h] [ebp-20h]
  float v27; // [esp+ACh] [ebp-1Ch]
  float v28; // [esp+B0h] [ebp-18h]
  float v29; // [esp+B4h] [ebp-14h]
  float v30; // [esp+B8h] [ebp-10h] BYREF
  float v31; // [esp+BCh] [ebp-Ch]
  float v32; // [esp+C0h] [ebp-8h]
  float v33; // [esp+C4h] [ebp-4h]
  int savedregs; // [esp+C8h] [ebp+0h] BYREF

  v19 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)this, v19, 0);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)this + 728))(this);
  v3 = *(_DWORD *)(this + 424);
  if ( !v3 )
    return result;
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v4 = *(_DWORD *)(this + 252);
  v30 = *(float *)(this + 580);
  v31 = *(float *)(this + 584);
  v32 = *(float *)(this + 588) + 78.0;
  if ( (v4 & 0x800) != 0 )
    sub_100DAE60(this);
  sub_1002A5F0((int)&savedregs, this, (float *)(this + 580), &v30, 1174421507, this, 4, (int)v21);
  if ( v23 && *(_DWORD *)(v23 + 424) )
  {
    v5 = 78.0;
  }
  else
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v6 = v22 - *(float *)(this + 588) - 24.0;
    v29 = v6;
    if ( v6 >= 0.1 )
      goto LABEL_14;
    v5 = 0.1;
  }
  v29 = v5;
LABEL_14:
  v28 = *(float *)(dword_106B6F0C + 44);
  v7 = *(double (__thiscall **)(int))(*(_DWORD *)v3 + 116);
  v33 = *(float *)(dword_106B6F0C + 44);
  v8 = v7(v3);
  v9 = *(void (__thiscall **)(int, _DWORD, _DWORD, float *))(*(_DWORD *)this + 528);
  v33 = v8 * (sqrt(v29 / (v28 * 0.5)) * v33);
  v9(this, 0, 0, v24);
  (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 96))(v3);
  v10 = *(void (__thiscall **)(int, float *))(*(_DWORD *)v3 + 236);
  v30 = v24[0] * v33;
  v31 = v24[1] * v33;
  v32 = v33 * v24[2];
  v10(v3, &v30);
  v11 = *(_DWORD *)(this + 1132);
  if ( v11 != -1 )
  {
    v12 = &off_1061BE18[4 * (*(_DWORD *)(this + 1132) & 0xFFF) + 1];
    v13 = v11 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 1132) & 0xFFF) + 2] == v13 )
    {
      if ( *v12 )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 1132) & 0xFFF) + 2] == v13 )
          v14 = *v12;
        else
          v14 = 0;
        (*(void (__thiscall **)(int, float *))(*(_DWORD *)v14 + 536))(v14, &v30);
        v15 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v3 + 116))(v3) * 0.64999998;
        v16 = *(void (__thiscall **)(int, float *))(*(_DWORD *)v3 + 236);
        v25 = v30 * v15;
        v26 = v31 * v15;
        v27 = v15 * v32;
        v16(v3, &v25);
      }
    }
  }
  v33 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          15.0,
          40.0);
  v28 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          15.0,
          40.0);
  v17 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          30.0,
          60.0);
  v18 = *(void (__thiscall **)(int, float *))(*(_DWORD *)v3 + 244);
  v25 = v33;
  v26 = v28;
  v27 = v17;
  v18(v3, &v25);
  sub_1023C380((_DWORD *)this, (int)"NPC_CombineMine.Hop", 0.0, 0);
  sub_100EC3F0((_DWORD *)this, (int)sub_102B8270, 0.0, 0);
  v20 = *(float *)(dword_106B31C8 + 12) + 0.33000001;
  return sub_100EC4A0((int *)this, v20, 0);
}
