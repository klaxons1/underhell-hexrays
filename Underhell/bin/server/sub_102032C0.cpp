bool __thiscall sub_102032C0(int this, int a2, int a3, int a4, float *a5)
{
  double v6; // st6
  double v7; // st7
  double v8; // st7
  float v10[3]; // [esp+Ch] [ebp-18h] BYREF
  float v11; // [esp+18h] [ebp-Ch] BYREF
  float v12; // [esp+1Ch] [ebp-8h]
  float v13; // [esp+20h] [ebp-4h]

  if ( a5 )
    *a5 = 0.0;
  if ( !a2 || !a3 )
    return 0;
  (*(void (__thiscall **)(int, float *, _DWORD, _DWORD))(*(_DWORD *)a2 + 528))(a2, v10, 0, 0);
  if ( (*(_BYTE *)(this + 248) & 1) != 0 )
  {
    (*(void (__thiscall **)(int, float *, _DWORD, _DWORD))(*(_DWORD *)a3 + 528))(a3, &v11, 0, 0);
  }
  else
  {
    if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
      sub_100DAE60(a2);
    if ( (*(_DWORD *)(a3 + 252) & 0x800) != 0 )
      sub_100DAE60(a3);
    v6 = *(float *)(a3 + 584) - *(float *)(a2 + 584);
    v7 = *(float *)(a3 + 588) - *(float *)(a2 + 588);
    v11 = *(float *)(a3 + 580) - *(float *)(a2 + 580);
    v12 = v6;
    v13 = v7;
    off_10689714();
  }
  v8 = v10[1] * v12 + v10[0] * v11 + v10[2] * v13;
  if ( a5 )
    *a5 = v8;
  return v8 >= *(float *)(this + 820);
}
