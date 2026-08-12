int __thiscall sub_103C8AD0(int this, int a2)
{
  int result; // eax
  int v4; // ebx
  double v5; // st4
  double v6; // st6
  double v7; // st4
  double v8; // st5
  double v9; // st6

  if ( !a2 )
    return 4;
  v4 = sub_103971C0((_DWORD *)this, (_DWORD *)a2);
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 220))(a2) != 19 || v4 != 1 )
    return v4;
  if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    sub_100DAE60(a2);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v5 = *(float *)(this + 584) - *(float *)(a2 + 584);
  v6 = v5 * v5;
  v7 = *(float *)(this + 580) - *(float *)(a2 + 580);
  v8 = v6;
  v9 = *(float *)(this + 588) - *(float *)(a2 + 588);
  result = 2;
  if ( v7 * v7 + v8 + v9 * v9 >= 3600.0 )
    return v4;
  return result;
}
