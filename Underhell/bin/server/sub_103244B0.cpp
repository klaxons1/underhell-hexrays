unsigned int __thiscall sub_103244B0(int this, char a2)
{
  int v3; // eax
  int v4; // ecx
  _DWORD *v5; // eax
  int v6; // esi
  unsigned int *v7; // ebx
  unsigned int v8; // eax
  int *v9; // ecx
  unsigned int v10; // eax
  int v11; // ebx
  double v12; // st7
  unsigned int v13; // eax
  float *v14; // ebx
  float *v15; // eax
  int v16; // ecx
  int *v17; // ecx
  unsigned int result; // eax
  int *v19; // ecx
  int v20; // ecx
  int v21; // esi
  float *v22; // eax
  unsigned int v23; // eax
  int v24; // ecx
  unsigned int v25; // eax
  int v26; // eax
  int v27; // edx
  unsigned int v28; // edi
  int v29; // ecx
  __int64 v30; // [esp+4h] [ebp-44h]
  float v31; // [esp+1Ch] [ebp-2Ch] BYREF
  float v32; // [esp+20h] [ebp-28h]
  float v33; // [esp+24h] [ebp-24h]
  float v34[3]; // [esp+28h] [ebp-20h] BYREF
  float v35; // [esp+34h] [ebp-14h]
  float v36; // [esp+38h] [ebp-10h]
  float v37; // [esp+3Ch] [ebp-Ch]
  unsigned int *v38; // [esp+40h] [ebp-8h]
  int v39; // [esp+44h] [ebp-4h] BYREF

  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
  v4 = -1;
  v39 = -1;
  if ( v3 )
    v4 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
  v39 = v4;
  sub_1010C270((float *)(this + 3644), 13, (__int16 *)&v39);
  HIDWORD(v30) = this;
  LODWORD(v30) = this;
  sub_1010DA50(
    (_DWORD *)(this + 3644),
    *(_DWORD *)(this + 3644),
    *(_DWORD *)(this + 3648),
    *(_DWORD *)(this + 3652),
    *(_DWORD *)(this + 3656),
    *(_DWORD *)(this + 3660),
    v30,
    0.0);
  v5 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
  v6 = (int)v5;
  if ( v5 )
  {
    sub_101DAB00((_DWORD *)this, v5);
    v7 = (unsigned int *)sub_10021B90((void *)this);
    v38 = v7;
    if ( v7 )
    {
      if ( dword_106E50AC > 0 )
        (*(void (__thiscall **)(unsigned int *, int, _DWORD, int))(*v7 + 896))(v7, dword_106E50AC, 0, this);
      v7[63] &= ~0x100000u;
      v8 = *(_DWORD *)(this + 3740);
      if ( v8 != -1 )
      {
        v9 = &off_1061BE18[4 * (*(_DWORD *)(this + 3740) & 0xFFF) + 1];
        v10 = v8 >> 12;
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 3740) & 0xFFF) + 2] == v10 )
        {
          if ( *v9 )
          {
            if ( off_1061BE18[4 * (*(_DWORD *)(this + 3740) & 0xFFF) + 2] == v10 )
              v11 = *v9;
            else
              v11 = 0;
            if ( (*(_DWORD *)(v11 + 252) & 0x800) != 0 )
              sub_100DAE60(v11);
            v12 = *(float *)(v11 + 708);
            v13 = *(_DWORD *)(this + 3740);
            v31 = 0.0;
            v33 = 0.0;
            v32 = v12;
            if ( v13 == -1 || off_1061BE18[4 * (v13 & 0xFFF) + 2] != v13 >> 12 )
              v39 = 0;
            else
              v39 = off_1061BE18[4 * (v13 & 0xFFF) + 1];
            v14 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 576))(v6);
            v15 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v39 + 576))(v39);
            v16 = *(_DWORD *)(v6 + 252) >> 11;
            v35 = *v15 - *v14;
            v36 = v15[1] - v14[1];
            v37 = v15[2] - v14[2];
            if ( (v16 & 1) != 0 )
              sub_100DAE60(v6);
            v34[0] = *(float *)(v6 + 580) + v35;
            v34[1] = *(float *)(v6 + 584) + v36;
            v34[2] = *(float *)(v6 + 588) + v37;
            sub_100E0D20(v6, v34);
            sub_100E0EA0((int)v38, &v31);
            v7 = v38;
          }
        }
      }
      sub_101C73D0(v7, 0);
    }
    else if ( sub_10321B90((_DWORD *)this) )
    {
      *(_DWORD *)(v6 + 252) &= ~0x100000u;
    }
  }
  sub_10324210((_DWORD *)this, this, a2);
  *(_WORD *)(this + 3676) = 0;
  *(_BYTE *)(this + 9957) = 0;
  sub_100285C0((_DWORD *)this, 0, 1);
  if ( *(_BYTE *)(this + 84) )
  {
    *(_BYTE *)(this + 88) |= 1u;
  }
  else
  {
    v17 = *(int **)(this + 24);
    if ( v17 )
      sub_100194B0(v17, 3720);
  }
  *(float *)(this + 3728) = 0.0;
  *(float *)(this + 3724) = 0.0;
  *(float *)(this + 3720) = 0.0;
  result = *(_DWORD *)(this + 3736);
  if ( result != -1 )
  {
    v19 = &off_1061BE18[4 * (*(_DWORD *)(this + 3736) & 0xFFF) + 1];
    result >>= 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 3736) & 0xFFF) + 2] == result )
    {
      if ( *v19 )
      {
        v20 = off_1061BE18[4 * (*(_DWORD *)(this + 3736) & 0xFFF) + 2] == result ? *v19 : 0;
        v21 = *(_DWORD *)(v20 + 424);
        if ( v21 )
        {
          result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v21 + 280))(*(_DWORD *)(v20 + 424));
          if ( result )
          {
            v22 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 576))(this);
            v31 = *v22;
            v32 = v22[1];
            v33 = v22[2];
            v23 = *(_DWORD *)(this + 3736);
            if ( v23 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3736) & 0xFFF) + 2] != v23 >> 12 )
              v24 = 0;
            else
              v24 = off_1061BE18[4 * (*(_DWORD *)(this + 3736) & 0xFFF) + 1];
            (*(void (__thiscall **)(int, float *, _DWORD, float *))(*(_DWORD *)v24 + 416))(v24, &v31, 0, &flt_106F1CA8);
            v25 = *(_DWORD *)(this + 3736);
            if ( v25 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3736) & 0xFFF) + 2] != v25 >> 12 )
              v26 = 0;
            else
              v26 = off_1061BE18[4 * (*(_DWORD *)(this + 3736) & 0xFFF) + 1];
            (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v26 + 1120) + 8))(7000.0);
            (*(void (__thiscall **)(int))(*(_DWORD *)v21 + 284))(v21);
            v28 = *(_DWORD *)(this + 3736);
            if ( v28 == -1 || off_1061BE18[4 * (v28 & 0xFFF) + 2] != v28 >> 12 )
              v29 = 0;
            else
              v29 = off_1061BE18[4 * (v28 & 0xFFF) + 1];
            sub_100E0970(v29, v27, 6, 0);
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v21 + 60))(v21, 1);
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v21 + 52))(v21, 1);
            return (*(int (__thiscall **)(int))(*(_DWORD *)v21 + 104))(v21);
          }
        }
      }
    }
  }
  return result;
}
