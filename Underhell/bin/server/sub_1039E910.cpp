double __thiscall sub_1039E910(int this, int a2)
{
  float v5[3]; // [esp+8h] [ebp-18h] BYREF
  float v6; // [esp+14h] [ebp-Ch]
  float v7; // [esp+18h] [ebp-8h]
  float v8; // [esp+1Ch] [ebp-4h]
  float v9; // [esp+28h] [ebp+8h]

  (*(void (__thiscall **)(int, float *))(*(_DWORD *)a2 + 536))(a2, v5);
  v9 = off_10689714();
  if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    sub_100DAE60(a2);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v6 = *(float *)(this + 580) - *(float *)(a2 + 580);
  v7 = *(float *)(this + 584) - *(float *)(a2 + 584);
  v8 = *(float *)(this + 588) - *(float *)(a2 + 588);
  off_10689714();
  if ( v9 >= 10.0 )
    return v6 * v5[0] + v5[1] * v7 + v5[2] * v8;
  else
    return 0.1;
}
