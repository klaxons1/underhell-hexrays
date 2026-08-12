void __thiscall sub_10360EC0(_DWORD *this)
{
  int v1; // edi
  bool v2; // bl
  int v3; // esi
  int v4; // eax
  int v5; // edx
  double v6; // st7
  int (__thiscall *v7)(int); // eax
  int v8; // eax
  float *v9; // ebx
  double v10; // st6
  double v11; // st7
  float *v12; // edi
  double v13; // st7
  double v14; // st6
  double v15; // st5
  int v16; // edi
  double v17; // st5
  int v18; // esi
  int *v19; // ebx
  int v20; // eax
  unsigned int v21; // ecx
  int *v22; // eax
  unsigned int v23; // ecx
  int v24; // eax
  float *v25; // esi
  int v26; // edx
  bool v27; // al
  bool v28; // zf
  int v29; // edi
  int i; // esi
  int v31; // eax
  unsigned int v32; // ecx
  int *v33; // eax
  unsigned int v34; // ecx
  int v35; // eax
  bool v36; // al
  char v37; // al
  char v38; // bl
  int *v39; // ecx
  int v40; // eax
  int v41; // [esp+Ch] [ebp-88h]
  float v42[3]; // [esp+20h] [ebp-74h] BYREF
  float v43[3]; // [esp+2Ch] [ebp-68h] BYREF
  float v44[3]; // [esp+38h] [ebp-5Ch] BYREF
  int v45[3]; // [esp+44h] [ebp-50h] BYREF
  int v46[3]; // [esp+50h] [ebp-44h] BYREF
  float v47[3]; // [esp+5Ch] [ebp-38h] BYREF
  float v48[3]; // [esp+68h] [ebp-2Ch] BYREF
  int v49; // [esp+74h] [ebp-20h] BYREF
  float v50; // [esp+78h] [ebp-1Ch]
  float v51; // [esp+7Ch] [ebp-18h]
  int v52; // [esp+80h] [ebp-14h] BYREF
  float v53; // [esp+84h] [ebp-10h]
  float v54; // [esp+88h] [ebp-Ch]
  _DWORD *v55; // [esp+8Ch] [ebp-8h]
  char v56; // [esp+92h] [ebp-2h]
  bool v57; // [esp+93h] [ebp-1h]

  v1 = (int)this;
  v41 = this[227];
  v55 = this;
  v56 = 0;
  v57 = 0;
  sub_100BE180((int)this, v41, v44);
  v2 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v1 + 296))(v1)
    || v44[0] != flt_106F1CA8
    || v44[1] != flt_106F1CAC
    || v44[2] != flt_106F1CB0;
  if ( (*(_BYTE *)(v1 + 3596) || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v1 + 1276))(v1) && v2)
    && *(int *)(dword_106B31C8 + 20) <= 1 )
  {
    v3 = sub_10261B20();
    if ( v3 )
    {
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)(v1 + 320) + 4))(v1 + 320);
      v5 = *(_DWORD *)(v1 + 320);
      v49 = *(int *)v4;
      v50 = *(float *)(v4 + 4);
      v6 = *(float *)(v4 + 8);
      v7 = *(int (__thiscall **)(int))(v5 + 8);
      v51 = v6;
      v8 = v7(v1 + 320);
      v52 = *(int *)v8;
      v53 = *(float *)(v8 + 4);
      v54 = *(float *)(v8 + 8);
      v9 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(v3 + 320) + 4))(v3 + 320);
      if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
        sub_100DAE60(v3);
      v10 = v9[1] + *(float *)(v3 + 584);
      v11 = v9[2] + *(float *)(v3 + 588);
      v47[0] = *(float *)(v3 + 580) + *v9;
      v47[1] = v10;
      v47[2] = v11;
      v12 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(v3 + 320) + 8))(v3 + 320);
      if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
        sub_100DAE60(v3);
      v13 = *v12 + *(float *)(v3 + 580);
      v14 = v12[1] + *(float *)(v3 + 584);
      v15 = v12[2];
      v16 = (int)v55;
      v17 = v15 + *(float *)(v3 + 588);
      v18 = 0;
      v19 = v55 + 1078;
      v48[0] = v13;
      v48[1] = v14;
      v48[2] = v17;
      if ( (int)v55[1078] > 0 )
      {
        while ( 1 )
        {
          v20 = sub_101BCB30(v19, v18);
          if ( v20 )
          {
            v21 = *(_DWORD *)(v20 + 4);
            if ( v21 != -1 )
            {
              v22 = &off_1061BE18[4 * (*(_DWORD *)(v20 + 4) & 0xFFF) + 1];
              v23 = v21 >> 12;
              if ( v22[1] == v23 )
              {
                if ( *v22 )
                {
                  v24 = v22[1] == v23 ? *v22 : 0;
                  (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)(v24 + 320) + 60))(v24 + 320, v45, v46);
                  if ( sub_101133F0((float *)v45, (float *)v46, v47, v48) )
                    break;
                }
              }
            }
          }
          if ( ++v18 >= *v19 )
            goto LABEL_28;
        }
        v56 = 1;
      }
