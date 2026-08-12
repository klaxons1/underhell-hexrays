void __thiscall sub_102CC5B0(int this)
{
  void (__thiscall *v2)(_DWORD, _DWORD); // edx
  float v3; // edi
  float v4; // ebx
  double v5; // st7
  unsigned int v6; // eax
  int *v7; // ecx
  int (__thiscall *v8)(_DWORD, _DWORD); // edx
  float *v9; // eax
  int *v10; // eax
  int v11; // edi
  _DWORD *v12; // eax
  float *v13; // eax
  double v14; // st7
  unsigned int v15; // eax
  float v16; // ecx
  float v17; // edx
  int v18; // eax
  int v19; // ebx
  _DWORD *v20; // eax
  float *v21; // eax
  float *v22; // eax
  int v23; // ecx
  float *v24; // eax
  bool v25; // zf
  float *v26; // eax
  _DWORD *v27; // eax
  __int64 v28; // [esp+18h] [ebp-B4h]
  __int64 v29; // [esp+18h] [ebp-B4h]
  float v30; // [esp+20h] [ebp-ACh]
  _BYTE v31[44]; // [esp+30h] [ebp-9Ch] BYREF
  float v32; // [esp+5Ch] [ebp-70h]
  float v33; // [esp+7Ch] [ebp-50h]
  float v34[3]; // [esp+84h] [ebp-48h] BYREF
  float v35[3]; // [esp+90h] [ebp-3Ch] BYREF
  float v36; // [esp+9Ch] [ebp-30h] BYREF
  float v37; // [esp+A0h] [ebp-2Ch]
  float v38; // [esp+A4h] [ebp-28h]
  float v39; // [esp+A8h] [ebp-24h] BYREF
  float v40; // [esp+ACh] [ebp-20h] BYREF
  float v41; // [esp+B0h] [ebp-1Ch]
  float v42; // [esp+B4h] [ebp-18h]
  float v43; // [esp+B8h] [ebp-14h] BYREF
  float v44; // [esp+BCh] [ebp-10h]
  float v45; // [esp+C0h] [ebp-Ch]
  float v46; // [esp+C4h] [ebp-8h] BYREF
  char v47; // [esp+CBh] [ebp-1h]
  int savedregs; // [esp+CCh] [ebp+0h] BYREF

  v2 = *(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)this + 744);
  v3 = 0.0;
  v46 = 0.0;
  v47 = 0;
  v4 = 0.0;
  v2(this, &v36);
  if ( *(char *)(this + 248) < 0 )
  {
    v40 = *(float *)(this + 1080);
    v41 = *(float *)(this + 1084);
    v5 = *(float *)(this + 1088);
LABEL_10:
    v42 = v5;
    goto LABEL_11;
  }
  v6 = *(_DWORD *)(this + 808);
  if ( v6 == -1
    || (v7 = &off_1061BE18[4 * (*(_DWORD *)(this + 808) & 0xFFF) + 1],
        off_1061BE18[4 * (*(_DWORD *)(this + 808) & 0xFFF) + 2] != v6 >> 12)
    || (v3 = *(float *)v7, !*v7)
    || (*(_DWORD *)(LODWORD(v3) + 256) & 0x8000) != 0 )
  {
    if ( *(_DWORD *)(this + 1076) )
    {
      v27 = sub_102CA0E0(this, *(char **)(this + 1076), 0);
      if ( v27 )
        *(_DWORD *)(this + 808) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v27 + 8))(v27);
      else
        *(_DWORD *)(this + 808) = -1;
    }
    goto LABEL_58;
  }
  v8 = *(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(v3) + 504);
  v46 = *(float *)v7;
  v9 = (float *)v8(LODWORD(v3), v35);
  v40 = *v9;
  v41 = v9[1];
  v42 = v9[2];
  if ( (*(unsigned __int8 (__thiscall **)(float))(*(_DWORD *)LODWORD(v3) + 320))(COERCE_FLOAT(LODWORD(v3))) )
  {
    v10 = (int *)(*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v3) + 1096))(COERCE_FLOAT(LODWORD(v3)));
    v4 = *(float *)&v10;
    if ( v10 )
    {
      v11 = *v10;
      v12 = sub_10019640((_DWORD *)this);
      v13 = (float *)(*(int (__thiscall **)(float, float *, _DWORD *, _DWORD))(v11 + 520))(
                       COERCE_FLOAT(LODWORD(v4)),
                       v35,
                       v12,
                       0);
      v3 = v46;
      v40 = *v13;
      v41 = v13[1];
      v5 = v13[2];
      goto LABEL_10;
    }
  }
