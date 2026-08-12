void __thiscall sub_10354140(int *this)
{
  float *v2; // eax
  double v3; // st7
  double v4; // st6
  double v5; // st5
  int v6; // edx
  int (__thiscall *v7)(int); // eax
  int v8; // eax
  float *v9; // edi
  int (__thiscall *v10)(int); // eax
  int v11; // eax
  int v12; // ecx
  void (__thiscall *v13)(int, float *); // edx
  int v14; // edi
  float *v15; // eax
  double v16; // st6
  double v17; // st7
  double v18; // st7
  int (__thiscall *v19)(int); // eax
  float *v20; // eax
  int *v21; // eax
  int v22; // ecx
  _DWORD *v23; // eax
  int v24; // eax
  bool v25; // cc
  double v26; // st7
  __int64 v27; // [esp+Ch] [ebp-ECh]
  _BYTE v28[12]; // [esp+24h] [ebp-D4h] BYREF
  int v29[3]; // [esp+30h] [ebp-C8h] BYREF
  int v30[3]; // [esp+3Ch] [ebp-BCh] BYREF
  float v31[2]; // [esp+48h] [ebp-B0h] BYREF
  int v32[10]; // [esp+50h] [ebp-A8h] BYREF
  int v33; // [esp+78h] [ebp-80h]
  int v34; // [esp+7Ch] [ebp-7Ch]
  int v35; // [esp+80h] [ebp-78h]
  int v36; // [esp+84h] [ebp-74h]
  int v37; // [esp+88h] [ebp-70h]
  float v38; // [esp+8Ch] [ebp-6Ch]
  int v39; // [esp+90h] [ebp-68h]
  int v40; // [esp+94h] [ebp-64h]
  __int16 v41; // [esp+98h] [ebp-60h]
  char v42; // [esp+9Bh] [ebp-5Dh]
  __int16 v43; // [esp+9Ch] [ebp-5Ch]
  int v44[3]; // [esp+A0h] [ebp-58h] BYREF
  int v45; // [esp+ACh] [ebp-4Ch] BYREF
  float v46; // [esp+B0h] [ebp-48h]
  float v47; // [esp+B4h] [ebp-44h]
  float v48; // [esp+B8h] [ebp-40h]
  int v49; // [esp+BCh] [ebp-3Ch]
  float v50; // [esp+C0h] [ebp-38h]
  float v51; // [esp+C4h] [ebp-34h]
  int v52; // [esp+C8h] [ebp-30h] BYREF
  int v53; // [esp+CCh] [ebp-2Ch]
  int v54; // [esp+D0h] [ebp-28h]
  int v55; // [esp+D4h] [ebp-24h] BYREF
  float v56; // [esp+D8h] [ebp-20h]
  float v57; // [esp+DCh] [ebp-1Ch]
  int v58; // [esp+E0h] [ebp-18h] BYREF
  float v59; // [esp+E4h] [ebp-14h]
  float v60; // [esp+E8h] [ebp-10h]
  int v61; // [esp+ECh] [ebp-Ch] BYREF
  float v62; // [esp+F0h] [ebp-8h]
  int v63; // [esp+F4h] [ebp-4h]

  sub_100BF1B0(this, "muzzle", (int)&v61, (float *)v30, 0, 0);
  v2 = (float *)sub_10352A60(this, &v58);
  v3 = *v2;
  v29[0] = *(int *)v2;
  v4 = v2[1];
  v29[1] = *((int *)v2 + 1);
  v5 = v2[2];
  v29[2] = *((int *)v2 + 2);
  *(float *)&v52 = v3 - *(float *)&v61;
  *(float *)&v53 = v4 - v62;
  *(float *)&v54 = v5 - *(float *)&v63;
  off_10689714();
  if ( *(_DWORD *)(dword_106E6A14 + 48) == 3 )
  {
    sub_100BF1B0(this, "muzzle", (int)&v61, (float *)&v55, (float *)v44, (float *)&v45);
    sub_104222B0(v28, &v55, v44, &v45);
    sub_1011BC50((float *)&v61, (float *)v29, 255, 255, 0, 1, 1.0);
    *(float *)&v58 = *(float *)&v55 * 64.0 + *(float *)&v61;
    v59 = v56 * 64.0 + v62;
    v60 = 64.0 * v57 + *(float *)&v63;
    sub_1011BC50((float *)&v61, (float *)&v58, 255, 0, 0, 1, 1.0);
    *(float *)&v58 = *(float *)v44 * 32.0 + *(float *)&v61;
    v59 = *(float *)&v44[1] * 32.0 + v62;
    v60 = 32.0 * *(float *)&v44[2] + *(float *)&v63;
    sub_1011BC50((float *)&v61, (float *)&v58, 0, 255, 0, 1, 1.0);
    *(float *)&v58 = *(float *)&v45 * 32.0 + *(float *)&v61;
    v59 = v46 * 32.0 + v62;
    v60 = 32.0 * v47 + *(float *)&v63;
    sub_1011BC50((float *)&v61, (float *)&v58, 0, 0, 255, 1, 1.0);
  }
  v49 = v52;
  v6 = *this;
  v50 = *(float *)&v53;
  v7 = *(int (__thiscall **)(int))(v6 + 368);
  v51 = *(float *)&v54;
  if ( v7((int)this) )
  {
    v8 = (*(int (__thiscall **)(int *))(*this + 368))(this);
    v9 = (float *)v8;
    if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
      sub_100DAE60(v8);
    *(float *)&v49 = v9[145] - *(float *)&v61;
    v50 = v9[146] - v62;
    v51 = v9[147] - *(float *)&v63;
    off_10689714();
  }
  if ( *(float *)&v30[1] * v50 + *(float *)v30 * *(float *)&v49 + *(float *)&v30[2] * v51 >= 0.80000001 )
  {
    (*(void (__thiscall **)(int *))(*this + 1116))(this);
    HIDWORD(v27) = this;
    LODWORD(v27) = this;
    sub_1010DD80(this + 982, v27, 0.0);
    v10 = *(int (__thiscall **)(int))(*this + 368);
    *((float *)this + 1041) = *(float *)(dword_106B31C8 + 12) + 0.050000001;
    v48 = 0.0;
    if ( v10((int)this) )
      v48 = (float)*(int *)((*(int (__thiscall **)(int *))(*this + 368))(this) + 220);
    if ( (*(int (__thiscall **)(int *))(*this + 368))(this)
      && ((v11 = (*(int (__thiscall **)(int *))(*this + 368))(this), *(char **)(v11 + 92) == "rpg_missile")
       || sub_100D6240((_DWORD *)v11, "rpg_missile")) )
    {
      v12 = this[1033];
      v38 = 1.0;
      v13 = *(void (__thiscall **)(int, float *))(*this + 432);
      v31[1] = *(float *)&v61;
      v32[9] = v12;
      *(float *)v32 = v62;
      v32[1] = v63;
      v36 = 0;
      v40 = 0;
      v32[2] = v52;
      v41 = 1;
      v34 = 0;
      v32[3] = v53;
      v43 = 0;
      v42 = 0;
      v32[4] = v54;
      LODWORD(v31[0]) = 1;
      v33 = 1;
      *(float *)&v32[5] = 0.043620002;
      v35 = 0;
      *(float *)&v32[6] = 0.043620002;
      v39 = 0;
      *(float *)&v32[7] = 0.043620002;
      v37 = 0;
      *(float *)&v32[8] = 8192.0;
      v13((int)this, v31);
      v14 = (*(int (__thiscall **)(int *))(*this + 368))(this);
      if ( (*(_DWORD *)(v14 + 252) & 0x800) != 0 )
        sub_100DAE60(v14);
      sub_10422220(v14 + 704, &v58);
      if ( (*(_DWORD *)(v14 + 252) & 0x800) != 0 )
        sub_100DAE60(v14);
      v15 = (float *)(*(int (__thiscall **)(int *))(*this + 576))(this);
      v16 = v15[1] - *(float *)(v14 + 584);
      v17 = v15[2] - *(float *)(v14 + 588);
      *(float *)&v55 = *v15 - *(float *)(v14 + 580);
      v56 = v16;
      v57 = v17;
      v18 = off_10689714();
      if ( *(float *)&v58 * *(float *)&v55 + v59 * v56 + v60 * v57 > 0.94999999
        && v18 < 1024.0
        && !(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 1) )
      {
        sub_10248110((int)v32, (int)this, (int)this, 200.0, 0x80000000, 0);
        v19 = *(int (__thiscall **)(int))(*this + 576);
        *(float *)&v45 = -*(float *)&v55;
        v46 = -v56;
        v47 = -v57;
        v20 = (float *)v19((int)this);
        sub_10248070((float *)v32, this[1033], (float *)&v45, v20, 1.0);
        v21 = (int *)(*(int (__thiscall **)(int *))(*this + 368))(this);
        sub_100D9E70(v21, (int)this, v32);
      }
    }
    else
    {
      v22 = this[1033];
      --this[1034];
      sub_10312E60(v31, 1, (float *)&v61, (float *)&v52, &flt_106F1CA8, 16384.0, v22, 1);
      v33 = 1;
      v23 = sub_102D9B20();
      v24 = sub_100BA130(v23, this[1033]);
      v25 = this[1036] < 5;
      v36 = v24;
      if ( !v25 )
        v36 = 1;
      (*(void (__thiscall **)(int *, float *))(*this + 432))(this, v31);
      if ( (*(int (__thiscall **)(int *))(*this + 368))(this) )
      {
        v26 = (double)*(int *)((*(int (__thiscall **)(int *))(*this + 368))(this) + 220);
        if ( v48 != v26 )
          ++this[1036];
      }
    }
  }
  else
  {
    sub_10352CE0(this);
  }
}
