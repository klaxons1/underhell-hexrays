float *__thiscall sub_1034B920(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // ecx
  float *v5; // eax
  float *v6; // esi
  float *result; // eax
  double v8; // st7
  float v9; // [esp+8h] [ebp-Ch]
  float v10; // [esp+Ch] [ebp-8h]
  float v11; // [esp+10h] [ebp-4h]

  v2 = *(_DWORD *)(this + 4020);
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 4020) & 0xFFF) + 1], v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = *v3;
  v5 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 576))(v4);
  v11 = v5[2];
  v9 = *v5;
  v10 = v5[1];
  if ( *(_DWORD *)(this + 4020) == -1
    || off_1061BE18[4 * (*(_DWORD *)(this + 4020) & 0xFFF) + 2] != *(_DWORD *)(this + 4020) >> 12 )
  {
    v6 = 0;
  }
  else
  {
    v6 = (float *)off_1061BE18[4 * (*(_DWORD *)(this + 4020) & 0xFFF) + 1];
  }
  result = (float *)sub_10022D70();
  *result = v6[85] - v6[82];
  result[1] = v6[86] - v6[83];
  v8 = v6[87] - v6[84];
  result[2] = v8;
  *(float *)(this + 3620) = v9;
  *(float *)(this + 3624) = v10;
  *(float *)(this + 3628) = v8 * 0.5 + v11;
  return result;
}
