bool __thiscall sub_1039F610(int this, int a2)
{
  double v3; // st4
  double v4; // st7
  double v5; // st4
  double v6; // st5
  int v7; // eax
  int *v8; // edi
  int v9; // edx
  int v10; // eax
  int v11; // eax
  double v12; // st7
  bool v13; // c0
  bool v14; // c3
  int v16; // eax
  double v17; // st7
  float v18; // [esp+0h] [ebp-Ch]

  if ( !a2 )
    return sub_10027D40((_DWORD *)this, a2);
  if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    sub_100DAE60(a2);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v3 = *(float *)(this + 580) - *(float *)(a2 + 580);
  v4 = v3 * v3;
  v5 = *(float *)(this + 584) - *(float *)(a2 + 584);
  v6 = *(float *)(this + 588) - *(float *)(a2 + 588);
  v18 = v6 * v6 + v5 * v5 + v4;
  if ( off_10689708(v18) < *(float *)(this + 3772) )
  {
    if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 1080))(this, a2) == 2 || *(_BYTE *)(a2 + 306) == 4 )
      return 0;
    return sub_10027D40((_DWORD *)this, a2);
  }
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 288))(a2);
  v8 = (int *)v7;
  if ( !v7 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 1088))(v7) )
    return 0;
  v9 = *v8;
  if ( *(_BYTE *)(this + 3825) )
  {
    v10 = (*(int (__thiscall **)(int *))(v9 + 1092))(v8);
    v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 32))(v10);
    v12 = sub_1039E910(this, v11);
    v13 = v12 < 0.9396926207859;
    v14 = v12 == 0.9396926207859;
  }
  else
  {
    v16 = (*(int (__thiscall **)(int *))(v9 + 1096))(v8);
    v17 = sub_1039E910(this, v16);
    v13 = v17 < 0.0;
    v14 = v17 == 0.0;
  }
  return !v13 && !v14;
}
