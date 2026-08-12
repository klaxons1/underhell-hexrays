int __thiscall sub_103C8960(int this, int a2)
{
  int result; // eax
  int v5; // eax
  float *v6; // edi
  double v7; // st4
  double v8; // st6
  double v9; // st4
  double v10; // st5
  double v11; // st6
  int v12; // esi
  double v13; // st4
  double v14; // st6
  double v15; // st4
  double v16; // st5
  double v17; // st6
  int v18; // edi
  int v19; // eax
  int v20; // esi
  int v21; // [esp+10h] [ebp+8h]

  result = sub_100C9AF0((_DWORD *)this, a2);
  v21 = result;
  if ( a2 )
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
    v6 = (float *)v5;
    if ( !v5 || v5 == a2 )
      goto LABEL_25;
    if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
      sub_100DAE60(v5);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v7 = *(float *)(this + 584) - v6[146];
    v8 = v7 * v7;
    v9 = *(float *)(this + 580) - v6[145];
    v10 = v8;
    v11 = *(float *)(this + 588) - v6[147];
    if ( v9 * v9 + v10 + v11 * v11 >= 32400.0 )
    {
LABEL_25:
      if ( !sub_10050FC0((_DWORD *)(this + 4508)) )
        goto LABEL_17;
      if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
        sub_100DAE60(a2);
      v12 = sub_10050FC0((_DWORD *)(this + 4508));
      if ( (*(_DWORD *)(v12 + 252) & 0x800) != 0 )
        sub_100DAE60(v12);
      v13 = *(float *)(v12 + 584) - *(float *)(a2 + 584);
      v14 = v13 * v13;
      v15 = *(float *)(v12 + 580) - *(float *)(a2 + 580);
      v16 = v14;
      v17 = *(float *)(v12 + 588) - *(float *)(a2 + 588);
      if ( v15 * v15 + v16 + v17 * v17 < 90000.0 )
        v18 = v21 + 1;
      else
LABEL_17:
        v18 = v21;
      v19 = sub_100D7680(a2);
      v20 = v19;
      if ( v19
        && (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 220))(v19) == 4
        && *(_DWORD *)(v20 + 2372) == dword_106E296C )
      {
        --v18;
      }
      return v18;
    }
    else
    {
      return v21;
    }
  }
  return result;
}
