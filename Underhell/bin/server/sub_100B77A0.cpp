int *__thiscall sub_100B77A0(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // edi
  float *v5; // edi
  double v6; // st5
  double v7; // st3
  double v8; // st6
  double v9; // st3
  unsigned int v10; // eax
  int *v11; // ebx
  int v12; // edx
  unsigned int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  unsigned int v17; // eax
  int v18; // edi
  int v19; // eax
  int v20; // eax
  unsigned int v21; // eax
  int v22; // ecx
  unsigned int v23; // eax
  int v24; // eax
  int v25; // eax
  unsigned int v26; // eax
  int v27; // ecx
  int v28; // ecx
  int v29; // eax
  int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // eax
  int v33; // edi
  int v34; // ecx
  int v35; // eax
  unsigned int v36; // eax
  bool v37; // zf
  double v38; // st7
  float v40[3]; // [esp+20h] [ebp-10h] BYREF
  float *v41; // [esp+2Ch] [ebp-4h]

  v2 = *(_DWORD *)(this + 3644);
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 1], v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = *v3;
  if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
    sub_100DAE60(v4);
  v5 = (float *)(v4 + 580);
  v41 = v5;
  if ( sub_100B6940(this, v40) >= 1.0
    || (v6 = v40[2] - v5[2],
        v7 = v40[1] - v5[1],
        v8 = v7 * v7,
        v9 = v40[0] - *v5,
        *(float *)(this + 3704) * *(float *)(this + 3704) >= v9 * v9 + v8 + v6 * v6) )
  {
    v10 = *(_DWORD *)(this + 3652);
    v11 = off_1061BE18;
    if ( v10 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3652) & 0xFFF) + 2] != v10 >> 12 )
      v12 = 0;
    else
      v12 = off_1061BE18[4 * (*(_DWORD *)(this + 3652) & 0xFFF) + 1];
    v13 = *(_DWORD *)(this + 3644);
    if ( v13 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 2] != *(_DWORD *)(this + 3644) >> 12 )
      v14 = 0;
    else
      v14 = off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 1];
    if ( v14 != v12 )
    {
      if ( v13 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 2] != v13 >> 12 )
        v15 = 0;
      else
        v15 = off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 1];
      *(float *)(this + 3740) = *(float *)(v15 + 108);
      if ( *(_DWORD *)(this + 3644) == -1
        || off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 2] != *(_DWORD *)(this + 3644) >> 12 )
      {
        v16 = 0;
      }
      else
      {
        v16 = off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 1];
      }
      (*(void (__thiscall **)(int, const char *, int, int, _DWORD))(*(_DWORD *)v16 + 148))(v16, "InPass", this, this, 0);
      *(_DWORD *)(this + 3652) = *(_DWORD *)(this + 3644);
      v11 = off_1061BE18;
    }
    v17 = *(_DWORD *)(this + 3648);
    if ( v17 == -1 || v11[4 * (*(_DWORD *)(this + 3648) & 0xFFF) + 2] != v17 >> 12 )
      v18 = 0;
    else
      v18 = v11[4 * (*(_DWORD *)(this + 3648) & 0xFFF) + 1];
    if ( !*(_BYTE *)(this + 3732) )
    {
      v19 = sub_101ACCC0(v18);
      if ( sub_101ACC70(v19, 1) )
      {
        v20 = sub_101ACCC0(v18);
        v18 = sub_101ACC70(v20, 1);
      }
      v11 = off_1061BE18;
    }
    v21 = *(_DWORD *)(this + 3644);
    if ( v21 == -1 || v11[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 2] != v21 >> 12 )
      v22 = 0;
    else
      v22 = v11[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 1];
    if ( v22 == v18 )
    {
      *(_BYTE *)(this + 3692) = 0;
      sub_100B75E0(this);
      v23 = *(_DWORD *)(this + 3648);
      v11 = off_1061BE18;
      if ( v23 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3648) & 0xFFF) + 2] != v23 >> 12 )
        v18 = 0;
      else
        v18 = off_1061BE18[4 * (*(_DWORD *)(this + 3648) & 0xFFF) + 1];
      if ( !*(_BYTE *)(this + 3732) )
      {
        v24 = sub_101ACCC0(v18);
        if ( sub_101ACC70(v24, 1) )
        {
          v25 = sub_101ACCC0(v18);
          v18 = sub_101ACC70(v25, 1);
        }
        v11 = off_1061BE18;
      }
    }
    v26 = *(_DWORD *)(this + 3644);
    if ( v26 == -1 || v11[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 2] != *(_DWORD *)(this + 3644) >> 12 )
      v27 = 0;
    else
      v27 = v11[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 1];
    if ( v27 != v18 )
    {
      if ( v26 == -1 || v11[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 2] != v26 >> 12 )
        v28 = 0;
      else
        v28 = v11[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 1];
      if ( *(_BYTE *)(this + 3732) )
        v29 = sub_101ACC90(v28);
      else
        v29 = sub_101ACCC0(v28);
      v30 = sub_101ACC70(v29, 1);
      if ( v30 )
        *(_DWORD *)(this + 3644) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v30 + 8))(v30);
      else
        *(_DWORD *)(this + 3644) = -1;
      v31 = *(_DWORD *)(this + 3644);
      if ( v31 == -1
        || off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 2] != v31 >> 12
        || !off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 1] )
      {
        *(_DWORD *)(this + 3644) = *(_DWORD *)(this + 3652);
      }
      v32 = *(_DWORD *)(this + 3652);
      if ( v32 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3652) & 0xFFF) + 2] != v32 >> 12 )
        v33 = 0;
      else
        v33 = off_1061BE18[4 * (*(_DWORD *)(this + 3652) & 0xFFF) + 1];
      v37 = (*(_DWORD *)(v33 + 252) & 0x800) == 0;
      goto LABEL_85;
    }
    if ( v26 == -1 || v11[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 2] != v26 >> 12 )
      v34 = 0;
    else
      v34 = v11[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 1];
    if ( *(_BYTE *)(this + 3732) )
      v35 = sub_101ACCC0(v34);
    else
      v35 = sub_101ACC90(v34);
    v33 = sub_101ACC70(v35, 1);
    if ( !v33 )
    {
      v36 = *(_DWORD *)(this + 3644);
      if ( v36 != -1 && off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 2] == v36 >> 12 )
      {
        v33 = off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 1];
        v37 = (*(_DWORD *)(v33 + 252) & 0x800) == 0;
LABEL_85:
        if ( !v37 )
          sub_100DAE60(v33);
        *(float *)(this + 3708) = *(float *)(v33 + 580);
        *(float *)(this + 3712) = *(float *)(v33 + 584);
        v38 = *(float *)(v33 + 588);
        v5 = v41;
        *(float *)(this + 3716) = v38;
        return sub_100B5FA0((_DWORD *)this, (int)v40, (int)v5);
      }
      v33 = 0;
    }
    v37 = (*(_DWORD *)(v33 + 252) & 0x800) == 0;
    goto LABEL_85;
  }
  return sub_100B5FA0((_DWORD *)this, (int)v40, (int)v5);
}
