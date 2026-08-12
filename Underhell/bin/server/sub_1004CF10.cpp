bool __thiscall sub_1004CF10(int this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // edx
  int v6; // eax
  _DWORD *v7; // edi
  _DWORD *v8; // eax
  float *v9; // esi
  float *v10; // eax
  double v11; // st7
  float v13; // [esp+8h] [ebp-Ch]
  float v14; // [esp+Ch] [ebp-8h]
  float v15; // [esp+10h] [ebp-4h]

  v2 = *(_DWORD *)(this + 20);
  if ( v2 == -1 )
    return 0;
  v3 = &off_1061BE18[4 * (v2 & 0xFFF) + 1];
  v4 = v2 >> 12;
  if ( v3[1] != v4 )
    return 0;
  v5 = *v3;
  if ( !*v3 )
    return 0;
  if ( v3[1] != v4 )
    v5 = 0;
  if ( !*(_BYTE *)(v5 + 837) )
    return 0;
  v6 = v3[1] == v4 ? *v3 : 0;
  if ( 0.0 != *(float *)(v6 + 840) )
  {
    if ( !*(_BYTE *)(this + 37) )
      return 0;
    if ( !(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 368))(*(_DWORD *)(this + 4)) )
      return 0;
    v7 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 368))(*(_DWORD *)(this + 4));
    v8 = (_DWORD *)sub_1026A890(this + 20);
    v9 = (float *)sub_10019640(v8);
    v10 = (float *)sub_10019640(v7);
    v13 = *v10 - *v9;
    v14 = v10[1] - v9[1];
    v15 = v10[2] - v9[2];
    v11 = *(float *)(sub_1026A890(this + 20) + 840);
    if ( v14 * v14 + v13 * v13 + v15 * v15 > v11 * v11 )
      return 0;
  }
  return 0.0 != *(float *)(this + 40) && *(float *)(dword_106B31C8 + 12) - *(float *)(this + 40) < 4.0;
}
