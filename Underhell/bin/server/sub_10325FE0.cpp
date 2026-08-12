bool __thiscall sub_10325FE0(int this, float a2)
{
  int v3; // edi
  unsigned int v4; // eax
  int v5; // ecx
  float v6; // edx
  float v7; // eax
  double v8; // st7
  bool v9; // c0
  double v10; // st7
  double v11; // st7
  int v12; // eax
  void *v13; // eax
  unsigned int v15; // eax
  _DWORD *v16; // ecx
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // esi
  int v20; // eax
  int v21; // ecx
  float v22; // [esp+4h] [ebp-54h]
  float v23; // [esp+4h] [ebp-54h]
  _BYTE v24[12]; // [esp+10h] [ebp-48h] BYREF
  _BYTE v25[12]; // [esp+1Ch] [ebp-3Ch] BYREF
  float v26; // [esp+28h] [ebp-30h] BYREF
  float v27; // [esp+2Ch] [ebp-2Ch]
  float v28; // [esp+30h] [ebp-28h]
  float v29[2]; // [esp+34h] [ebp-24h] BYREF
  float v30; // [esp+3Ch] [ebp-1Ch]
  float v31; // [esp+40h] [ebp-18h]
  float v32; // [esp+44h] [ebp-14h]
  float v33; // [esp+48h] [ebp-10h]
  float v34[2]; // [esp+4Ch] [ebp-Ch] BYREF
  float v35; // [esp+54h] [ebp-4h]

  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
  if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
    sub_100DAE60(v3);
  v34[0] = *(float *)(v3 + 580);
  v34[1] = *(float *)(v3 + 584);
  v35 = *(float *)(v3 + 588);
  v4 = *(_DWORD *)(this + 3740);
  if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3740) & 0xFFF) + 2] != v4 >> 12 )
    v5 = 0;
  else
    v5 = off_1061BE18[4 * (*(_DWORD *)(this + 3740) & 0xFFF) + 1];
  sub_100BEB30(v5, *(_DWORD *)(this + 3688), (int)v29, (int)v25);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1416))(this, 1);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v6 = *(float *)(this + 580);
  v7 = *(float *)(this + 584);
  v33 = *(float *)(this + 588);
  v8 = v33 - a2;
  v31 = v6;
  v32 = v7;
  if ( v6 - v29[0] > 4.0 || v32 - v29[1] > 4.0 )
  {
    if ( v8 - v35 < 72.0 )
      sub_10325740((int *)this);
    return 0;
  }
  else if ( v8 - v30 <= 4.0 )
  {
    v15 = *(_DWORD *)(this + 3740);
    if ( v15 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3740) & 0xFFF) + 2] != v15 >> 12 )
      v16 = 0;
    else
      v16 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(this + 3740) & 0xFFF) + 1];
    v17 = *sub_10001430(v16);
    v18 = *(_DWORD *)(v17 + 160) + 216 * *(_DWORD *)(this + 3688);
    v19 = *(_DWORD *)(this + 3740);
    v20 = *(_DWORD *)(v18 + v17 + 172);
    if ( v19 == -1 || off_1061BE18[4 * (v19 & 0xFFF) + 2] != v19 >> 12 )
      v21 = 0;
    else
      v21 = off_1061BE18[4 * (v19 & 0xFFF) + 1];
    (*(void (__thiscall **)(_DWORD, float *, _BYTE *))(**(_DWORD **)(v21 + 24 * v20 + 1156) + 204))(
      *(_DWORD *)(v21 + 24 * v20 + 1156),
      &v26,
      v24);
    return v27 * v27 + v26 * v26 + v28 * v28 < 20.0;
  }
  else
  {
    v9 = v30 < v8;
    v10 = *(float *)(this + 3668);
    if ( v9 )
    {
      v22 = v10 - 1.0;
      sub_10322D80(this, v22);
      v11 = v35 + 1.0;
    }
    else
    {
      v23 = v10 + 1.0;
      sub_10322D80(this, v23);
      v11 = v35 - 1.0;
    }
    v12 = *(_DWORD *)this;
    v35 = v11;
    v13 = (void *)(*(int (__thiscall **)(int))(v12 + 368))(this);
    sub_1025F370(v13, v34, 0);
    return 0;
  }
}
