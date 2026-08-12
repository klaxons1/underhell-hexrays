char __thiscall sub_100B8490(int this)
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
  int *v11; // edx
  int v12; // edi
  unsigned int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  unsigned int v18; // eax
  int v19; // ecx
  unsigned int v20; // eax
  int v21; // edi
  unsigned int v22; // eax
  int v23; // ecx
  unsigned int v24; // eax
  int v25; // edi
  unsigned int v26; // eax
  int v27; // ecx
  int v28; // eax
  int v29; // eax
  _DWORD *v30; // edi
  unsigned int v31; // eax
  int v32; // edi
  unsigned int v33; // eax
  int v34; // edi
  double v35; // st7
  int v37; // [esp+14h] [ebp-1Ch]
  float v38[3]; // [esp+20h] [ebp-10h] BYREF
  float *v39; // [esp+2Ch] [ebp-4h]

  v2 = *(_DWORD *)(this + 3644);
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 1], v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = *v3;
  if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
    sub_100DAE60(v4);
  v5 = (float *)(v4 + 580);
  v39 = v5;
  if ( sub_100B6940(this, v38) < 1.0 )
  {
    v6 = v38[2] - v5[2];
    v7 = v38[1] - v5[1];
    v8 = v7 * v7;
    v9 = v38[0] - *v5;
    if ( *(float *)(this + 3704) * *(float *)(this + 3704) < v9 * v9 + v8 + v6 * v6 )
      goto LABEL_80;
  }
  if ( *(_BYTE *)(this + 3695) )
    *(_BYTE *)(this + 3692) = 0;
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
    v12 = v37;
    (*(void (__thiscall **)(int, const char *, int, int, _DWORD))(*(_DWORD *)v16 + 148))(v16, "InPass", this, this, 0);
    *(_DWORD *)(this + 3652) = *(_DWORD *)(this + 3644);
    v11 = off_1061BE18;
  }
  v17 = *(_DWORD *)(this + 3776);
  if ( v17 != 1 )
  {
    if ( v17 == 2 )
    {
      v18 = *(_DWORD *)(this + 3644);
      if ( v18 == -1 || v11[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 2] != v18 >> 12 )
        v19 = 0;
      else
        v19 = v11[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 1];
      LOBYTE(v17) = sub_100B5650(this, v12, v19);
      if ( (_BYTE)v17 )
      {
        *(_DWORD *)(this + 3776) = 1;
        return v17;
      }
      v11 = off_1061BE18;
    }
    v20 = *(_DWORD *)(this + 3648);
    if ( v20 == -1 || v11[4 * (*(_DWORD *)(this + 3648) & 0xFFF) + 2] != v20 >> 12 )
      v21 = 0;
    else
      v21 = v11[4 * (*(_DWORD *)(this + 3648) & 0xFFF) + 1];
    v22 = *(_DWORD *)(this + 3644);
    if ( v22 == -1 || v11[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 2] != v22 >> 12 )
      v23 = 0;
    else
      v23 = v11[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 1];
    if ( v23 == v21 )
    {
      *(_BYTE *)(this + 3692) = 0;
      sub_100B75E0(this);
      v11 = off_1061BE18;
    }
    v24 = *(_DWORD *)(this + 3648);
    if ( v24 == -1 || v11[4 * (*(_DWORD *)(this + 3648) & 0xFFF) + 2] != v24 >> 12 )
      v25 = 0;
    else
      v25 = v11[4 * (*(_DWORD *)(this + 3648) & 0xFFF) + 1];
    v26 = *(_DWORD *)(this + 3644);
    if ( v26 == -1 || v11[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 2] != *(_DWORD *)(this + 3644) >> 12 )
      v27 = 0;
    else
      v27 = v11[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 1];
    if ( v27 == v25 )
    {
      *(_BYTE *)(this + 3732) = 1;
    }
    else
    {
      if ( v26 == -1 || v11[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 2] != v26 >> 12 )
        v28 = 0;
      else
        v28 = v11[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 1];
      v29 = sub_100B5050((_BYTE *)this, v28);
      v30 = (_DWORD *)(this + 3644);
      if ( v29 )
        *(_DWORD *)(this + 3644) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v29 + 8))(v29);
      else
        *(_DWORD *)(this + 3644) = -1;
      if ( (unsigned __int8)sub_102DC130(v30) )
        *v30 = *(_DWORD *)(this + 3652);
    }
    v31 = *(_DWORD *)(this + 3644);
    if ( v31 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 2] != v31 >> 12 )
      v32 = 0;
    else
      v32 = off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 1];
    if ( (*(_DWORD *)(v32 + 252) & 0x800) != 0 )
      sub_100DAE60(v32);
    *(float *)(this + 3620) = *(float *)(v32 + 580);
    *(float *)(this + 3624) = *(float *)(v32 + 584);
    *(float *)(this + 3628) = *(float *)(v32 + 588);
    *(float *)(this + 3720) = *(float *)(this + 3708);
    *(float *)(this + 3724) = *(float *)(this + 3712);
    *(float *)(this + 3728) = *(float *)(this + 3716);
    v33 = *(_DWORD *)(this + 3652);
    if ( v33 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3652) & 0xFFF) + 2] != v33 >> 12 )
      v34 = 0;
    else
      v34 = off_1061BE18[4 * (*(_DWORD *)(this + 3652) & 0xFFF) + 1];
    if ( (*(_DWORD *)(v34 + 252) & 0x800) != 0 )
      sub_100DAE60(v34);
    *(float *)(this + 3708) = *(float *)(v34 + 580);
    *(float *)(this + 3712) = *(float *)(v34 + 584);
    v35 = *(float *)(v34 + 588);
    v5 = v39;
    *(float *)(this + 3716) = v35;
LABEL_80:
    LOBYTE(v17) = (unsigned __int8)sub_100B5FA0((_DWORD *)this, (int)v38, (int)v5);
  }
  return v17;
}
