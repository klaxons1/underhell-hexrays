BOOL __thiscall sub_102084A0(int this)
{
  double v2; // st7
  int v3; // ecx
  double v4; // st6
  double v5; // st5
  double v6; // st4
  void (__thiscall *v7)(int, _DWORD, float *); // edx
  float v9[3]; // [esp+4h] [ebp-30h] BYREF
  float v10; // [esp+10h] [ebp-24h]
  float v11; // [esp+14h] [ebp-20h]
  float v12; // [esp+1Ch] [ebp-18h] BYREF
  float v13; // [esp+20h] [ebp-14h]
  float v14; // [esp+24h] [ebp-10h]
  float v15; // [esp+28h] [ebp-Ch] BYREF
  float v16; // [esp+2Ch] [ebp-8h]
  float v17; // [esp+30h] [ebp-4h]

  sub_10111910((_BYTE *)(this + 320), (float *)(this + 328), (float *)(this + 340), &v15, &v12);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v2 = v15 - *(float *)(this + 580);
  v3 = *(_DWORD *)(this + 252) >> 11;
  v15 = v2;
  v4 = v16 - *(float *)(this + 584);
  v16 = v4;
  v17 = v17 - *(float *)(this + 588);
  if ( (v3 & 1) != 0 )
  {
    sub_100DAE60(this);
    v2 = v15;
    v4 = v16;
  }
  v5 = v12 - *(float *)(this + 580);
  v12 = v5;
  v6 = v13 - *(float *)(this + 584);
  v13 = v6;
  v14 = 0.0;
  v17 = 0.0;
  if ( v6 * v6 + v5 * v5 >= v2 * v2 + v4 * v4 )
  {
    v4 = v6;
    v2 = v5;
  }
  v7 = *(void (__thiscall **)(int, _DWORD, float *))(*(_DWORD *)this + 528);
  v10 = v2;
  v11 = v4;
  v7(this, 0, v9);
  return v9[2] * 0.0 + v9[1] * v11 + v9[0] * v10 > 0.0;
}
