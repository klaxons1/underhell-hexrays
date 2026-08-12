bool __thiscall sub_101E8060(int this, int a2, int a3, int a4)
{
  int v6; // ebx
  unsigned int v8; // eax
  double v9; // st4
  double v10; // st7
  double v11; // st4
  double v12; // st5
  float v13; // [esp+4h] [ebp-28h]
  float v14[3]; // [esp+14h] [ebp-18h] BYREF
  float v15; // [esp+20h] [ebp-Ch]
  float v16; // [esp+24h] [ebp-8h]
  float v17; // [esp+28h] [ebp-4h]
  float v18; // [esp+34h] [ebp+8h]
  float v19; // [esp+3Ch] [ebp+10h]

  if ( *(_BYTE *)(dword_106B31C8 + 79) )
  {
    if ( !*(_DWORD *)(dword_106B4CAC + 48) )
    {
      v6 = sub_100D8840((_DWORD *)a2);
      if ( v6 == sub_100D8840((_DWORD *)this) )
        return 0;
    }
  }
  if ( a4 )
  {
    v8 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(a2 + 24));
    if ( ((1 << (v8 & 0x1F)) & *(_DWORD *)(a4 + 4 * (v8 >> 5))) == 0 )
      return 0;
  }
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    sub_100DAE60(a2);
  v18 = *(float *)(a2 + 4132);
  v19 = *(float *)(dword_106BD0AC + 44);
  v9 = *(float *)(a2 + 580) - *(float *)(this + 580);
  v10 = v9 * v9;
  v11 = *(float *)(a2 + 584) - *(float *)(this + 584);
  v12 = *(float *)(a2 + 588) - *(float *)(this + 588);
  v13 = v12 * v12 + v11 * v11 + v10;
  if ( v18 * 1.5 * v19 > off_10689708(v13) )
    return 1;
  sub_10422220(a3 + 12, v14);
  v15 = *(float *)(a2 + 580) - *(float *)(this + 580);
  v16 = *(float *)(a2 + 584) - *(float *)(this + 584);
  v17 = *(float *)(a2 + 588) - *(float *)(this + 588);
  off_10689714();
  return v15 * v14[0] + v14[1] * v16 + v14[2] * v17 >= 0.70710701;
}
