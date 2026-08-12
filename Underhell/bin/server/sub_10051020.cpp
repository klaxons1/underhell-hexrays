bool __thiscall sub_10051020(int this, float a2, float a3, char a4)
{
  float *v5; // eax
  double v6; // st7
  double v7; // st5
  double v8; // st4
  double v9; // st6
  double v10; // st5
  double v11; // st4
  double v12; // st3
  double v13; // st4
  bool result; // al
  int v15; // eax
  float v16; // [esp+4h] [ebp-Ch]
  float v17; // [esp+8h] [ebp-8h]
  float v18; // [esp+Ch] [ebp-4h]

  v5 = (float *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 576))(*(_DWORD *)(this + 4));
  v6 = a3;
  v18 = v5[2];
  v16 = *v5;
  v17 = v5[1];
  if ( -1.0 == a3 )
    v6 = sub_100737D0(*(_DWORD *)(*(_DWORD *)(this + 4) + 1676));
  v7 = *(float *)(this + 32) - v17;
  v8 = *(float *)(this + 28) - v16;
  v9 = v8 * v8 + v7 * v7;
  v10 = (a2 + 0.1) * (a2 + 0.1);
  v11 = v9 / (0.25 * v10);
  v12 = 1.0;
  if ( v11 <= 1.0 )
  {
    if ( v11 < 0.0 )
      v11 = 0.0;
    v12 = v11;
    v13 = 1.0;
  }
  else
  {
    v13 = 1.0;
  }
  result = 0;
  if ( fabs(v18 - *(float *)(this + 36)) <= v6 * (v13 + v12) && v9 <= v10 )
  {
    if ( (a4 & 2) == 0 )
      return 1;
    if ( *(_DWORD *)(this + 20) == -1 )
      return 1;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 2] != *(_DWORD *)(this + 20) >> 12 )
      return 1;
    if ( !off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 1] )
      return 1;
    v15 = sub_1026A890(this + 20);
    if ( (unsigned __int8)sub_100AB270(v15) )
      return 1;
  }
  return result;
}
