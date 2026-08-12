void __thiscall sub_102BC790(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  unsigned int v4; // eax
  int v5; // esi
  int v6; // eax
  int v7; // eax
  unsigned int v8; // eax
  int v9; // ecx
  unsigned int v10; // eax
  int v11; // ecx
  float *v12; // esi
  int *v13; // ecx
  int v14; // ecx
  float *v15; // esi
  int *v16; // ecx
  unsigned int v17; // eax
  int v18; // eax
  unsigned int v19; // eax
  int v20; // eax
  unsigned int v21; // eax
  int v22; // ecx
  float *v23; // esi
  int *v24; // ecx
  unsigned int v25; // eax
  int v26; // ecx
  float *v27; // esi
  int *v28; // ecx
  unsigned int v29; // eax
  int v30; // ecx
  float *v31; // esi
  int *v32; // ecx
  unsigned int v33; // eax
  int v34; // ecx
  float *v35; // esi
  int *v36; // ecx
  unsigned int v37; // eax
  int v38; // ecx
  float *v39; // esi
  int *v40; // ecx
  unsigned int v41; // eax
  int v42; // ecx
  float *v43; // esi
  int *v44; // ecx
  unsigned int v45; // eax
  int v46; // ecx
  float *v47; // esi
  int *v48; // ecx
  int v49; // ecx
  float *v50; // esi
  int *v51; // ecx
  unsigned int v52; // eax
  int *v53; // ecx
  int v54; // eax

  sub_1023C380((_DWORD *)this, (int)"HeadcrabCanister.AfterLanding", 0.0, 0);
  sub_102BBE10((float *)this);
  v2 = *(_DWORD *)(this + 1244);
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 1244) & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 1244) & 0xFFF) + 2] == v4 )
    {
      if ( *v3 )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 1244) & 0xFFF) + 2] == v4 )
          v5 = *v3;
        else
          v5 = 0;
        v6 = sub_100BEF30(this, "trail");
        sub_10126B10(v5, this, v6);
      }
    }
  }
  if ( (*(_BYTE *)(this + 250) & 1) == 0 )
  {
    v7 = sub_10283150();
    if ( v7 )
      *(_DWORD *)(this + 1248) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
    else
      *(_DWORD *)(this + 1248) = -1;
    v8 = *(_DWORD *)(this + 1248);
    if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1248) & 0xFFF) + 2] != v8 >> 12 )
      v9 = 0;
    else
      v9 = off_1061BE18[4 * (*(_DWORD *)(this + 1248) & 0xFFF) + 1];
    sub_10284B60(v9, this, "smoke");
    v10 = *(_DWORD *)(this + 1248);
    if ( v10 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1248) & 0xFFF) + 2] != v10 >> 12 )
      v11 = 0;
    else
      v11 = off_1061BE18[4 * (*(_DWORD *)(this + 1248) & 0xFFF) + 1];
    v12 = (float *)(v11 + 828);
    if ( *(_DWORD *)(v11 + 828) != COERCE_INT(8.0) )
    {
      if ( *(_BYTE *)(v11 + 84) )
      {
        *(_BYTE *)(v11 + 88) |= 1u;
      }
      else
      {
        v13 = *(int **)(v11 + 24);
        if ( v13 )
          sub_100194B0(v13, 828);
      }
      *v12 = 8.0;
    }
    if ( *(_DWORD *)(this + 1248) == -1
      || off_1061BE18[4 * (*(_DWORD *)(this + 1248) & 0xFFF) + 2] != *(_DWORD *)(this + 1248) >> 12 )
    {
      v14 = 0;
    }
    else
    {
      v14 = off_1061BE18[4 * (*(_DWORD *)(this + 1248) & 0xFFF) + 1];
    }
    v15 = (float *)(v14 + 832);
    if ( *(_DWORD *)(v14 + 832) != COERCE_INT(2.0) )
    {
      if ( *(_BYTE *)(v14 + 84) )
      {
        *(_BYTE *)(v14 + 88) |= 1u;
      }
      else
      {
        v16 = *(int **)(v14 + 24);
        if ( v16 )
          sub_100194B0(v16, 832);
      }
      *v15 = 2.0;
    }
    v17 = *(_DWORD *)(this + 1248);
    if ( v17 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1248) & 0xFFF) + 2] != v17 >> 12 )
      v18 = 0;
    else
      v18 = off_1061BE18[4 * (*(_DWORD *)(this + 1248) & 0xFFF) + 1];
    sub_100C34C0((float *)(v18 + 800), 0.69999999, 0.69999999, 0.69999999);
    v19 = *(_DWORD *)(this + 1248);
    if ( v19 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1248) & 0xFFF) + 2] != v19 >> 12 )
      v20 = 0;
    else
      v20 = off_1061BE18[4 * (*(_DWORD *)(this + 1248) & 0xFFF) + 1];
    sub_102BC090((float *)(v20 + 812), 0.60000002, 0.60000002, 0.60000002);
    v21 = *(_DWORD *)(this + 1248);
    if ( v21 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1248) & 0xFFF) + 2] != v21 >> 12 )
      v22 = 0;
    else
      v22 = off_1061BE18[4 * (*(_DWORD *)(this + 1248) & 0xFFF) + 1];
    v23 = (float *)(v22 + 848);
    if ( *(_DWORD *)(v22 + 848) != COERCE_INT(32.0) )
    {
      if ( *(_BYTE *)(v22 + 84) )
      {
        *(_BYTE *)(v22 + 88) |= 1u;
      }
      else
      {
        v24 = *(int **)(v22 + 24);
        if ( v24 )
          sub_100194B0(v24, 848);
      }
      *v23 = 32.0;
    }
    v25 = *(_DWORD *)(this + 1248);
    if ( v25 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1248) & 0xFFF) + 2] != v25 >> 12 )
      v26 = 0;
    else
      v26 = off_1061BE18[4 * (*(_DWORD *)(this + 1248) & 0xFFF) + 1];
    v27 = (float *)(v26 + 852);
    if ( *(_DWORD *)(v26 + 852) != COERCE_INT(64.0) )
    {
      if ( *(_BYTE *)(v26 + 84) )
      {
        *(_BYTE *)(v26 + 88) |= 1u;
      }
      else
      {
        v28 = *(int **)(v26 + 24);
        if ( v28 )
          sub_100194B0(v28, 852);
      }
      *v27 = 64.0;
    }
    v29 = *(_DWORD *)(this + 1248);
    if ( v29 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1248) & 0xFFF) + 2] != v29 >> 12 )
      v30 = 0;
    else
      v30 = off_1061BE18[4 * (*(_DWORD *)(this + 1248) & 0xFFF) + 1];
    v31 = (float *)(v30 + 856);
    if ( *(_DWORD *)(v30 + 856) != COERCE_INT(8.0) )
    {
      if ( *(_BYTE *)(v30 + 84) )
      {
        *(_BYTE *)(v30 + 88) |= 1u;
      }
      else
      {
        v32 = *(int **)(v30 + 24);
        if ( v32 )
          sub_100194B0(v32, 856);
      }
      *v31 = 8.0;
    }
    v33 = *(_DWORD *)(this + 1248);
    if ( v33 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1248) & 0xFFF) + 2] != v33 >> 12 )
      v34 = 0;
    else
      v34 = off_1061BE18[4 * (*(_DWORD *)(this + 1248) & 0xFFF) + 1];
    v35 = (float *)(v34 + 840);
    if ( *(_DWORD *)(v34 + 840) != COERCE_INT(0.0) )
    {
      if ( *(_BYTE *)(v34 + 84) )
      {
        *(_BYTE *)(v34 + 88) |= 1u;
      }
      else
      {
        v36 = *(int **)(v34 + 24);
        if ( v36 )
          sub_100194B0(v36, 840);
      }
      *v35 = 0.0;
    }
    v37 = *(_DWORD *)(this + 1248);
    if ( v37 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1248) & 0xFFF) + 2] != v37 >> 12 )
      v38 = 0;
    else
      v38 = off_1061BE18[4 * (*(_DWORD *)(this + 1248) & 0xFFF) + 1];
    v39 = (float *)(v38 + 844);
    if ( *(_DWORD *)(v38 + 844) != COERCE_INT(8.0) )
    {
      if ( *(_BYTE *)(v38 + 84) )
      {
        *(_BYTE *)(v38 + 88) |= 1u;
      }
      else
      {
        v40 = *(int **)(v38 + 24);
        if ( v40 )
          sub_100194B0(v40, 844);
      }
      *v39 = 8.0;
    }
    v41 = *(_DWORD *)(this + 1248);
    if ( v41 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1248) & 0xFFF) + 2] != v41 >> 12 )
      v42 = 0;
    else
      v42 = off_1061BE18[4 * (*(_DWORD *)(this + 1248) & 0xFFF) + 1];
    v43 = (float *)(v42 + 860);
    if ( *(_DWORD *)(v42 + 860) != COERCE_INT(32.0) )
    {
      if ( *(_BYTE *)(v42 + 84) )
      {
        *(_BYTE *)(v42 + 88) |= 1u;
      }
      else
      {
        v44 = *(int **)(v42 + 24);
        if ( v44 )
          sub_100194B0(v44, 860);
      }
      *v43 = 32.0;
    }
    v45 = *(_DWORD *)(this + 1248);
    if ( v45 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1248) & 0xFFF) + 2] != v45 >> 12 )
      v46 = 0;
    else
      v46 = off_1061BE18[4 * (*(_DWORD *)(this + 1248) & 0xFFF) + 1];
    v47 = (float *)(v46 + 864);
    if ( *(_DWORD *)(v46 + 864) != COERCE_INT(64.0) )
    {
      if ( *(_BYTE *)(v46 + 84) )
      {
        *(_BYTE *)(v46 + 88) |= 1u;
      }
      else
      {
        v48 = *(int **)(v46 + 24);
        if ( v48 )
          sub_100194B0(v48, 864);
      }
      *v47 = 64.0;
    }
    if ( *(_DWORD *)(this + 1248) == -1
      || off_1061BE18[4 * (*(_DWORD *)(this + 1248) & 0xFFF) + 2] != *(_DWORD *)(this + 1248) >> 12 )
    {
      v49 = 0;
    }
    else
    {
      v49 = off_1061BE18[4 * (*(_DWORD *)(this + 1248) & 0xFFF) + 1];
    }
    v50 = (float *)(v49 + 824);
    if ( *(_DWORD *)(v49 + 824) != COERCE_INT(0.34999999) )
    {
      if ( *(_BYTE *)(v49 + 84) )
      {
        *(_BYTE *)(v49 + 88) |= 1u;
      }
      else
      {
        v51 = *(int **)(v49 + 24);
        if ( v51 )
          sub_100194B0(v51, 824);
      }
      *v50 = 0.34999999;
    }
    v52 = *(_DWORD *)(this + 1248);
    if ( v52 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1248) & 0xFFF) + 2] != v52 >> 12 )
      v53 = 0;
    else
      v53 = (int *)off_1061BE18[4 * (*(_DWORD *)(this + 1248) & 0xFFF) + 1];
    sub_100F5880(v53, *(float *)(this + 1284));
  }
  sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
  v54 = *(_DWORD *)(this + 248);
  if ( (v54 & 0x4000) == 0 )
  {
    if ( (v54 & 0x1000) != 0 )
      sub_102BC610(this);
    else
      sub_102BC720(this);
  }
}
