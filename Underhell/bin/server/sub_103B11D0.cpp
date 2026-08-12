char __thiscall sub_103B11D0(int this, _DWORD *a2)
{
  float *v3; // ebx
  int v4; // edi
  double v5; // st6
  double v6; // st5
  char v7; // al
  float v9; // [esp+0h] [ebp-14h]
  float v10; // [esp+10h] [ebp-4h]

  v3 = **(float ***)(this + 36);
  v4 = *(_DWORD *)(this + 4);
  if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
    sub_100DAE60(v4);
  v5 = v3[1] - *(float *)(v4 + 584);
  v6 = *v3 - *(float *)(v4 + 580);
  v9 = v6 * v6 + v5 * v5;
  v10 = off_10689708(v9);
  v7 = sub_1007E020((_DWORD *)this);
  if ( v10 > 10.0 )
    return 0;
  if ( v7 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 48))(this);
    *a2 = 0;
  }
  else
  {
    sub_100820C0(this);
    *a2 = 1;
  }
  return 1;
}
