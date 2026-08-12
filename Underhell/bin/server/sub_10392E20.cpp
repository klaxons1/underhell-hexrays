bool __thiscall sub_10392E20(int this, int a2)
{
  int v3; // ecx
  char v4; // al
  double v5; // st4
  double v6; // st7
  double v7; // st4
  double v8; // st5
  float v10; // [esp+0h] [ebp-Ch]
  float v11; // [esp+14h] [ebp+8h]

  v3 = *(_DWORD *)(this + 3624);
  if ( v3 )
    v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 160))(v3, a2);
  else
    v4 = sub_10027D40((_DWORD *)this, a2);
  if ( !v4 || !sub_100CF460((_DWORD *)this) )
    return 0;
  if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    sub_100DAE60(a2);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v5 = *(float *)(this + 580) - *(float *)(a2 + 580);
  v6 = v5 * v5;
  v7 = *(float *)(this + 584) - *(float *)(a2 + 584);
  v8 = *(float *)(this + 588) - *(float *)(a2 + 588);
  v10 = v8 * v8 + v7 * v7 + v6;
  v11 = off_10689708(v10);
  return *(float *)(sub_100CF460((_DWORD *)this) + 1220) >= (double)v11;
}
