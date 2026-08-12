bool __thiscall sub_10364E60(int this)
{
  int v3; // edi
  double v4; // st4
  double v5; // st6
  double v6; // st4
  double v7; // st5
  double v8; // st6
  double v9; // st7

  if ( (unsigned __int8)sub_100254E0((_DWORD *)this) )
    return 1;
  if ( *(int *)(dword_106B31C8 + 20) > 1 )
    return 0;
  v3 = sub_10261B20();
  if ( !v3 || (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 1080))(this, v3) != 1 )
    return 0;
  if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
    sub_100DAE60(v3);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v4 = *(float *)(this + 584) - *(float *)(v3 + 584);
  v5 = v4 * v4;
  v6 = *(float *)(this + 580) - *(float *)(v3 + 580);
  v7 = v5;
  v8 = *(float *)(this + 588) - *(float *)(v3 + 588);
  v9 = v6 * v6 + v7 + v8 * v8;
  if ( 0.0 != *(float *)(this + 3628) && *(float *)(this + 3628) * *(float *)(this + 3628) < v9 )
    return 0;
  if ( (*(_DWORD *)(this + 248) & 0x10000) == 0 )
    return 1;
  return v9 <= 360000.0;
}
