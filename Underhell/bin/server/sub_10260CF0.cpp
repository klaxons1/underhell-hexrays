bool __cdecl sub_10260CF0(int a1, float *a2, float a3, float *a4)
{
  double v4; // st7
  float v6[3]; // [esp+8h] [ebp-18h] BYREF
  float v7; // [esp+14h] [ebp-Ch]
  float v8; // [esp+18h] [ebp-8h]
  float v9; // [esp+1Ch] [ebp-4h]

  if ( a4 )
    *a4 = 0.0;
  if ( !a1 )
    return 0;
  (*(void (__thiscall **)(int, float *, _DWORD, _DWORD))(*(_DWORD *)a1 + 528))(a1, v6, 0, 0);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v7 = *a2 - *(float *)(a1 + 580);
  v8 = a2[1] - *(float *)(a1 + 584);
  v9 = a2[2] - *(float *)(a1 + 588);
  off_10689714();
  v4 = v7 * v6[0] + v6[1] * v8 + v6[2] * v9;
  if ( a4 )
    *a4 = v4;
  return v4 >= a3;
}
