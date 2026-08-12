int __thiscall sub_102085B0(int this, float a2, int a3, int a4, float a5, int a6, int a7, float *a8, float *a9)
{
  float v10; // eax
  float v11; // ecx
  float v12; // edx
  float *v13; // ebx
  float *v14; // edi
  int result; // eax
  float v16[3]; // [esp+Ch] [ebp-3Ch] BYREF
  float v17[3]; // [esp+18h] [ebp-30h] BYREF
  float v18[3]; // [esp+24h] [ebp-24h] BYREF
  float v19[3]; // [esp+30h] [ebp-18h] BYREF
  float v20[3]; // [esp+3Ch] [ebp-Ch] BYREF

  v10 = *(float *)(this + 728);
  v11 = *(float *)(this + 732);
  v12 = *(float *)(this + 736);
  v20[0] = v10;
  v20[1] = v11;
  v20[2] = v12;
  sub_100E11A0(this, &a2);
  sub_10111910((_BYTE *)(this + 320), (float *)(this + 328), (float *)(this + 340), v16, v17);
  sub_100E11A0(this, &a5);
  sub_10111910((_BYTE *)(this + 320), (float *)(this + 328), (float *)(this + 340), v18, v19);
  sub_100E11A0(this, v20);
  v13 = a9;
  v14 = a8;
  sub_10206D70(v16, v17, v18, v19, a8, a9);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  *v14 = *v14 - *(float *)(this + 580);
  v14[1] = v14[1] - *(float *)(this + 584);
  v14[2] = v14[2] - *(float *)(this + 588);
  result = *(_DWORD *)(this + 252) >> 11;
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    result = sub_100DAE60(this);
  *v13 = *v13 - *(float *)(this + 580);
  v13[1] = v13[1] - *(float *)(this + 584);
  v13[2] = v13[2] - *(float *)(this + 588);
  return result;
}
