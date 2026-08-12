int __thiscall sub_100312F0(int this)
{
  int result; // eax
  int v3; // ebx
  int v4; // edx
  unsigned int v5; // eax
  int v6; // esi
  double v7; // st6
  double v8; // st7
  _BYTE v9[64]; // [esp+4h] [ebp-B4h] BYREF
  _BYTE v10[12]; // [esp+44h] [ebp-74h] BYREF
  float v11; // [esp+50h] [ebp-68h]
  float v12; // [esp+60h] [ebp-58h]
  float v13; // [esp+70h] [ebp-48h]
  _BYTE v14[12]; // [esp+84h] [ebp-34h] BYREF
  float v15[3]; // [esp+90h] [ebp-28h] BYREF
  float v16; // [esp+9Ch] [ebp-1Ch]
  float v17; // [esp+A0h] [ebp-18h]
  float v18; // [esp+A4h] [ebp-14h]
  int v19; // [esp+A8h] [ebp-10h]
  float v20; // [esp+ACh] [ebp-Ch]
  float v21; // [esp+B0h] [ebp-8h]
  float v22; // [esp+B4h] [ebp-4h]

  result = *(_DWORD *)(this + 2520);
  if ( result != -1 )
  {
    v19 = *(_DWORD *)(this + 2524) + 164 * result;
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( *(_DWORD *)(this + 2484) == -1
      || off_1061BE18[4 * (*(_DWORD *)(this + 2484) & 0xFFF) + 2] != *(_DWORD *)(this + 2484) >> 12 )
    {
      v3 = 0;
    }
    else
    {
      v3 = off_1061BE18[4 * (*(_DWORD *)(this + 2484) & 0xFFF) + 1];
    }
    if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
      sub_100DAE60(v3);
    v15[0] = *(float *)(v3 + 580) - *(float *)(this + 580);
    v15[1] = *(float *)(v3 + 584) - *(float *)(this + 584);
    v15[2] = *(float *)(v3 + 588) - *(float *)(this + 588);
    off_10689714();
    sub_10422540(v15, v14);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    sub_10425A30(this + 580, v14);
    sub_10425BE0(v9, v19 + 92, v10);
    v4 = *(_DWORD *)(this + 252);
    v20 = v11;
    v21 = v12;
    v22 = v13;
    if ( (v4 & 0x800) != 0 )
      sub_100DAE60(this);
    v5 = *(_DWORD *)(this + 2484);
    v16 = *(float *)(this + 580) - v20;
    v17 = *(float *)(this + 584) - v21;
    v18 = *(float *)(this + 588) - v22;
    if ( v5 == -1 || off_1061BE18[4 * (v5 & 0xFFF) + 2] != v5 >> 12 )
      v6 = 0;
    else
      v6 = off_1061BE18[4 * (v5 & 0xFFF) + 1];
    result = *(_DWORD *)(v6 + 252) >> 11;
    if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
      result = sub_100DAE60(v6);
    v7 = *(float *)(v6 + 584) + v17;
    v8 = *(float *)(v6 + 588) + v18;
    *(float *)(this + 2488) = *(float *)(v6 + 580) + v16;
    *(float *)(this + 2492) = v7;
    *(float *)(this + 2496) = v8;
  }
  return result;
}
