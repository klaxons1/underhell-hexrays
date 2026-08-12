char __thiscall sub_10192F90(int this)
{
  int v2; // eax
  int v3; // ebx
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // edi
  double v8; // st7
  double v9; // st6
  float *v10; // edi
  double v11; // st7
  double v12; // st6
  double v13; // rt0
  int v14; // ecx
  float *v15; // edi
  double v16; // st5
  double v17; // st7
  double v18; // st5
  int v19; // eax
  double v20; // st7
  int v21; // ecx
  int v22; // ecx
  double v23; // st7
  double v24; // st6
  double v25; // st7
  int v26; // edx
  char *v27; // eax
  char *v28; // edx
  char v29; // cl
  __int16 v30; // bx
  int v31; // eax
  int v32; // ecx
  int v33; // ebx
  float *v34; // edi
  double i; // st7
  double v36; // st5
  double v37; // rt1
  double v38; // rt2
  double v39; // st5
  double v40; // st7
  double v41; // st5
  float *v42; // ecx
  double v43; // st7
  float *v44; // ecx
  float *v45; // ecx
  float v47; // [esp+1Ch] [ebp-19Ch]
  char v48[80]; // [esp+2Ch] [ebp-18Ch] BYREF
  char Buffer[80]; // [esp+7Ch] [ebp-13Ch] BYREF
  _BYTE v50[80]; // [esp+CCh] [ebp-ECh] BYREF
  float v51; // [esp+11Ch] [ebp-9Ch] BYREF
  float v52[3]; // [esp+120h] [ebp-98h] BYREF
  float v53[3]; // [esp+12Ch] [ebp-8Ch] BYREF
  float v54[3]; // [esp+138h] [ebp-80h] BYREF
  float v55[3]; // [esp+144h] [ebp-74h] BYREF
  float v56[3]; // [esp+150h] [ebp-68h] BYREF
  float v57[3]; // [esp+15Ch] [ebp-5Ch] BYREF
  float v58[3]; // [esp+168h] [ebp-50h] BYREF
  int v59; // [esp+174h] [ebp-44h]
  float v60; // [esp+178h] [ebp-40h] BYREF
  float v61; // [esp+17Ch] [ebp-3Ch]
  float v62; // [esp+180h] [ebp-38h]
  float v63; // [esp+184h] [ebp-34h] BYREF
  float v64; // [esp+188h] [ebp-30h]
  float v65; // [esp+18Ch] [ebp-2Ch]
  float v66; // [esp+190h] [ebp-28h] BYREF
  float v67; // [esp+194h] [ebp-24h]
  float v68; // [esp+198h] [ebp-20h]
  float v69; // [esp+19Ch] [ebp-1Ch]
  float v70; // [esp+1A0h] [ebp-18h] BYREF
  float v71; // [esp+1A4h] [ebp-14h]
  float v72; // [esp+1A8h] [ebp-10h]
  float v73; // [esp+1ACh] [ebp-Ch] BYREF
  float v74; // [esp+1B0h] [ebp-8h]
  float v75; // [esp+1B4h] [ebp-4h]
  int savedregs; // [esp+1B8h] [ebp+0h] BYREF

  v2 = sub_1025FC50();
  v3 = 0;
  v59 = v2;
  if ( v2 )
  {
    if ( *(_DWORD *)(dword_106B8424 + 48) )
    {
      v4 = *(_DWORD *)(this + 1088);
      if ( v4 )
      {
        v69 = 0.0;
        if ( *(_BYTE *)(v4 + 476) )
        {
          do
          {
            v5 = *(_DWORD *)(this + 1088);
            v6 = *(_DWORD *)(v3 + v5 + 172);
            v7 = v3 + v5 + 156;
            if ( v6 > 3 )
            {
              v10 = *(float **)v7;
              v11 = v10[7];
              v66 = v10[7];
              v67 = v10[8];
              v12 = v10[9];
              v68 = v10[9];
              v13 = v12;
              v9 = v11;
              v8 = v13;
            }
            else
            {
              sub_1018B0A0(*(float **)v7, *(float **)(v3 + v5 + 168), v6, &v66, &v51);
              v8 = sub_1018AD70((float *)*(_DWORD *)(v7 + 12), &v66);
              v68 = v8;
              v9 = v66;
            }
            v57[0] = v9 + 10.0;
            v57[1] = v67;
            v56[1] = v67;
            v57[2] = v8;
            v56[0] = v9;
            v56[2] = v8 + 50.0;
            sub_10191A10((int)v56, (int)v57, 14);
            v58[0] = v66 - 10.0;
            v58[1] = v67;
            v58[2] = v68;
            v55[0] = v66;
            v55[1] = v67;
            v55[2] = v68 + 50.0;
            sub_10191A10((int)v55, (int)v58, 14);
            v52[0] = v66;
            v52[1] = v67 + 10.0;
            v52[2] = v68;
            v53[0] = v66;
            v53[1] = v67;
            v53[2] = v68 + 50.0;
            sub_10191A10((int)v53, (int)v52, 14);
            v70 = v66;
            v71 = v67 - 10.0;
            v72 = v68;
            v73 = v66;
            v74 = v67;
            v75 = v68 + 50.0;
            sub_10191A10((int)&v73, (int)&v70, 14);
            v14 = *(_DWORD *)(this + 1088);
            ++LODWORD(v69);
            v3 += 20;
          }
          while ( SLODWORD(v69) < *(unsigned __int8 *)(v14 + 476) );
        }
      }
    }
    sub_101922E0(&v63, (int)v54);
    v60 = v54[0] * 1000.0 + v63;
    v61 = v54[1] * 1000.0 + v64;
    v62 = 1000.0 * v54[2] + v65;
    LOBYTE(v2) = sub_10192560(this, (int)&savedregs);
    if ( (_BYTE)v2 )
    {
      v15 = (float *)(this + 1076);
      if ( *(_BYTE *)(this + 1128) )
      {
        sub_1011C120(this + 1076, 10.0, 0, 255, 0, 1, 0.1);
      }
      else
      {
        v73 = *v15;
        v74 = *(float *)(this + 1080);
        v75 = *(float *)(this + 1084) + 10.0;
        sub_10191A10((int)&v73, this + 1076, 17);
        v73 = *v15 - 10.0;
        v74 = *(float *)(this + 1080);
        v16 = *(float *)(this + 1084);
        v75 = *(float *)(this + 1084);
        v70 = *v15 + 10.0;
        v71 = v74;
        v72 = v16;
        sub_10191A10((int)&v70, (int)&v73, 17);
        v17 = *v15;
        v73 = *v15;
        v74 = *(float *)(this + 1080) - 10.0;
        v18 = *(float *)(this + 1084);
        v75 = *(float *)(this + 1084);
        v70 = v17;
        v71 = *(float *)(this + 1080) + 10.0;
        v72 = v18;
        sub_10191A10((int)&v70, (int)&v73, 17);
      }
      if ( *(_DWORD *)(this + 1124) == 1 )
      {
        v69 = *(float *)(this + 1112) + 2.0;
        v73 = *(float *)(this + 1104);
        v74 = *(float *)(this + 1080);
        v75 = v69;
        v70 = *v15;
        v71 = *(float *)(this + 1080);
        v72 = v69;
        sub_10191A10((int)&v70, (int)&v73, 19);
        v73 = *(float *)(this + 1104);
        v74 = *(float *)(this + 1080);
        v75 = v69;
        v70 = *(float *)(this + 1104);
        v71 = *(float *)(this + 1108);
        v72 = v69;
        sub_10191A10((int)&v70, (int)&v73, 19);
        v73 = *v15;
        v74 = *(float *)(this + 1108);
        v75 = v69;
        v70 = *(float *)(this + 1104);
        v71 = *(float *)(this + 1108);
        v72 = v69;
        sub_10191A10((int)&v70, (int)&v73, 19);
        v73 = *v15;
        v74 = *(float *)(this + 1108);
        v75 = v69;
        v70 = *v15;
        v71 = *(float *)(this + 1080);
        v72 = v69;
        sub_10191A10((int)&v70, (int)&v73, 19);
      }
      else if ( *(_BYTE *)(this + 1168) )
      {
        v73 = *v15;
        v74 = *(float *)(this + 1080);
        v75 = *(float *)(this + 1152);
        sub_10191A10(this + 1076, (int)&v73, 19);
        v73 = *v15;
        v74 = *(float *)(this + 1080);
        v75 = *(float *)(this + 1152);
        sub_10191A10((int)&v73, this + 1144, 19);
        v73 = *(float *)(this + 1144);
        v74 = *(float *)(this + 1148);
        v75 = *(float *)(this + 1084);
        sub_10191A10(this + 1144, (int)&v73, 19);
        v73 = *(float *)(this + 1144);
        v74 = *(float *)(this + 1148);
        v75 = *(float *)(this + 1084);
        sub_10191A10((int)&v73, this + 1076, 19);
      }
      v19 = *(_DWORD *)(this + 1172);
      if ( v19 )
      {
        *(_DWORD *)(this + 1096) = 0;
        if ( v19 != *(_DWORD *)(this + 1176) || *(_DWORD *)(dword_106B7BBC + 48) )
        {
          *(_DWORD *)(this + 1176) = v19;
          sub_10429A00(Buffer, 0x50u, "Ladder #%d\n", *(_DWORD *)(v19 + 68));
          if ( *(_DWORD *)(dword_106B7BBC + 48) )
            v20 = 0.1;
          else
            v20 = 0.5;
          v47 = v20;
          sub_1011BAD0(0.5, 0.52999997, (int)Buffer, 255, 255, 0, 128, v47);
        }
        sub_1019C610(*(_DWORD *)(this + 1172));
        sub_1019D100(*(_DWORD *)(this + 1172));
      }
      v21 = *(_DWORD *)(this + 1180);
      if ( v21 && *(_DWORD *)(this + 1124) != 4 )
        sub_1019C610(v21);
      v22 = *(_DWORD *)(this + 1088);
      if ( v22 && *(_DWORD *)(this + 1124) != 4 )
        sub_1018C090(v22);
      v2 = *(_DWORD *)(this + 1092);
      if ( v2 )
      {
        *(_DWORD *)(this + 1176) = 0;
        if ( v2 != *(_DWORD *)(this + 1096) )
        {
          v69 = *(float *)(dword_106B7BBC + 44);
          v23 = sub_10264FF0(this + 1184);
          v24 = v23 + v69;
          v25 = v69;
          *(float *)(this + 1188) = v24;
          *(float *)(this + 1184) = v25;
          *(_DWORD *)(this + 1096) = *(_DWORD *)(this + 1092);
        }
        if ( *(float *)(this + 1188) <= 0.0 || sub_10264FF0(this + 1184) > *(float *)(this + 1188) )
          goto LABEL_75;
        v26 = *(_DWORD *)(this + 1092);
        if ( *(_DWORD *)(v26 + 44) )
        {
          v27 = (char *)sub_1019D450(*(_DWORD *)(v26 + 44));
          if ( v27 )
          {
            v28 = (char *)(Buffer - v27);
            do
            {
              v29 = *v27;
              v27[(_DWORD)v28] = *v27;
              ++v27;
            }
            while ( v29 );
          }
          else
          {
            strcpy(Buffer, "ERROR");
          }
        }
        else
        {
          Buffer[0] = 0;
        }
        v50[0] = 0;
        if ( *(_DWORD *)(this + 1124) != 4 )
        {
          v30 = *(_WORD *)(*(_DWORD *)(this + 1092) + 40);
          if ( (v30 & 1) != 0 )
            sub_10429750((int)v50, "CROUCH ", 80, -1);
          if ( (v30 & 2) != 0 )
            sub_10429750((int)v50, "JUMP ", 80, -1);
          if ( (v30 & 4) != 0 )
            sub_10429750((int)v50, "PRECISE ", 80, -1);
          if ( (v30 & 8) != 0 )
            sub_10429750((int)v50, "NO_JUMP ", 80, -1);
          if ( (v30 & 0x10) != 0 )
            sub_10429750((int)v50, "STOP ", 80, -1);
          if ( (v30 & 0x20) != 0 )
            sub_10429750((int)v50, "RUN ", 80, -1);
          if ( (v30 & 0x40) != 0 )
            sub_10429750((int)v50, "WALK ", 80, -1);
          if ( (v30 & 0x80u) != 0 )
            sub_10429750((int)v50, "AVOID ", 80, -1);
          if ( (v30 & 0x100) != 0 )
            sub_10429750((int)v50, "TRANSIENT ", 80, -1);
          if ( (v30 & 0x200) != 0 )
            sub_10429750((int)v50, "DONT_HIDE ", 80, -1);
          if ( (v30 & 0x400) != 0 )
            sub_10429750((int)v50, "STAND ", 80, -1);
          if ( (v30 & 0x800) != 0 )
            sub_10429750((int)v50, "NO HOSTAGES ", 80, -1);
          if ( *(_BYTE *)(*(_DWORD *)(this + 1092) + 48) )
            sub_10429750((int)v50, "BLOCKED ", 80, -1);
          if ( *(_BYTE *)(*(_DWORD *)(this + 1092) + 49) )
            sub_10429750((int)v50, "UNDERWATER ", 80, -1);
        }
        sub_10429A00(v48, 0x50u, "Area #%d %s %s\n", **(_DWORD **)(this + 1092));
        sub_1011BAD0(0.5, 0.52999997, (int)v48, 255, 255, 0, 128, 0.1);
        if ( !*(_BYTE *)(this + 1116)
          || (v31 = *(_DWORD *)(this + 1092), v32 = *(_DWORD *)(dword_106B8370 + 1068), *(_DWORD *)(v31 + 44) == v32) )
        {
LABEL_75:
          v33 = v59;
        }
        else
        {
          v33 = v59;
          *(_DWORD *)(v31 + 44) = v32;
          sub_1023C380((int)"Bot.EditSwitchOn", 0.0, 0);
        }
        if ( *(_DWORD *)(this + 1124) != 4 )
        {
          v34 = *(float **)(this + 1092);
          for ( i = *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)v33 + 508))(v33) + 4); i > 360.0; i = i - 360.0 )
            ;
          v36 = 0.0;
          if ( i < 0.0 )
          {
            while ( 1 )
            {
              v38 = v36;
              v39 = i;
              v40 = v38;
              v41 = v39 + 360.0;
              if ( v41 >= v38 )
                break;
              v37 = v41;
              v36 = v40;
              i = v37;
            }
          }
          if ( *(_BYTE *)(this + 1117) )
          {
            v63 = v34[1];
            v42 = *(float **)(this + 1092);
            v64 = *(float *)(this + 1120);
            v65 = sub_1018AD70(v42, &v63);
            v60 = v34[4];
            v43 = *(float *)(this + 1120);
          }
          else
          {
            v44 = *(float **)(this + 1092);
            v63 = *(float *)(this + 1120);
            v64 = v34[2];
            v65 = sub_1018AD70(v44, &v63);
            v60 = *(float *)(this + 1120);
            v43 = v34[5];
          }
          v45 = *(float **)(this + 1092);
          v61 = v43;
          v62 = sub_1018AD70(v45, &v60);
          sub_10191A10((int)&v63, (int)&v60, 18);
        }
        LOBYTE(v2) = sub_1018D1E0(*(float **)(this + 1092));
      }
    }
  }
  return v2;
}