LABEL_11:
  v14 = (v40 - v36) * (v40 - v36) + (v41 - v37) * (v41 - v37) + (v42 - v38) * (v42 - v38);
  v39 = v14;
  if ( v14 >= *(float *)(this + 1008) && (*(float *)(this + 1012) <= 0.0 || v14 <= *(float *)(this + 1012)) )
  {
    v16 = *(float *)(this + 904);
    v17 = *(float *)(this + 908);
    v43 = *(float *)(this + 900);
    v18 = *(_DWORD *)(this + 248);
    v44 = v16;
    v45 = v17;
    if ( (v18 & 0x80u) != 0 )
    {
      v47 = 1;
      *(float *)(this + 900) = *(float *)(this + 1080);
      *(float *)(this + 904) = *(float *)(this + 1084);
      *(float *)(this + 908) = *(float *)(this + 1088);
LABEL_36:
      v43 = *(float *)(this + 900);
      v44 = *(float *)(this + 904);
      v45 = *(float *)(this + 908);
      goto LABEL_37;
    }
    if ( (v18 & 0x10) != 0 )
    {
      sub_10030570(this, &v36, &v40, this, (int)v31, 0);
      if ( 1.0 != v32 && LODWORD(v33) != LODWORD(v3) && (v4 == 0.0 || LODWORD(v33) != LODWORD(v4)) )
        goto LABEL_37;
      v14 = v39;
    }
    else
    {
      v33 = v3;
      v32 = 1.0;
    }
    v30 = v14;
    if ( sub_102C8EC0((float *)this, v30)
      && v3 != 0.0
      && (*(unsigned __int8 (__thiscall **)(float))(*(_DWORD *)LODWORD(v3) + 264))(COERCE_FLOAT(LODWORD(v3))) )
    {
      v47 = 1;
      if ( v4 != 0.0 )
        v3 = v4;
      sub_10019680((_DWORD *)(this + 912), SLODWORD(v3));
      v19 = *(_DWORD *)LODWORD(v3);
      v20 = sub_10019640((_DWORD *)this);
      v21 = (float *)(*(int (__thiscall **)(float, float *, _DWORD *, _DWORD))(v19 + 520))(
                       COERCE_FLOAT(LODWORD(v3)),
                       v35,
                       v20,
                       0);
      *(float *)(this + 900) = *v21;
      *(float *)(this + 904) = v21[1];
      *(float *)(this + 908) = v21[2];
      if ( !*(_BYTE *)(this + 1133) )
      {
        v3 = v46;
        goto LABEL_36;
      }
      sub_102C8F70((float *)this, &v36, SLODWORD(v3), &v43);
      v3 = v46;
    }
LABEL_37:
    sub_100D5C50((float *)(this + 836), v35, &v43);
    v22 = sub_102CAC30(this, v34, v35);
    v43 = *v22;
    v44 = v22[1];
    v45 = v22[2];
    if ( !sub_102CAD30(this, &v43, &v39, &v46) && v47 )
    {
      v23 = dword_106B31C8;
      if ( *(float *)(dword_106B31C8 + 12) - *(float *)(this + 984) >= 1.0
        && *(float *)(this + 924) < (double)*(float *)(dword_106B31C8 + 12) )
      {
        *(float *)(this + 924) = *(float *)(dword_106B31C8 + 12) + 0.5;
        v23 = dword_106B31C8;
      }
      *(float *)(this + 984) = *(float *)(v23 + 12);
      *(float *)(this + 996) = 0.0;
    }
    sub_100D8290((float *)this, 0.1);
    if ( sub_102C8CE0((float *)this)
      && (fabs(v39) <= *(float *)(this + 976) && fabs(v46) <= *(float *)(this + 956)
       || (*(_BYTE *)(this + 248) & 0x10) != 0) )
    {
      sub_10422220(this + 728, &v43);
      v24 = sub_102C8C70((float *)(this + 836), v34, &v43);
      v25 = (*(_BYTE *)(this + 248) & 0x10) == 0;
      v43 = *v24;
      v44 = v24[1];
      v45 = v24[2];
      if ( !v25 )
      {
        v26 = (float *)(*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v3) + 576))(COERCE_FLOAT(LODWORD(v3)));
        sub_1002A5F0((int)&savedregs, this, &v36, v26, 1174421507, this, 0, (int)v31);
        if ( 1.0 != v32 && (v33 == 0.0 || LODWORD(v33) != LODWORD(v3)) )
          goto LABEL_18;
      }
      if ( 0.0 == *(float *)(this + 800) )
      {
        HIDWORD(v28) = this;
        LODWORD(v28) = this;
        sub_1010DD80((_DWORD *)(this + 1200), v28, 0.0);
      }
      (*(void (__thiscall **)(int, float *, float *, int))(*(_DWORD *)this + 756))(this, &v36, &v43, this);
      return;
    }
LABEL_58:
    if ( 0.0 != *(float *)(this + 800) )
    {
      HIDWORD(v29) = this;
      LODWORD(v29) = this;
      sub_1010DD80((_DWORD *)(this + 1176), v29, 0.0);
      *(float *)(this + 800) = 0.0;
    }
    return;
  }
  v15 = *(_DWORD *)(this + 808);
  if ( v15 != -1
    && off_1061BE18[4 * (*(_DWORD *)(this + 808) & 0xFFF) + 2] == v15 >> 12
    && off_1061BE18[4 * (*(_DWORD *)(this + 808) & 0xFFF) + 1] )
  {
    *(_DWORD *)(this + 808) = -1;
LABEL_18:
    sub_102C8F10(this);
  }
}
