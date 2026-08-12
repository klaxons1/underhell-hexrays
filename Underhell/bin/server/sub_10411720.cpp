int *__thiscall sub_10411720(int this, int a2, char *String2)
{
  char *v3; // eax
  _DWORD *v5; // eax
  int v6; // eax
  int v7; // edi
  double v8; // st7
  int v9; // edx
  unsigned int v10; // edi
  int *v11; // ecx
  _DWORD *v12; // eax
  int *result; // eax
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  int v16; // eax
  unsigned int v17; // eax
  int v18; // eax
  unsigned int v19; // eax
  int v20; // eax
  unsigned int v21; // eax
  int v22; // eax
  unsigned int v23; // eax
  int v24; // eax
  unsigned int v25; // eax
  int v26; // eax
  unsigned int v27; // eax
  int v28; // eax
  unsigned int v29; // eax
  int v30; // eax
  unsigned int v31; // eax
  int v32; // eax
  unsigned int v33; // eax
  int v34; // eax
  unsigned int v35; // eax
  int *v36; // ecx
  unsigned int v37; // eax
  const char *v38; // eax
  float v39; // [esp+4h] [ebp-34h]
  float v40[3]; // [esp+14h] [ebp-24h] BYREF
  float v41[3]; // [esp+20h] [ebp-18h] BYREF
  float v42; // [esp+2Ch] [ebp-Ch]
  float v43; // [esp+30h] [ebp-8h]
  float v44; // [esp+34h] [ebp-4h]

  v3 = String2;
  if ( !String2 )
    v3 = (char *)String;
  v5 = sub_1012BF20(&dword_1069E3E0, 0, v3, 0, 0, 0, 0);
  *(_DWORD *)(this + 2148) = v5;
  if ( v5 )
  {
    v6 = *(_DWORD *)(this + 252) >> 11;
    *(float *)(this + 2152) = *(float *)&a2;
    if ( (v6 & 1) != 0 )
      sub_100DAE60(this);
    v7 = *(_DWORD *)(this + 2148);
    if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
      sub_100DAE60(*(_DWORD *)(this + 2148));
    v42 = *(float *)(v7 + 580) - *(float *)(this + 580);
    v43 = *(float *)(v7 + 584) - *(float *)(this + 584);
    v44 = *(float *)(v7 + 588) - *(float *)(this + 588);
    off_10689714();
    v8 = *(float *)(this + 2152);
    v41[0] = v42 * v8;
    v41[1] = v43 * v8;
    v41[2] = v8 * v44;
    sub_100DD660(this, v41);
    if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
      sub_100DAFD0(this);
    sub_10422540(this + 476, v40);
    sub_100E11A0(this, v40);
    sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) & 0xFFFB);
    sub_100E0970(this, v9, 5, 0);
    v10 = *(_DWORD *)(this + 192) & 0xFFFFFFDF;
    if ( *(_DWORD *)(this + 192) != v10 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v11 = *(int **)(this + 24);
        if ( v11 )
          sub_100194B0(v11, 192);
      }
      *(_DWORD *)(this + 192) = v10;
    }
    v12 = *(_DWORD **)(this + 24);
    if ( v12 )
      *v12 |= 0x80u;
    sub_100D8500((_DWORD *)this);
    *(_DWORD *)(this + 200) = sub_100F3C80;
    *(_DWORD *)(this + 196) = sub_10410B50;
    sub_100EC3F0((_DWORD *)this, (int)sub_10411390, 0.0, 0);
    v39 = *(float *)(dword_106B31C8 + 12) + 0.1;
    sub_100EC4A0((int *)this, v39, 0);
    result = (int *)sub_102831D0();
    if ( result )
    {
      result = (int *)(*(int (__thiscall **)(int *))(*result + 8))(result);
      *(_DWORD *)(this + 2144) = *result;
    }
    else
    {
      *(_DWORD *)(this + 2144) = -1;
    }
    v14 = *(_DWORD *)(this + 2144);
    if ( v14 != -1 )
    {
      result = &off_1061BE18[4 * (*(_DWORD *)(this + 2144) & 0xFFF) + 1];
      v15 = v14 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 2144) & 0xFFF) + 2] == v15 )
      {
        if ( *result )
        {
          *(float *)&a2 = 0.2;
          if ( result[1] == v15 )
            v16 = *result;
          else
            v16 = 0;
          sub_100C1F20((float *)(v16 + 824), (float *)&a2);
          v17 = *(_DWORD *)(this + 2144);
          a2 = 100;
          if ( v17 == -1 || off_1061BE18[4 * (v17 & 0xFFF) + 2] != v17 >> 12 )
            v18 = 0;
          else
            v18 = off_1061BE18[4 * (v17 & 0xFFF) + 1];
          sub_100C1E10((float *)(v18 + 828), &a2);
          v19 = *(_DWORD *)(this + 2144);
          *(float *)&a2 = 0.5;
          if ( v19 == -1 || off_1061BE18[4 * (v19 & 0xFFF) + 2] != v19 >> 12 )
            v20 = 0;
          else
            v20 = off_1061BE18[4 * (v19 & 0xFFF) + 1];
          sub_102BBDC0((float *)(v20 + 832), (float *)&a2);
          v21 = *(_DWORD *)(this + 2144);
          if ( v21 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 2144) & 0xFFF) + 2] != v21 >> 12 )
            v22 = 0;
          else
            v22 = off_1061BE18[4 * (*(_DWORD *)(this + 2144) & 0xFFF) + 1];
          sub_100C34C0((float *)(v22 + 800), 0.64999998, 0.64999998, 0.64999998);
          v23 = *(_DWORD *)(this + 2144);
          if ( v23 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 2144) & 0xFFF) + 2] != v23 >> 12 )
            v24 = 0;
          else
            v24 = off_1061BE18[4 * (*(_DWORD *)(this + 2144) & 0xFFF) + 1];
          sub_102BC090((float *)(v24 + 812), 0.0, 0.0, 0.0);
          v25 = *(_DWORD *)(this + 2144);
          a2 = 8;
          if ( v25 == -1 || off_1061BE18[4 * (v25 & 0xFFF) + 2] != v25 >> 12 )
            v26 = 0;
          else
            v26 = off_1061BE18[4 * (v25 & 0xFFF) + 1];
          sub_10284420((float *)(v26 + 848), &a2);
          v27 = *(_DWORD *)(this + 2144);
          a2 = 16;
          if ( v27 == -1 || off_1061BE18[4 * (v27 & 0xFFF) + 2] != v27 >> 12 )
            v28 = 0;
          else
            v28 = off_1061BE18[4 * (v27 & 0xFFF) + 1];
          sub_10284480((float *)(v28 + 852), &a2);
          v29 = *(_DWORD *)(this + 2144);
          a2 = 4;
          if ( v29 == -1 || off_1061BE18[4 * (v29 & 0xFFF) + 2] != v29 >> 12 )
            v30 = 0;
          else
            v30 = off_1061BE18[4 * (v29 & 0xFFF) + 1];
          sub_102842B0((float *)(v30 + 856), &a2);
          v31 = *(_DWORD *)(this + 2144);
          a2 = 2;
          if ( v31 == -1 || off_1061BE18[4 * (v31 & 0xFFF) + 2] != v31 >> 12 )
            v32 = 0;
          else
            v32 = off_1061BE18[4 * (v31 & 0xFFF) + 1];
          sub_102843C0((float *)(v32 + 840), &a2);
          v33 = *(_DWORD *)(this + 2144);
          a2 = 16;
          if ( v33 == -1 || off_1061BE18[4 * (v33 & 0xFFF) + 2] != v33 >> 12 )
            v34 = 0;
          else
            v34 = off_1061BE18[4 * (v33 & 0xFFF) + 1];
          sub_100C1DB0((float *)(v34 + 844), &a2);
          v35 = *(_DWORD *)(this + 2144);
          if ( v35 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 2144) & 0xFFF) + 2] != v35 >> 12 )
            v36 = 0;
          else
            v36 = (int *)off_1061BE18[4 * (*(_DWORD *)(this + 2144) & 0xFFF) + 1];
          sub_100F5880(v36, 999.0);
          v37 = *(_DWORD *)(this + 2144);
          if ( v37 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 2144) & 0xFFF) + 2] != v37 >> 12 )
            return (int *)sub_10284FE0(0, this, "0");
          else
            return (int *)sub_10284FE0(off_1061BE18[4 * (*(_DWORD *)(this + 2144) & 0xFFF) + 1], this, "0");
        }
      }
    }
  }
  else
  {
    v38 = sub_100D6390((_DWORD *)this);
    return (int *)Warning("ERROR: Grenade_Pathfollower (%s) with no pathcorner!\n", v38);
  }
  return result;
}
