void __thiscall sub_102D3FD0(int this)
{
  int v2; // edx
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx
  int v7; // ecx
  int *v8; // ecx
  int v9; // ecx
  int *v10; // ecx
  int *v11; // ecx
  int v12; // eax
  int v13; // eax
  unsigned int v14; // ecx
  int *v15; // eax
  unsigned int v16; // ecx
  int v17; // eax
  unsigned int v18; // eax
  int v19; // eax
  unsigned int v20; // eax
  int v21; // eax
  unsigned int v22; // eax
  int v23; // eax
  unsigned int v24; // eax
  int v25; // eax
  unsigned int v26; // eax
  int v27; // ecx
  int v28; // eax
  unsigned int v29; // eax
  int v30; // eax
  unsigned int v31; // eax
  int v32; // eax
  unsigned int v33; // eax
  int v34; // eax
  unsigned int v35; // eax
  int v36; // eax
  unsigned int v37; // eax
  int *v38; // ecx
  unsigned int v39; // eax
  float v40; // [esp+14h] [ebp-30h]
  float v41[3]; // [esp+28h] [ebp-1Ch] BYREF
  float v42[3]; // [esp+34h] [ebp-10h] BYREF
  int v43; // [esp+40h] [ebp-4h] BYREF

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  sub_10112C00(this + 320, 2);
  sub_100E0970(this, v2, 5, 1);
  sub_100EBE30(this, 13);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "models/Weapons/ar2_grenade.mdl");
  v42[0] = 3.0;
  v42[1] = 3.0;
  v42[2] = 3.0;
  v41[0] = -3.0;
  v41[1] = -3.0;
  v41[2] = -3.0;
  sub_1025F360((_DWORD *)this, (int)v41, (int)v42);
  *(_DWORD *)(this + 200) = sub_100F3C80;
  *(_DWORD *)(this + 196) = sub_102D3C00;
  sub_100EC3F0((_DWORD *)this, (int)sub_102D3A40, 0.0, 0);
  v40 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)this, v40, 0);
  v3 = *(_DWORD *)(this + 412);
  if ( v3 != -1
    && (v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 412) & 0xFFF) + 1],
        v5 = v3 >> 12,
        off_1061BE18[4 * (*(_DWORD *)(this + 412) & 0xFFF) + 2] == v5)
    && *v4
    && (off_1061BE18[4 * (*(_DWORD *)(this + 412) & 0xFFF) + 2] != v5 ? (v6 = 0) : (v6 = *v4),
        (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 320))(v6)) )
  {
    v43 = *(int *)(dword_106DF744 + 44);
    sub_100F33E0((float *)(this + 2128), (float *)&v43);
  }
  else
  {
    v7 = *(_DWORD *)(this + 2128);
    v43 = *(int *)(dword_106DF78C + 44);
    if ( v7 != v43 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v8 = *(int **)(this + 24);
        if ( v8 )
          sub_100194B0(v8, 2128);
      }
      *(float *)(this + 2128) = *(float *)&v43;
    }
  }
  v9 = *(_DWORD *)(this + 2112);
  v43 = *(int *)(dword_106DE66C + 44);
  if ( v9 != v43 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v10 = *(int **)(this + 24);
      if ( v10 )
        sub_100194B0(v10, 2112);
    }
    *(float *)(this + 2112) = *(float *)&v43;
  }
  if ( *(_BYTE *)(this + 225) != 2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
    *(_BYTE *)(this + 225) = 2;
  }
  if ( *(_BYTE *)(this + 2109) != 1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v11 = *(int **)(this + 24);
      if ( v11 )
        sub_100194B0(v11, 2109);
    }
    *(_BYTE *)(this + 2109) = 1;
  }
  if ( *(_DWORD *)(this + 220) != 1 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *(_DWORD *)(this + 220) = 1;
  }
  *(float *)(this + 552) = sub_10260720(400.0);
  v12 = *(_DWORD *)(this + 556);
  *(float *)&v43 = 0.80000001;
  if ( v12 != COERCE_INT(0.80000001) )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 696))(this, this + 556);
    *(float *)(this + 556) = 0.80000001;
  }
  sub_100C1170(this, 0);
  *(float *)(this + 2152) = 100.0;
  *(float *)(this + 2148) = *(float *)(dword_106B31C8 + 12);
  if ( *(_DWORD *)(dword_106DE6B4 + 48) )
  {
    v13 = sub_10283150();
    *(_DWORD *)(this + 2144) = v13 ? *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v13 + 8))(v13) : -1;
    v14 = *(_DWORD *)(this + 2144);
    if ( v14 != -1 )
    {
      v15 = &off_1061BE18[4 * (*(_DWORD *)(this + 2144) & 0xFFF) + 1];
      v16 = v14 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 2144) & 0xFFF) + 2] == v16 )
      {
        if ( *v15 )
        {
          v43 = 48;
          if ( v15[1] == v16 )
            v17 = *v15;
          else
            v17 = 0;
          sub_100C1E10((float *)(v17 + 828), &v43);
          v18 = *(_DWORD *)(this + 2144);
          v43 = 1;
          if ( v18 == -1 || off_1061BE18[4 * (v18 & 0xFFF) + 2] != v18 >> 12 )
            v19 = 0;
          else
            v19 = off_1061BE18[4 * (v18 & 0xFFF) + 1];
          sub_100C1E70((float *)(v19 + 832), &v43);
          v20 = *(_DWORD *)(this + 2144);
          if ( v20 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 2144) & 0xFFF) + 2] != v20 >> 12 )
            v21 = 0;
          else
            v21 = off_1061BE18[4 * (*(_DWORD *)(this + 2144) & 0xFFF) + 1];
          sub_100C34C0((float *)(v21 + 800), 0.1, 0.1, 0.1);
          v22 = *(_DWORD *)(this + 2144);
          if ( v22 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 2144) & 0xFFF) + 2] != v22 >> 12 )
            v23 = 0;
          else
            v23 = off_1061BE18[4 * (*(_DWORD *)(this + 2144) & 0xFFF) + 1];
          sub_102BC090((float *)(v23 + 812), 0.0, 0.0, 0.0);
          v24 = *(_DWORD *)(this + 2144);
          v43 = 12;
          if ( v24 == -1 || off_1061BE18[4 * (v24 & 0xFFF) + 2] != v24 >> 12 )
            v25 = 0;
          else
            v25 = off_1061BE18[4 * (v24 & 0xFFF) + 1];
          sub_10284420((float *)(v25 + 848), &v43);
          v26 = *(_DWORD *)(this + 2144);
          if ( v26 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 2144) & 0xFFF) + 2] != *(_DWORD *)(this + 2144) >> 12 )
            v27 = 0;
          else
            v27 = off_1061BE18[4 * (*(_DWORD *)(this + 2144) & 0xFFF) + 1];
          *(float *)&v43 = *(float *)(v27 + 848) * 4.0;
          if ( v26 == -1 || off_1061BE18[4 * (v26 & 0xFFF) + 2] != v26 >> 12 )
            v28 = 0;
          else
            v28 = off_1061BE18[4 * (v26 & 0xFFF) + 1];
          sub_102D39F0((float *)(v28 + 852), (float *)&v43);
          v29 = *(_DWORD *)(this + 2144);
          v43 = 4;
          if ( v29 == -1 || off_1061BE18[4 * (v29 & 0xFFF) + 2] != v29 >> 12 )
            v30 = 0;
          else
            v30 = off_1061BE18[4 * (v29 & 0xFFF) + 1];
          sub_102842B0((float *)(v30 + 856), &v43);
          v31 = *(_DWORD *)(this + 2144);
          v43 = 4;
          if ( v31 == -1 || off_1061BE18[4 * (v31 & 0xFFF) + 2] != v31 >> 12 )
            v32 = 0;
          else
            v32 = off_1061BE18[4 * (v31 & 0xFFF) + 1];
          sub_102843C0((float *)(v32 + 840), &v43);
          v33 = *(_DWORD *)(this + 2144);
          v43 = 24;
          if ( v33 == -1 || off_1061BE18[4 * (v33 & 0xFFF) + 2] != v33 >> 12 )
            v34 = 0;
          else
            v34 = off_1061BE18[4 * (v33 & 0xFFF) + 1];
          sub_100C1DB0((float *)(v34 + 844), &v43);
          v35 = *(_DWORD *)(this + 2144);
          *(float *)&v43 = 0.2;
          if ( v35 == -1 || off_1061BE18[4 * (v35 & 0xFFF) + 2] != v35 >> 12 )
            v36 = 0;
          else
            v36 = off_1061BE18[4 * (v35 & 0xFFF) + 1];
          sub_100C1F20((float *)(v36 + 824), (float *)&v43);
          v37 = *(_DWORD *)(this + 2144);
          if ( v37 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 2144) & 0xFFF) + 2] != v37 >> 12 )
            v38 = 0;
          else
            v38 = (int *)off_1061BE18[4 * (*(_DWORD *)(this + 2144) & 0xFFF) + 1];
          sub_100F5880(v38, 10.0);
          v39 = *(_DWORD *)(this + 2144);
          if ( v39 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 2144) & 0xFFF) + 2] != v39 >> 12 )
            sub_10284B60(0, this, 0);
          else
            sub_10284B60(off_1061BE18[4 * (*(_DWORD *)(this + 2144) & 0xFFF) + 1], this, 0);
        }
      }
    }
  }
}
