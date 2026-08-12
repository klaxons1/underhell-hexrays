void __thiscall sub_10230B50(int this, float *a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  int v6; // esi
  unsigned int v7; // eax
  int v8; // esi
  unsigned int v9; // eax
  int v10; // ecx
  int v11; // eax
  unsigned int v12; // eax
  int v13; // edi
  unsigned int v14; // eax
  int v15; // esi
  unsigned int v16; // eax
  _DWORD *v17; // ecx
  const char *v18; // eax
  void (*v19)(const char *, ...); // esi
  unsigned int v20; // eax
  _DWORD *v21; // ecx
  const char *v22; // eax
  unsigned int v23; // eax
  int v24; // ecx
  int v25; // eax
  int v26; // edi
  double v27; // st7
  double v28; // st6
  unsigned int v29; // eax
  _DWORD *v30; // ecx
  const char *v31; // eax
  double v32; // st7
  double v33; // st6
  double v34; // st5
  double v35; // st7
  double v36; // [esp+0h] [ebp-100h]
  double v37; // [esp+0h] [ebp-100h]
  double v38; // [esp+8h] [ebp-F8h]
  double v39; // [esp+8h] [ebp-F8h]
  _BYTE v40[64]; // [esp+1Ch] [ebp-E4h] BYREF
  _BYTE v41[12]; // [esp+5Ch] [ebp-A4h] BYREF
  int v42; // [esp+68h] [ebp-98h]
  float v43; // [esp+78h] [ebp-88h]
  float v44; // [esp+88h] [ebp-78h]
  int v45[3]; // [esp+9Ch] [ebp-64h] BYREF
  int v46[3]; // [esp+A8h] [ebp-58h] BYREF
  int v47; // [esp+B4h] [ebp-4Ch] BYREF
  float v48; // [esp+B8h] [ebp-48h]
  int v49; // [esp+BCh] [ebp-44h]
  int v50; // [esp+C0h] [ebp-40h] BYREF
  float v51; // [esp+C4h] [ebp-3Ch]
  float v52; // [esp+C8h] [ebp-38h]
  int v53; // [esp+CCh] [ebp-34h] BYREF
  float v54; // [esp+D0h] [ebp-30h]
  float v55; // [esp+D4h] [ebp-2Ch]
  int v56; // [esp+D8h] [ebp-28h] BYREF
  float v57; // [esp+DCh] [ebp-24h]
  float v58; // [esp+E0h] [ebp-20h]
  int v59; // [esp+E4h] [ebp-1Ch] BYREF
  float v60; // [esp+E8h] [ebp-18h]
  float v61; // [esp+ECh] [ebp-14h]
  int v62; // [esp+F0h] [ebp-10h] BYREF
  float v63; // [esp+F4h] [ebp-Ch]
  float v64; // [esp+F8h] [ebp-8h]
  bool v65; // [esp+FFh] [ebp-1h]

  v3 = *(_DWORD *)(this + 1280);
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 1280) & 0xFFF) + 1];
    v5 = v3 >> 12;
    if ( v4[1] == v5 && *v4 && (!*(_DWORD *)(this + 800) || *(_BYTE *)(this + 832)) )
    {
      if ( v4[1] == v5 )
        v6 = *v4;
      else
        v6 = 0;
      if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
        sub_100DAE60(v6);
      v62 = *(int *)(v6 + 580);
      v63 = *(float *)(v6 + 584);
      v64 = *(float *)(v6 + 588);
      v7 = *(_DWORD *)(this + 1280);
      if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1280) & 0xFFF) + 2] != v7 >> 12 )
        v8 = 0;
      else
        v8 = off_1061BE18[4 * (*(_DWORD *)(this + 1280) & 0xFFF) + 1];
      if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
        sub_100DAE60(v8);
      v47 = *(_DWORD *)(v8 + 704);
      v48 = *(float *)(v8 + 708);
      v49 = *(_DWORD *)(v8 + 712);
      v9 = *(_DWORD *)(this + 1280);
      if ( v9 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1280) & 0xFFF) + 2] != v9 >> 12 )
        v10 = 0;
      else
        v10 = off_1061BE18[4 * (*(_DWORD *)(this + 1280) & 0xFFF) + 1];
      v11 = sub_100D7680(v10);
      if ( v11 )
        v48 = *(float *)(v11 + 2544);
      v65 = *(_DWORD *)(dword_1069076C + 48) == 2;
      if ( v65 )
      {
        v12 = *(_DWORD *)(this + 880);
        if ( v12 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 880) & 0xFFF) + 2] != v12 >> 12 )
          v13 = 0;
        else
          v13 = off_1061BE18[4 * (*(_DWORD *)(this + 880) & 0xFFF) + 1];
        if ( (*(_DWORD *)(v13 + 252) & 0x800) != 0 )
          sub_100DAE60(v13);
        v14 = *(_DWORD *)(this + 880);
        if ( v14 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 880) & 0xFFF) + 2] != v14 >> 12 )
          v15 = 0;
        else
          v15 = off_1061BE18[4 * (*(_DWORD *)(this + 880) & 0xFFF) + 1];
        if ( (*(_DWORD *)(v15 + 252) & 0x800) != 0 )
          sub_100DAE60(v15);
        v16 = *(_DWORD *)(this + 880);
        if ( v16 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 880) & 0xFFF) + 2] != v16 >> 12 )
          v17 = 0;
        else
          v17 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(this + 880) & 0xFFF) + 1];
        v38 = *(float *)(v13 + 584);
        v36 = *(float *)(v15 + 580);
        v18 = sub_100D6390(v17);
        v19 = (void (*)(const char *, ...))Msg;
        Msg("--\n%s current org: %f %f\n", v18, v36, v38);
        v20 = *(_DWORD *)(this + 1280);
        if ( v20 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1280) & 0xFFF) + 2] != v20 >> 12 )
          v21 = 0;
        else
          v21 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(this + 1280) & 0xFFF) + 1];
        v22 = sub_100D6390(v21);
        Msg("%s current org: %f %f", v22, *(float *)&v62, v63);
      }
      else
      {
        v19 = (void (*)(const char *, ...))Msg;
      }
      v23 = *(_DWORD *)(this + 1280);
      if ( v23 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1280) & 0xFFF) + 2] != v23 >> 12 )
        v24 = 0;
      else
        v24 = off_1061BE18[4 * (*(_DWORD *)(this + 1280) & 0xFFF) + 1];
      v25 = __RTDynamicCast(
              v24,
              0,
              (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
              (int)&CBaseAnimating `RTTI Type Descriptor',
              0);
      v26 = v25;
      if ( v25 )
      {
        sub_100BFA80(v25, *(_DWORD *)(v25 + 908), 0.0, *(float *)(v25 + 904), (int)&v59, (int)v45);
        sub_10422AF0((int)&v59, *(float *)(v26 + 732), (int)&v59);
        if ( v65 )
        {
          *(float *)&v53 = 2.0;
          v54 = 2.0;
          v55 = 2.0;
          *(float *)&v50 = -2.0;
          v51 = -2.0;
          v52 = -2.0;
          sub_1011BB20((int)&v62, (int)&v50, (int)&v53, 0, 255, 0, 8, 0.1);
        }
        v27 = *(float *)&v62 - *(float *)&v59;
        *(float *)&v62 = v27;
        v28 = v63 - v60;
        v63 = v28;
        v64 = v64 - v61;
        if ( v65 )
        {
          v19(", relative to sequence start: %f %f\n", v27, v28);
          *(float *)&v50 = 3.0;
          v51 = 3.0;
          v52 = 3.0;
          *(float *)&v53 = -3.0;
          v54 = -3.0;
          v55 = -3.0;
          sub_1011BB20((int)&v62, (int)&v53, (int)&v50, 255, 0, 0, 8, 0.1);
        }
      }
      sub_10425A30(&v62, &v47);
      sub_10425BE0(v40, this + 1216, v41);
      v56 = v42;
      v57 = v43;
      v58 = v44;
      sub_10421A90(v41, v46);
      if ( v65 )
      {
        v29 = *(_DWORD *)(this + 880);
        if ( v29 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 880) & 0xFFF) + 2] != v29 >> 12 )
          v30 = 0;
        else
          v30 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(this + 880) & 0xFFF) + 1];
        v39 = v57;
        v37 = *(float *)&v56;
        v31 = sub_100D6390(v30);
        v19("Desired Origin for %s: %f %f\n", v31, v37, v39);
        sub_1011CB60((float *)&v56, (int)v46, 5.0, 1, 0.1);
      }
      *(float *)&v59 = *(float *)&v56 - *a2;
      v60 = v57 - a2[1];
      v61 = v58 - a2[2];
      if ( v65 )
      {
        Msg("Automovement's output origin: %f %f\n", *a2, a2[1]);
        Msg("Vector from automovement to desired: %f %f\n", *(float *)&v59, v60);
      }
      v32 = *(float *)(v26 + 904);
      v33 = *(float *)&v59 * v32;
      v34 = v32 * v60;
      v35 = v32 * v61;
      *a2 = v33 + *a2;
      a2[1] = v34 + a2[1];
      a2[2] = v35 + a2[2];
    }
  }
}
