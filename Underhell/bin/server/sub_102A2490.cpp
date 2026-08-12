char __thiscall sub_102A2490(int this, int a2)
{
  int v3; // edi
  double v4; // st4
  double v5; // st7
  double v6; // st4
  double v7; // st5

  v3 = *(_DWORD *)(this + 4);
  if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
    sub_100DAE60(*(_DWORD *)(this + 4));
  if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    sub_100DAE60(a2);
  v4 = *(float *)(a2 + 580) - *(float *)(v3 + 580);
  v5 = v4 * v4;
  v6 = *(float *)(a2 + 584) - *(float *)(v3 + 584);
  v7 = *(float *)(a2 + 588) - *(float *)(v3 + 588);
  if ( v7 * v7 + v6 * v6 + v5 <= 230400.0 || (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 220))(a2) == 6 )
    return sub_1004B590((_DWORD **)this);
  else
    return 0;
}
