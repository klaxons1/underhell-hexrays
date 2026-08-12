char __thiscall sub_1013DAA0(int this, int a2, int a3)
{
  double v6; // st7
  double v7; // st6
  double v8; // st5
  double v9; // st7
  double v10; // st6
  double v11; // st6
  double v12; // st5
  char v13; // cl
  bool v14; // [esp+Fh] [ebp+Bh]

  if ( *(float *)(this + 856) <= 0.0 )
    return 1;
  v14 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 368))(a2) == a3;
  if ( (*(_DWORD *)(a3 + 252) & 0x800) != 0 )
    sub_100DAE60(a3);
  if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    sub_100DAE60(a2);
  v6 = *(float *)(a2 + 580) - *(float *)(a3 + 580);
  v7 = *(float *)(a2 + 584) - *(float *)(a3 + 584);
  v8 = *(float *)(a2 + 588) - *(float *)(a3 + 588);
  v9 = v8 * v8 + v7 * v7 + v6 * v6;
  v10 = *(float *)(this + 860);
  if ( 0.0 == v10 )
  {
    v11 = *(float *)(this + 856);
    if ( *(_BYTE *)(this + 800) )
      v10 = v11 * 0.5;
    else
      v10 = v11 + v11;
  }
  v12 = *(float *)(this + 856);
  if ( v12 > v10 )
  {
    v12 = v10;
    v10 = *(float *)(this + 856);
  }
  v13 = *(_BYTE *)(this + 800);
  if ( !v14 )
  {
    if ( v13 )
      goto LABEL_18;
    goto LABEL_17;
  }
  if ( v13 )
LABEL_17:
    v10 = v12;
LABEL_18:
  if ( v10 * v10 < v9 )
    return v13 != 0;
  else
    return v13 == 0;
}
