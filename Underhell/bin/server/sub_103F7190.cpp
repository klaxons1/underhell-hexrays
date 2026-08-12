char __thiscall sub_103F7190(float *this, int a2)
{
  int v3; // eax
  float *v4; // edi
  int v5; // eax
  float v6; // edx
  float v7; // eax
  unsigned int v8; // eax
  int *v9; // ecx
  unsigned int v10; // eax
  int v11; // ecx
  char *v12; // eax
  unsigned int v13; // ecx
  int *v14; // eax
  unsigned int v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  unsigned int v20; // eax
  int v21; // eax
  int v22; // ecx
  int v23; // edx
  float *v24; // eax
  float *v25; // edi
  bool v26; // zf
  int v27; // edx
  float v28; // ecx
  unsigned int v29; // eax
  int v30; // eax
  float *v31; // eax
  double v32; // st6
  int v33; // edx
  _DWORD *v34; // eax
  float *v35; // eax
  _DWORD *v36; // eax
  int v37; // edi
  _DWORD *v38; // eax
  float *v40; // [esp-10h] [ebp-174h]
  float *v41; // [esp-10h] [ebp-174h]
  int v42; // [esp-Ch] [ebp-170h]
  int v43; // [esp-Ch] [ebp-170h]
  float v44; // [esp+8h] [ebp-15Ch]
  float v45; // [esp+Ch] [ebp-158h]
  float v46; // [esp+Ch] [ebp-158h]
  float v47[3]; // [esp+20h] [ebp-144h] BYREF
  _BYTE v48[12]; // [esp+2Ch] [ebp-138h] BYREF
  int v49; // [esp+38h] [ebp-12Ch]
  float v50; // [esp+3Ch] [ebp-128h]
  float v51; // [esp+40h] [ebp-124h]
  int v52; // [esp+54h] [ebp-110h]
  float v53; // [esp+58h] [ebp-10Ch]
  int v54; // [esp+78h] [ebp-ECh]
  float v55[4]; // [esp+80h] [ebp-E4h] BYREF
  int v56[4]; // [esp+90h] [ebp-D4h] BYREF
  int v57; // [esp+A0h] [ebp-C4h]
  float v58; // [esp+A4h] [ebp-C0h]
  float v59; // [esp+A8h] [ebp-BCh]
  BOOL v60; // [esp+B4h] [ebp-B0h]
  float v61[3]; // [esp+E0h] [ebp-84h] BYREF
  int v62; // [esp+ECh] [ebp-78h] BYREF
  float v63; // [esp+F0h] [ebp-74h]
  float v64; // [esp+F4h] [ebp-70h]
  float v65; // [esp+F8h] [ebp-6Ch]
  float v66; // [esp+FCh] [ebp-68h]
  float v67; // [esp+100h] [ebp-64h]
  float v68; // [esp+118h] [ebp-4Ch]
  int v69; // [esp+11Ch] [ebp-48h]
  int v70; // [esp+120h] [ebp-44h]
  int v71; // [esp+124h] [ebp-40h]
  __int16 v72; // [esp+128h] [ebp-3Ch]
  int v73; // [esp+12Ch] [ebp-38h]
  int v74; // [esp+130h] [ebp-34h]
  float v75; // [esp+134h] [ebp-30h] BYREF
  float v76; // [esp+138h] [ebp-2Ch]
  float v77; // [esp+13Ch] [ebp-28h]
  int v78; // [esp+140h] [ebp-24h] BYREF
  float v79; // [esp+144h] [ebp-20h]
  float v80; // [esp+148h] [ebp-1Ch]
  float v81; // [esp+14Ch] [ebp-18h] BYREF
  int v82; // [esp+150h] [ebp-14h]
  int v83; // [esp+154h] [ebp-10h]
  int v84; // [esp+158h] [ebp-Ch] BYREF
  float v85; // [esp+15Ch] [ebp-8h]
  float v86; // [esp+160h] [ebp-4h]
  int savedregs; // [esp+164h] [ebp+0h] BYREF
  int v88; // [esp+16Ch] [ebp+8h]

  if ( (*(_BYTE *)(a2 + 356) & 0x28) == 0 || (LOBYTE(v3) = *(_BYTE *)(a2 + 225), (unsigned __int8)v3 >= 2u) )
  {
    if ( *(_BYTE *)(a2 + 225) )
    {
      v4 = (float *)sub_101C46A0();
      sub_10079DC0(v61, (int)v4);
      v68 = v4[14];
      v69 = *((_DWORD *)v4 + 15);
      v70 = *((_DWORD *)v4 + 16);
      v71 = *((_DWORD *)v4 + 17);
      v72 = *((_WORD *)v4 + 36);
      v5 = *((_DWORD *)this + 63);
      v73 = *((_DWORD *)v4 + 19);
      v74 = *((_DWORD *)v4 + 20);
      if ( (v5 & 0x1000) != 0 )
        sub_100DAFD0((int)this);
      v6 = this[120];
      v7 = this[121];
      v78 = *((int *)this + 119);
      v79 = v6;
      v80 = v7;
      sub_10247FD0();
      off_10689714();
      v8 = *((_DWORD *)this + 103);
      if ( v8 != -1 )
      {
        v9 = &off_1061BE18[4 * ((_DWORD)this[103] & 0xFFF) + 1];
        v10 = v8 >> 12;
        if ( off_1061BE18[4 * ((_DWORD)this[103] & 0xFFF) + 2] == v10 )
        {
          if ( *v9 )
          {
            v11 = off_1061BE18[4 * ((_DWORD)this[103] & 0xFFF) + 2] == v10 ? *v9 : 0;
            if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v11 + 320))(v11)
              && (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 220))(a2) == 3 )
            {
              v12 = *(char **)(dword_106B31C8 + 60);
              if ( !v12 )
                v12 = (char *)String;
              if ( sub_10043F40(v12, "ep2_outland_10") )
              {
                LOBYTE(v3) = (*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 76))(this, a2);
                return v3;
              }
            }
          }
        }
      }
      v13 = *((_DWORD *)this + 103);
      if ( v13 != -1
        && (v14 = &off_1061BE18[4 * ((_DWORD)this[103] & 0xFFF) + 1],
            v15 = v13 >> 12,
            off_1061BE18[4 * ((_DWORD)this[103] & 0xFFF) + 2] == v15)
        && *v14
        && (off_1061BE18[4 * ((_DWORD)this[103] & 0xFFF) + 2] != v15 ? (v16 = 0) : (v16 = *v14),
            (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v16 + 320))(v16)
         && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 284))(a2)) )
      {
        v44 = *(float *)(dword_106DF8F4 + 44);
        v17 = sub_10019B00(this);
        sub_10248110((int)v56, (int)this, v17, v44, 4096, 0);
        sub_10247F80((float *)v56);
        sub_10248690((float *)v56, (float *)&v78, (float *)&v62, 0.69999999);
        v57 = v62;
        v58 = v63;
        v59 = v64;
        sub_100E8760((void *)a2, (int)v56, (int)&v78, (int)v61);
        v18 = sub_10019B00(this);
        v19 = sub_1001F4B0(v18);
        if ( v19 )
          (*(void (__thiscall **)(int, int, int, const char *, int *))(*(_DWORD *)off_10627F88 + 120))(
            off_10627F88,
            v19,
            1,
            "weapon_crossbow",
            v56);
      }
      else
      {
        v20 = *((_DWORD *)this + 103);
        if ( v20 == -1 || off_1061BE18[4 * ((_DWORD)this[103] & 0xFFF) + 2] != v20 >> 12 )
          v21 = 0;
        else
          v21 = off_1061BE18[4 * ((_DWORD)this[103] & 0xFFF) + 1];
        sub_10248110((int)v56, (int)this, v21, *(float *)(dword_106DF8F4 + 44), 4098, 0);
        sub_10248690((float *)v56, (float *)&v78, (float *)&v62, 0.69999999);
        v57 = v62;
        v58 = v63;
        v59 = v64;
        sub_100E8760((void *)a2, (int)v56, (int)&v78, (int)v61);
      }
      LOBYTE(v3) = sub_10248230();
      if ( *(_DWORD *)(a2 + 420) != 6 )
      {
        if ( *(char **)(a2 + 92) != "func_breakable"
          && (LOBYTE(v3) = sub_100D6240((_DWORD *)a2, "func_breakable"), !(_BYTE)v3)
          || *(_DWORD *)(a2 + 812) )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 264))(a2)
            || (v3 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF8 + 20))(dword_106BAFF8, (__int16)v70),
                *(_WORD *)(v3 + 72) != 89) )
          {
            *(float *)&v84 = 0.0;
            v85 = 0.0;
            v86 = 0.0;
            sub_100DD660((int)this, (float *)&v84);
            sub_1023C380(this, (int)"Weapon_Crossbow.BoltHitBody", 0.0, 0);
            if ( ((_DWORD)this[63] & 0x800) != 0 )
              sub_100DAE60((int)this);
            sub_10422220(this + 176, &v81);
            off_10689714();
            v22 = *((_DWORD *)this + 63) >> 11;
            *(float *)&v84 = v81 * 128.0;
            v85 = *(float *)&v82 * 128.0;
            v86 = 128.0 * *(float *)&v83;
            if ( (v22 & 1) != 0 )
              sub_100DAE60((int)this);
            v23 = *((_DWORD *)this + 63) >> 11;
            v75 = this[145] + *(float *)&v84;
            v76 = this[146] + v85;
            v77 = this[147] + v86;
            if ( (v23 & 1) != 0 )
              sub_100DAE60((int)this);
            sub_1002A5F0((int)&savedregs, (int)this, this + 145, &v75, 16449, a2, 0, (int)v48);
            if ( 1.0 != v53 && (!v54 || !*(_BYTE *)(v54 + 306)) )
            {
              sub_1001F130(v55);
              v55[0] = *(float *)&v49;
              v55[1] = v50;
              v55[2] = v51;
              *(float *)&v56[2] = v81;
              v56[3] = v82;
              v57 = v83;
              v60 = 1.0 != v53;
              sub_1028E890((int)"BoltImpact", (int)v55);
            }
            if ( *(_DWORD *)(dword_106EF8D4 + 48) )
            {
              v42 = sub_10019B00(this);
              v40 = (float *)sub_1001F410(this);
              v24 = (float *)sub_10019640(this);
              sub_1013D530(v24, v40, v42, 100, 128, 1, 1064.0, 1, 1, -1);
            }
            this[49] = 0.0;
            sub_100EC3F0(this, 0, 0.0, 0);
            if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 132))(dword_106B3CDC) )
              goto LABEL_74;
            goto LABEL_73;
          }
        }
      }
    }
    else
    {
      v25 = (float *)sub_101C46A0();
      sub_10079DC0(v61, (int)v25);
      v26 = *(_DWORD *)(a2 + 92) == (_DWORD)"func_breakable_surf";
      v68 = v25[14];
      v69 = *((_DWORD *)v25 + 15);
      v70 = *((_DWORD *)v25 + 16);
      v71 = *((_DWORD *)v25 + 17);
      v72 = *((_WORD *)v25 + 36);
      v73 = *((_DWORD *)v25 + 19);
      v74 = *((_DWORD *)v25 + 20);
      if ( !v26 && !sub_100D6240((_DWORD *)a2, "func_breakable_surf") )
      {
        if ( *(_BYTE *)(a2 + 306) )
        {
          if ( (v70 & 0x40000) == 0 )
            sub_10262ED0((int)v61, 2, 0);
        }
        else if ( (v70 & 0x40000) == 0 )
        {
          sub_1023C380(this, (int)"Weapon_Crossbow.BoltHitWorld", 0.0, 0);
          v31 = (float *)sub_10019660(this);
          v81 = *v31;
          v82 = *((int *)v31 + 1);
          v83 = *((int *)v31 + 2);
          *(float *)&v88 = off_10689714();
          v32 = -v81 * v65 + -*(float *)&v82 * v66 + -*(float *)&v83 * v67;
          if ( v32 >= 0.5 || *(float *)&v88 <= 100.0 )
          {
            sub_100EC3F0(this, (int)sub_10246D70, 0.0, 0);
            v45 = *(float *)(dword_106B31C8 + 12) + 2.0;
            sub_100EC4A0((int *)this, v45, 0);
            sub_100E0970((int)this, v33, 0, 0);
            v34 = sub_1001F410(this);
            sub_10422220(v34, &v84);
            off_10689714();
            sub_1001F130(v47);
            v47[0] = *(float *)&v62;
            v47[1] = v63;
            v52 = 0;
            v47[2] = v64;
            v49 = v84;
            v50 = v85;
            v51 = v86;
            sub_1028E890((int)"BoltImpact", (int)v47);
            sub_10262ED0((int)v61, 2, 0);
            sub_100EAB80(this, 32);
            this[49] = 0.0;
            sub_100EC3F0(this, (int)sub_10246D70, 0.0, 0);
            v46 = *(float *)(dword_106B31C8 + 12) + 2.0;
            sub_100EC4A0((int *)this, v46, 0);
            if ( *(_DWORD *)(dword_106EF8D4 + 48) )
            {
              v43 = sub_10019B00(this);
              v41 = (float *)sub_1001F410(this);
              v35 = (float *)sub_10019640(this);
              sub_1013D530(v35, v41, v43, 100, 128, 1, 1064.0, 1, 1, -1);
            }
          }
          else
          {
            *(float *)&v78 = v81 + v65 * 2.0 * v32;
            v79 = *(float *)&v82 + v66 * 2.0 * v32;
            v80 = *(float *)&v83 + v32 * (2.0 * v67);
            sub_10422540(&v78, &v84);
            sub_100E11A0((int)this, (float *)&v84);
            v75 = *(float *)&v78 * *(float *)&v88 * 0.75;
            v76 = v79 * *(float *)&v88 * 0.75;
            v77 = 0.75 * (*(float *)&v88 * v80);
            sub_100DD660((int)this, &v75);
            this[138] = 1.0;
          }
          v36 = sub_10019640(this);
          if ( (**(int (__thiscall ***)(int, _DWORD *, _DWORD))dword_106B31F4)(dword_106B31F4, v36, 0) != 32 )
          {
            v37 = (int)*off_1061B7A0;
            v38 = sub_10019640(this);
            (*(void (__thiscall **)(int (__stdcall ***)(char), _DWORD *, int, int, _DWORD))(v37 + 12))(
              off_1061B7A0,
              v38,
              1,
              1,
              0);
          }
          goto LABEL_74;
        }
LABEL_73:
        sub_1025FAC0((int)this);
LABEL_74:
        LOBYTE(v3) = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 132))(dword_106B3CDC);
        return v3;
      }
      if ( ((_DWORD)this[63] & 0x1000) != 0 )
        sub_100DAFD0((int)this);
      v27 = *((int *)this + 119);
      v28 = this[121];
      v85 = this[120];
      v29 = *((_DWORD *)this + 103);
      v84 = v27;
      v86 = v28;
      if ( v29 == -1 || off_1061BE18[4 * (v29 & 0xFFF) + 2] != v29 >> 12 )
        v30 = 0;
      else
        v30 = off_1061BE18[4 * (v29 & 0xFFF) + 1];
      sub_10248110((int)v56, (int)this, v30, *(float *)(dword_106DF8F4 + 44), 4098, 0);
      sub_10248690((float *)v56, (float *)&v84, (float *)&v62, 0.69999999);
      v57 = v62;
      v58 = v63;
      v59 = v64;
      LOBYTE(v3) = sub_100E8760((void *)a2, (int)v56, (int)&v84, (int)v61);
    }
  }
  return v3;
}
