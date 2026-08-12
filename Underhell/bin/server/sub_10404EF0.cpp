void __thiscall sub_10404EF0(int this, _DWORD *a2, float *a3, float *a4)
{
  unsigned int v5; // eax
  int *v6; // ecx
  int v7; // edi
  int v8; // eax
  int v9; // eax
  double v10; // st7
  float *v11; // eax
  char *v12; // eax
  int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  int v16; // ecx
  char ***v17; // ecx
  char **v18; // ebx
  double v19; // st7
  bool v20; // c0
  bool v21; // c3
  double v22; // st7
  double v23; // st7
  bool v24; // c0
  float *v25; // eax
  int v27; // ecx
  double v28; // st7
  float *v29; // edi
  double v30; // st4
  float *v31; // eax
  double v32; // st7
  float *v33; // eax
  float *v34; // eax
  double v35; // st6
  double v36; // st7
  double v37; // st5
  double v38; // st7
  float v39; // [esp+10h] [ebp-64h]
  float v40; // [esp+10h] [ebp-64h]
  float v41; // [esp+14h] [ebp-60h]
  float v42; // [esp+18h] [ebp-5Ch]
  float v43; // [esp+1Ch] [ebp-58h]
  float *v44; // [esp+20h] [ebp-54h]
  float v45; // [esp+30h] [ebp-44h] BYREF
  float v46; // [esp+34h] [ebp-40h]
  float v47; // [esp+3Ch] [ebp-38h] BYREF
  float v48; // [esp+40h] [ebp-34h]
  float v49; // [esp+48h] [ebp-2Ch]
  float v50; // [esp+4Ch] [ebp-28h]
  int v51; // [esp+54h] [ebp-20h] BYREF
  float v52; // [esp+58h] [ebp-1Ch]
  float v53; // [esp+5Ch] [ebp-18h]
  int v54; // [esp+60h] [ebp-14h] BYREF
  float v55; // [esp+64h] [ebp-10h]
  float v56; // [esp+68h] [ebp-Ch]
  float v57; // [esp+6Ch] [ebp-8h]
  float v58; // [esp+70h] [ebp-4h]
  int v59; // [esp+7Ch] [ebp+8h]
  int v60; // [esp+80h] [ebp+Ch]
  float v61; // [esp+84h] [ebp+10h]

  if ( *(_BYTE *)(this + 2144) )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    *a3 = *(float *)(this + 580);
    a3[1] = *(float *)(this + 584);
    a3[2] = *(float *)(this + 588);
    *a4 = 0.0;
    *(float *)(this + 2148) = 0.0;
    return;
  }
  if ( *(_DWORD *)(this + 2156) )
  {
    v5 = *(_DWORD *)(this + 2152);
    if ( v5 == -1
      || (v6 = &off_1061BE18[4 * (*(_DWORD *)(this + 2152) & 0xFFF) + 1],
          off_1061BE18[4 * (*(_DWORD *)(this + 2152) & 0xFFF) + 2] != v5 >> 12)
      || !*v6 )
    {
      v7 = sub_10403EA0(a2);
      if ( v7 )
      {
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        v8 = (*(int (__thiscall **)(int, float *, int, _DWORD))(*(_DWORD *)v7 + 520))(v7, &v47, this + 580, 0);
        v51 = *(int *)v8;
        v52 = *(float *)(v8 + 4);
        v53 = *(float *)(v8 + 8);
        v9 = (*(int (__thiscall **)(int, float *))(*(_DWORD *)v7 + 536))(v7, &v47);
        v54 = *(int *)v9;
        v55 = *(float *)(v9 + 4);
        v10 = *(float *)(v9 + 8);
      }
      else
      {
        v11 = sub_10404520((int)a2, &v47);
        v51 = *(int *)v11;
        v52 = v11[1];
        v53 = v11[2];
        *(float *)&v54 = flt_106F1CA8;
        v55 = flt_106F1CAC;
        v10 = flt_106F1CB0;
      }
      v12 = *(char **)(this + 2156);
      v56 = v10;
      if ( !v12 )
        v12 = (char *)String;
      v13 = sub_10404A10(this, v12, (float *)&v51, (float *)&v54);
      if ( v13 )
        *(_DWORD *)(this + 2152) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v13 + 8))(v13);
      else
        *(_DWORD *)(this + 2152) = -1;
    }
  }
  v14 = *(_DWORD *)(this + 2152);
  if ( v14 != -1
    && off_1061BE18[4 * (*(_DWORD *)(this + 2152) & 0xFFF) + 2] == v14 >> 12
    && off_1061BE18[4 * (*(_DWORD *)(this + 2152) & 0xFFF) + 1] )
  {
    v58 = *(float *)(this + 2152);
  }
  else
  {
    v15 = a2[223];
    if ( v15 != -1
      && off_1061BE18[4 * (a2[223] & 0xFFF) + 2] == v15 >> 12
      && (v16 = off_1061BE18[4 * (a2[223] & 0xFFF) + 1]) != 0 )
    {
      v58 = *(float *)(*(int (__thiscall **)(int))(*(_DWORD *)v16 + 8))(v16);
    }
    else
    {
      v58 = NAN;
    }
  }
  if ( v58 == NAN
    || (v17 = (char ***)&off_1061BE18[4 * (LOWORD(v58) & 0xFFF) + 1],
        off_1061BE18[4 * (LOWORD(v58) & 0xFFF) + 2] != LODWORD(v58) >> 12)
    || (v18 = *v17) == 0 )
  {
    sub_104047B0(this, (int)a2, a3, a4);
    *(float *)(this + 2148) = *a4;
    return;
  }
  if ( v18[23] == "npc_bullseye" || sub_100D6240(v18, "npc_bullseye") )
  {
    if ( 0.125 != *(float *)(this + 2148) )
    {
      if ( *(float *)(this + 2148) <= 0.125 )
      {
        v23 = sub_1025EEC0() * 0.0099999998 + *(float *)(this + 2148);
        *(float *)(this + 2148) = v23;
        v24 = v23 > 0.125;
        v22 = 0.125;
        if ( !v24 )
          goto LABEL_39;
        goto LABEL_37;
      }
      v19 = *(float *)(this + 2148) - sub_1025EEC0() * 0.0099999998;
      *(float *)(this + 2148) = v19;
      v20 = v19 > 0.125;
      v21 = 0.125 == v19;
      v22 = 0.125;
      if ( !v20 && !v21 )
LABEL_37:
        *(float *)(this + 2148) = v22;
    }
LABEL_39:
    *a4 = *(float *)(this + 2148);
    v25 = (float *)(*((int (__thiscall **)(char **))*v18 + 144))(v18);
    *a3 = *v25;
    a3[1] = v25[1];
    a3[2] = v25[2];
    return;
  }
  sub_10404730((int)a2, (float *)&v54);
  *a4 = 0.1;
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  (*((void (__thiscall **)(char **, float *, int, _DWORD))*v18 + 130))(v18, &v45, this + 580, 0);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  sub_10404080(this, (float *)(this + 580), (int)v18, (float *)&v51);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v47 = *(float *)(this + 580) - v45;
  v48 = *(float *)(this + 584) - v46;
  v49 = *(float *)&v54 - v45;
  v50 = v55 - v46;
  *a3 = *(float *)&v51;
  a3[1] = v52;
  a3[2] = v53;
  v27 = dword_106B31C8;
  v28 = *(float *)(dword_106B31C8 + 12) - *(float *)(this + 2140);
  v57 = v28;
  if ( v28 <= 0.2 )
  {
    v29 = a4;
    v38 = 0.0;
  }
  else
  {
    if ( 0.0 == *(float *)(this + 2136) )
    {
      *(float *)&v59 = 1000.0;
      v58 = 1750.0;
      v31 = (float *)sub_10019640((_DWORD *)this);
      *(float *)&v51 = *v31 - *a3;
      v52 = v31[1] - a3[1];
      v32 = v31[2] - a3[2];
      v53 = v32;
      if ( v32 <= 250.0 )
      {
        *(float *)(this + 2136) = *(float *)(dword_106B31C8 + 12);
      }
      else
      {
        if ( v32 > 550.0 )
          v32 = 550.0;
        *(float *)&v60 = v32;
        v53 = 0.0;
        if ( off_10689714() > 2000.0 )
        {
          v33 = (float *)sub_10019640((_DWORD *)this);
          *(float *)&v54 = *v33 - *(float *)&v51 * 2000.0;
          v55 = v33[1] - 2000.0 * v52;
          v56 = a3[2];
          v43 = sub_102191B0(*(float *)&v60, 250.0, 550.0, 0.0, 1.0);
          sub_100E8670(a3, (float *)&v54, v43, a3);
        }
      }
      v29 = a4;
    }
    else
    {
      v29 = a4;
      *a4 = 0.025;
      v30 = *(float *)(v27 + 12) - *(float *)(this + 2136);
      if ( v30 <= 0.2 )
      {
        if ( v30 < 0.0 )
          v30 = 0.0;
      }
      else
      {
        v30 = 0.2;
      }
      v61 = v30;
      v39 = v30;
      *v29 = sub_102191B0(v39, 0.0, 0.2, 0.2, 0.025);
      *(float *)&v59 = sub_102191B0(v61, 0.0, 0.2, 1000.0, 1250.0);
      v58 = sub_102191B0(v61, 0.0, 0.2, 1750.0, 2250.0);
    }
    if ( v57 > 0.60000002 )
    {
      v44 = (float *)(*((int (__thiscall **)(char **))*v18 + 144))(v18);
      v34 = (float *)sub_10019640((_DWORD *)this);
      sub_1004BCD0(v34, v44);
      v35 = v58;
      if ( v58 >= 0.60000002 )
      {
        if ( *(float *)&v59 <= 0.60000002 )
        {
          v36 = v58;
          v37 = *(float *)&v59;
          v35 = 0.60000002;
        }
        else
        {
          v35 = *(float *)&v59;
          v37 = *(float *)&v59;
          v36 = v58;
        }
      }
      else
      {
        v36 = v58;
        v37 = *(float *)&v59;
      }
      v42 = v37;
      v41 = v36;
      v40 = v35;
      *v29 = sub_102191B0(v40, v41, v42, *v29, 0.0099999998);
    }
    v38 = 0.0;
  }
  if ( v50 * v48 + v49 * v47 < v38 || *(_BYTE *)(this + 2144) )
  {
    *v29 = v38;
    *(float *)(this + 2148) = *v29;
  }
  else
  {
    *(float *)(this + 2148) = *v29;
  }
}
