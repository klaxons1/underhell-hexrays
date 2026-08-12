int __thiscall sub_100ABAF0(int this, int a2)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // edx
  double v6; // st7
  int v7; // edi
  int v8; // ebx
  int v9; // ecx
  int v10; // ebx
  double v11; // st4
  double v12; // st6
  double v13; // st4
  double v14; // st5
  double v15; // st6
  int v16; // ebx
  int v18; // eax
  int v19; // ebx
  _DWORD *v20; // edx
  int v21; // ecx
  int v22; // ecx
  unsigned int v23; // eax
  int v24; // edi
  double v25; // st4
  double v26; // st6
  double v27; // st4
  double v28; // st5
  double v29; // st6
  unsigned int v30; // eax
  int v31; // edi
  int v32; // ecx
  float v33; // [esp+8h] [ebp-10h]
  float *v34; // [esp+Ch] [ebp-Ch]
  int v35; // [esp+10h] [ebp-8h]
  char v36; // [esp+17h] [ebp-1h]
  int v37; // [esp+20h] [ebp+8h]
  int v38; // [esp+20h] [ebp+8h]

  v3 = *(_DWORD *)(this + 4);
  v36 = 0;
  v34 = (float *)v3;
  v33 = (float)(a2 * a2);
  if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
    sub_100DAE60(v3);
  v4 = *(_DWORD *)(this + 4);
  v5 = *(_DWORD *)(v4 + 2340);
  if ( v5 >= 2 )
    v6 = 0.34999999;
  else
    v6 = 0.25;
  if ( *(float *)(dword_106B31C8 + 12) - *(float *)(this + 100) <= v6 )
  {
LABEL_24:
    v18 = *(_DWORD *)(this + 56) - 1;
    v38 = v18;
    if ( v18 < 0 )
      return *(_DWORD *)(this + 56);
    while ( 1 )
    {
      v19 = 4 * v18;
      v20 = (_DWORD *)(4 * v18 + *(_DWORD *)(this + 44));
      if ( *v20 != -1 && off_1061BE18[4 * (*v20 & 0xFFF) + 2] == *v20 >> 12 && off_1061BE18[4 * (*v20 & 0xFFF) + 1] )
        break;
      v21 = *(_DWORD *)(this + 56);
      if ( v21 > 0 )
      {
        *(_DWORD *)(*(_DWORD *)(this + 44) + 4 * v18) = *(_DWORD *)(*(_DWORD *)(this + 44) + 4 * v21 - 4);
LABEL_53:
        --*(_DWORD *)(this + 56);
      }
LABEL_54:
      v18 = --v38;
      if ( v38 < 0 )
        return *(_DWORD *)(this + 56);
    }
    if ( !v36 )
      goto LABEL_54;
    v22 = *v20 == -1 || off_1061BE18[4 * (*v20 & 0xFFF) + 2] != *v20 >> 12 ? 0 : off_1061BE18[4 * (*v20 & 0xFFF) + 1];
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v22 + 1448))(v22) )
      goto LABEL_58;
    v23 = *(_DWORD *)(*(_DWORD *)(this + 44) + v19);
    if ( v23 == -1 || off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 44) + v19) & 0xFFF) + 2] != v23 >> 12 )
      v24 = 0;
    else
      v24 = off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 44) + v19) & 0xFFF) + 1];
    if ( (*(_DWORD *)(v24 + 252) & 0x800) != 0 )
      sub_100DAE60(v24);
    v25 = v34[146] - *(float *)(v24 + 584);
    v26 = v25 * v25;
    v27 = v34[145] - *(float *)(v24 + 580);
    v28 = v26;
    v29 = v34[147] - *(float *)(v24 + 588);
    if ( v27 * v27 + v28 + v29 * v29 <= v33 )
    {
LABEL_58:
      v30 = *(_DWORD *)(*(_DWORD *)(this + 44) + v19);
      if ( v30 == -1 || off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 44) + v19) & 0xFFF) + 2] != v30 >> 12 )
        v31 = 0;
      else
        v31 = off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 44) + v19) & 0xFFF) + 1];
      if ( !sub_100AB3A0((_DWORD *)this, v31)
        && sub_100AB070((_DWORD *)this, v31)
        && sub_100AAC30((_DWORD **)this, v31)
        && sub_100AAC80((_DWORD **)this, v31) )
      {
        goto LABEL_54;
      }
    }
    v32 = *(_DWORD *)(this + 56);
    if ( v32 <= 0 )
      goto LABEL_54;
    *(_DWORD *)(*(_DWORD *)(this + 44) + v19) = *(_DWORD *)(*(_DWORD *)(this + 44) + 4 * v32 - 4);
    goto LABEL_53;
  }
  *(float *)(this + 100) = *(float *)(dword_106B31C8 + 12);
  if ( v5 >= 3 )
  {
    v36 = 1;
    goto LABEL_24;
  }
  v7 = 0;
  *(_DWORD *)(v4 + 208) = 0;
  v37 = 0;
  v8 = sub_1002A680(&dword_10690DF8);
  v35 = v8;
  if ( sub_1016BFB0(&dword_10690DF8) > 0 )
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)(v8 + 4 * v7);
      if ( v9 != *(_DWORD *)(this + 4) )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 1448))(v9) )
          goto LABEL_16;
        v10 = *(_DWORD *)(v8 + 4 * v7);
        if ( (*(_DWORD *)(v10 + 252) & 0x800) != 0 )
          sub_100DAE60(v10);
        v11 = v34[146] - *(float *)(v10 + 584);
        v12 = v11 * v11;
        v13 = v34[145] - *(float *)(v10 + 580);
        v14 = v12;
        v15 = v34[147] - *(float *)(v10 + 588);
        if ( v13 * v13 + v14 + v15 * v15 < v33 )
        {
LABEL_16:
          v16 = *(_DWORD *)(v35 + 4 * v7);
          if ( !sub_100AB3A0((_DWORD *)this, v16)
            && sub_100AB070((_DWORD *)this, v16)
            && sub_100AAC30((_DWORD **)this, v16) )
          {
            if ( sub_100AAC80((_DWORD **)this, v16) )
              ++v37;
          }
        }
      }
      if ( ++v7 >= sub_1016BFB0(&dword_10690DF8) )
        break;
      v8 = v35;
    }
  }
  sub_100AB8B0((_DWORD *)this, v37, (_DWORD *)(this + 44));
  return v37;
}