LABEL_28:
      if ( (*(_DWORD *)(v16 + 252) & 0x800) != 0 )
        sub_100DAE60(v16);
      v25 = (float *)(v16 + 580);
      v26 = *(_DWORD *)(v16 + 252) >> 11;
      v43[0] = *(float *)(v16 + 580) + *(float *)&v52;
      v43[1] = v53 + *(float *)(v16 + 584);
      v43[2] = v54 + *(float *)(v16 + 588);
      if ( (v26 & 1) != 0 )
        sub_100DAE60(v16);
      v42[0] = *v25 + *(float *)&v49;
      v42[1] = v50 + *(float *)(v16 + 584);
      v42[2] = v51 + *(float *)(v16 + 588);
      v27 = sub_101133F0(v42, v43, v47, v48);
      v28 = *(_DWORD *)(dword_10690EF4 + 48) == 0;
      v57 = v27;
      if ( !v28 )
      {
        v29 = (unsigned __int8)(!v27 - 1);
        if ( (v55[63] & 0x800) != 0 )
          sub_100DAE60((int)v55);
        sub_1011BB20((int)v25, (int)&v49, (int)&v52, v29, 0, 255, 64, 0.1);
        for ( i = 0; i < *v19; ++i )
        {
          v31 = sub_101BCB30(v19, i);
          if ( v31 )
          {
            v32 = *(_DWORD *)(v31 + 4);
            if ( v32 != -1 )
            {
              v33 = &off_1061BE18[4 * (*(_DWORD *)(v31 + 4) & 0xFFF) + 1];
              v34 = v32 >> 12;
              if ( v33[1] == v34 )
              {
                if ( *v33 )
                {
                  if ( v33[1] == v34 )
                    v35 = *v33;
                  else
                    v35 = 0;
                  (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)(v35 + 320) + 60))(v35 + 320, v45, v46);
                  v36 = sub_101133F0((float *)v45, (float *)v46, v47, v48);
                  sub_1011BB20((int)&flt_106F1CA8, (int)v45, (int)v46, (unsigned __int8)-v36, 0, 255, 64, 0.1);
                }
              }
            }
          }
        }
      }
      v1 = (int)v55;
    }
  }
  v37 = (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 1276))(v1);
  v28 = !v57;
  *(_BYTE *)(v1 + 3616) = v37;
  v38 = !v28 || v56;
  if ( v38 != *(_BYTE *)(v1 + 3596) )
  {
    if ( *(_BYTE *)(v1 + 84) )
    {
      *(_BYTE *)(v1 + 88) |= 1u;
    }
    else
    {
      v39 = *(int **)(v1 + 24);
      if ( v39 )
        sub_100194B0(v39, 3596);
    }
    *(_BYTE *)(v1 + 3596) = v38;
  }
  v40 = *(_DWORD *)(v1 + 420);
  if ( v40 == 9 || v40 == 18 )
  {
    if ( v57 )
      sub_100EBE30(v1, 18);
    else
      sub_100EBE30(v1, 9);
    if ( v56 == 1 )
      sub_103602C0(v1, 18);
    else
      sub_103602C0(v1, 9);
  }
}
