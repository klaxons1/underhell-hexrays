int __thiscall sub_1017CCD0(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // ebx
  unsigned int v5; // eax
  int v6; // edi
  __int64 v8; // [esp+0h] [ebp-20h]
  float v9; // [esp+0h] [ebp-20h]
  __int64 v10; // [esp+0h] [ebp-20h]
  float v11; // [esp+0h] [ebp-20h]
  float v12[3]; // [esp+14h] [ebp-Ch] BYREF

  v2 = *(_DWORD *)(this + 832);
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 832) & 0xFFF) + 1], v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = *v3;
  v5 = *(_DWORD *)(this + 828);
  if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 828) & 0xFFF) + 2] != v5 >> 12 )
    v6 = 0;
  else
    v6 = off_1061BE18[4 * (*(_DWORD *)(this + 828) & 0xFFF) + 1];
  if ( v4 && v6 && *(_DWORD *)(v4 + 24) && *(_DWORD *)(v6 + 24) )
  {
    if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
      sub_100DAE60(v6);
    if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
      sub_100DAE60(v4);
    HIDWORD(v8) = this;
    LODWORD(v8) = this;
    v12[0] = *(float *)(v4 + 580) - *(float *)(v6 + 580);
    v12[1] = *(float *)(v4 + 584) - *(float *)(v6 + 584);
    v12[2] = *(float *)(v4 + 588) - *(float *)(v6 + 588);
    sub_1017CC60((float *)(this + 800), v12, v8);
    v9 = *(float *)(dword_106B31C8 + 12) + 0.0099999998;
    return sub_100EC4A0((int *)this, v9, 0);
  }
  else
  {
    HIDWORD(v10) = this;
    LODWORD(v10) = this;
    sub_1017CC60((float *)(this + 800), &flt_106F1CA8, v10);
    v11 = *(float *)(dword_106B31C8 + 12) + 10.0;
    return sub_100EC4A0((int *)this, v11, 0);
  }
}
