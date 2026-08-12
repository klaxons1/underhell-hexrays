int __thiscall sub_1018F070(int this, int a2, float *a3)
{
  int result; // eax
  float *v5; // eax
  float v6; // ecx
  double v7; // st7
  float *v8; // ebx
  float v9; // edx
  float v10; // eax
  long double v11; // st7
  int v12; // esi
  int v13; // eax
  int v14; // eax
  float *v15; // esi
  float *v16; // ebx
  float *v17; // eax
  double v18; // st7
  double v19; // st6
  bool v20; // zf
  long double v21; // st7
  float v22; // eax
  float v23; // edx
  int (__thiscall *v24)(float *); // eax
  float *v25; // eax
  int v26; // ebx
  double v27; // st7
  int (__thiscall *v28)(int); // eax
  float *v29; // eax
  float v30; // edx
  double v31; // st7
  int (__thiscall *v32)(float *); // eax
  float *v33; // eax
  int (__thiscall *v34)(int); // eax
  float *v35; // eax
  float v36; // edx
  double v37; // st7
  int (__thiscall *v38)(float *); // eax
  float *v39; // eax
  double v40; // st6
  double v41; // st5
  double v42; // st7
  int (__thiscall *v43)(int); // edx
  float *v44; // eax
  float v45; // edx
  double v46; // st7
  int (__thiscall *v47)(float *); // eax
  float *v48; // eax
  double v49; // st6
  double v50; // st4
  double v51; // st3
  int (__thiscall *v52)(int); // eax
  float *v53; // eax
  float v54; // edx
  double v55; // st7
  int (__thiscall *v56)(float *); // eax
  float *v57; // eax
  double v58; // st7
  double v59; // st5
  double v60; // st4
  double v61; // st4
  double v62; // st7
  long double v63; // st7
  long double v64; // st6
  long double v65; // st5
  long double v66; // st4
  long double v67; // st3
  long double v68; // st3
  long double v69; // st3
  long double v70; // st2
  float *v71; // [esp+14h] [ebp-1A0h]
  float v72; // [esp+18h] [ebp-19Ch]
  float v73; // [esp+20h] [ebp-194h]
  float v74; // [esp+28h] [ebp-18Ch]
  float v75[2]; // [esp+30h] [ebp-184h] BYREF
  int v76[6]; // [esp+38h] [ebp-17Ch] BYREF
  int v77; // [esp+50h] [ebp-164h] BYREF
  float v78; // [esp+54h] [ebp-160h] BYREF
  float v79; // [esp+58h] [ebp-15Ch]
  float v80; // [esp+60h] [ebp-154h] BYREF
  float v81; // [esp+64h] [ebp-150h]
  int v82; // [esp+6Ch] [ebp-148h] BYREF
  float v83[3]; // [esp+70h] [ebp-144h] BYREF
  float v84[3]; // [esp+7Ch] [ebp-138h] BYREF
  float v85[3]; // [esp+88h] [ebp-12Ch] BYREF
  float v86[3]; // [esp+94h] [ebp-120h] BYREF
  float v87[3]; // [esp+A0h] [ebp-114h] BYREF
  float v88[3]; // [esp+ACh] [ebp-108h] BYREF
  float v89; // [esp+B8h] [ebp-FCh]
  float v90; // [esp+BCh] [ebp-F8h]
  float v91; // [esp+C0h] [ebp-F4h]
  float v92; // [esp+C4h] [ebp-F0h]
  float v93; // [esp+C8h] [ebp-ECh]
  float v94; // [esp+CCh] [ebp-E8h]
  int v95; // [esp+D0h] [ebp-E4h]
  float v96; // [esp+D4h] [ebp-E0h]
  float v97; // [esp+D8h] [ebp-DCh]
  float v98; // [esp+DCh] [ebp-D8h]
  float v99; // [esp+E0h] [ebp-D4h]
  float v100; // [esp+E4h] [ebp-D0h]
  float v101; // [esp+E8h] [ebp-CCh]
  float v102; // [esp+ECh] [ebp-C8h]
  float v103; // [esp+F0h] [ebp-C4h]
  float v104; // [esp+F4h] [ebp-C0h]
  float v105; // [esp+F8h] [ebp-BCh]
  float v106; // [esp+FCh] [ebp-B8h]
  float v107; // [esp+100h] [ebp-B4h]
  float v108; // [esp+104h] [ebp-B0h] BYREF
  float v109; // [esp+108h] [ebp-ACh]
  float v110; // [esp+10Ch] [ebp-A8h]
  float v111; // [esp+110h] [ebp-A4h] BYREF
  float v112; // [esp+114h] [ebp-A0h]
  float v113; // [esp+118h] [ebp-9Ch]
  float v114; // [esp+11Ch] [ebp-98h]
  float v115; // [esp+120h] [ebp-94h]
  float v116; // [esp+124h] [ebp-90h]
  int v117; // [esp+128h] [ebp-8Ch] BYREF
  float v118; // [esp+12Ch] [ebp-88h]
  float v119; // [esp+130h] [ebp-84h]
  int v120; // [esp+134h] [ebp-80h]
  float v121; // [esp+138h] [ebp-7Ch]
  float v122; // [esp+13Ch] [ebp-78h]
  float v123; // [esp+140h] [ebp-74h] BYREF
  float v124; // [esp+144h] [ebp-70h]
  float v125; // [esp+148h] [ebp-6Ch]
  float v126; // [esp+14Ch] [ebp-68h]
  float v127; // [esp+150h] [ebp-64h]
  float v128; // [esp+154h] [ebp-60h]
  float v129; // [esp+158h] [ebp-5Ch]
  int v130; // [esp+15Ch] [ebp-58h]
  float v131; // [esp+160h] [ebp-54h]
  int v132; // [esp+164h] [ebp-50h]
  float v133; // [esp+168h] [ebp-4Ch]
  float v134; // [esp+16Ch] [ebp-48h]
  float v135; // [esp+170h] [ebp-44h]
  float v136; // [esp+174h] [ebp-40h]
  int v137; // [esp+178h] [ebp-3Ch]
  float v138; // [esp+17Ch] [ebp-38h] BYREF
  float v139; // [esp+180h] [ebp-34h]
  float v140; // [esp+184h] [ebp-30h]
  float v141; // [esp+188h] [ebp-2Ch] BYREF
  float v142; // [esp+18Ch] [ebp-28h]
  float v143; // [esp+190h] [ebp-24h]
  float v144; // [esp+194h] [ebp-20h] BYREF
  float v145; // [esp+198h] [ebp-1Ch]
  float v146; // [esp+19Ch] [ebp-18h]
  float v147; // [esp+1A0h] [ebp-14h]
  float v148; // [esp+1A4h] [ebp-10h]
  char v149; // [esp+1ABh] [ebp-9h]
  float v150; // [esp+1ACh] [ebp-8h]
  float v151; // [esp+1B0h] [ebp-4h]
  int savedregs; // [esp+1B4h] [ebp+0h] BYREF

  result = *(unsigned __int8 *)(this + 316);
  if ( *(_BYTE *)(this + 316) )
  {
    result -= 8;
    if ( result )
    {
      result -= 2;
      if ( result )
      {
        v5 = (float *)sub_1000ED40();
        *v5 = *(float *)(this + 372) - *(float *)(this + 360);
        v5[1] = *(float *)(this + 376) - *(float *)(this + 364);
        v5[2] = *(float *)(this + 380) - *(float *)(this + 368);
        v6 = *v5;
        v106 = v5[1];
        v105 = v6;
        v107 = v5[2];
        v151 = sqrt(v106 * v106 + v6 * v6) * 0.69999999;
        v74 = *(float *)(this + 236) * *(float *)(this + 236) + *(float *)(this + 232) * *(float *)(this + 232);
        v7 = off_103EDFE0(v74);
        if ( v7 > 150.0 )
        {
          if ( v7 > 2048.0 )
            v7 = 2048.0;
          v151 = ((v7 - 150.0) * 0.0066666668 + 1.0) * v151;
        }
        v8 = a3;
        v9 = a3[4];
        v10 = a3[5];
        v88[0] = 0.0;
        v88[1] = v9;
        v88[2] = v10;
        sub_101EE040(v88, &v141, &v138, 0);
        v11 = fabs(a3[6]);
        v149 = 0;
        if ( v11 > 0.0 || fabs(a3[7]) > 0.0 )
        {
          v149 = 1;
          v151 = v151 * 1.3;
        }
        sub_10104CD0(v75, v151);
        v12 = *(_DWORD *)dword_10413184;
        v13 = (*(int (__thiscall **)(int, float, _DWORD, float *))(*(_DWORD *)this + 36))(
                this,
                COERCE_FLOAT(LODWORD(v151)),
                0,
                v75);
        (*(void (__thiscall **)(int, int, int))(v12 + 52))(dword_10413184, 4, v13);
        v95 = sub_1021F0F0(v75);
        if ( v95 > 0 )
        {
          v130 = 0;
          v131 = 0.0;
          v133 = 0.0;
          while ( 1 )
          {
            v14 = sub_10104C80(v75, v130);
            v15 = (float *)__RTDynamicCast(
                             v14,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&C_BaseEntity `RTTI Type Descriptor',
                             (int)&C_AI_BaseNPC `RTTI Type Descriptor',
                             0);
            if ( v15 )
              break;
LABEL_47:
            if ( ++v130 >= v95 )
            {
              v63 = v8[6] + v131;
              v8[6] = v63;
              v64 = v8[7] + v133;
              v8[7] = v64;
              v65 = 1.0;
              v66 = 1.0;
              v67 = fabs(*(float *)(dword_10432954 + 44));
              if ( v67 >= v63 )
              {
                v68 = fabs(*(float *)(dword_1043299C + 44));
                if ( -v68 > v63 )
                  v66 = v68 / fabs(v63);
              }
              else
              {
                v66 = v67 / v63;
              }
              v69 = fabs(v64);
              v70 = fabs(*(float *)(dword_104328C4 + 44));
              if ( v70 < v69 )
                v65 = v70 / v69;
              if ( v66 < v65 )
                v65 = v66;
              v8[6] = v63 * v65;
              v8[7] = v65 * v64;
              return sub_1011A810(v76);
            }
          }
          v16 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 36))(this);
          v17 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)v15 + 36))(v15);
          v18 = *v17 - *v16;
          *(float *)&v120 = v18;
          v19 = v17[1] - v16[1];
          v121 = v19;
          v122 = v17[2] - v16[2];
          v73 = v18 * v18 + v19 * v19;
          v147 = off_103EDFE0(v73);
          sub_1008EA70((_BYTE *)v15 + 352, v15 + 90, v15 + 93, &v78, &v80);
          v20 = *((_BYTE *)v15 + 3373) == 0;
          v21 = sqrt((v80 - v78) * (v80 - v78) + (v81 - v79) * (v81 - v79)) * 0.5;
          v129 = v21;
          if ( v20 )
          {
            if ( v21 < v147 )
              goto LABEL_46;
          }
          else if ( v21 < v147 && ((_DWORD)v15[28] & 0x20) != 0 )
          {
            *((_DWORD *)v15 + 28) &= ~0x20u;
            sub_10039310((int)v15);
          }
          sub_1003BCF0(v15, &v123);
          *(float *)&v137 = off_103EDFEC();
          sub_10038150(this);
          v22 = *(float *)(this + 244);
          v23 = *(float *)(this + 252);
          v115 = *(float *)(this + 248);
          v114 = v22;
          v116 = v23;
          off_103EDFEC();
          v118 = v121;
          v117 = v120;
          v119 = v122;
          off_103EDFEC();
          v24 = *(int (__thiscall **)(float *))(*(_DWORD *)v15 + 36);
          v89 = v125 * v116 + v124 * v115 + v123 * v114;
          v90 = v116 * v119 + v115 * v118 + v114 * *(float *)&v117;
          v72 = v151;
          v71 = (float *)v24(v15);
          v25 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 36))(this);
          if ( sub_100903A0(v25, (float *)&v117, v71, v72, (float *)&v82, (float *)&v77) )
          {
            v134 = -*(float *)&v120;
            v135 = -v121;
            v136 = -v122;
            off_103EDFEC();
            v94 = 2.0;
            v146 = v125;
            v144 = v123;
            v145 = v124;
            if ( *(float *)&v137 > 0.001 )
            {
              v83[0] = 0.0;
              v83[1] = 0.0;
              v83[2] = 1.0;
              sub_1001A9A0(&v111, &v123, v83);
              if ( v112 * v135 + v111 * v134 + v113 * v136 <= 0.0 )
                v26 = -1;
              else
                v26 = 1;
              v132 = v26;
              *(float *)&v137 = 0.0;
              v150 = v151 * 2.0;
              v148 = 2.0 * v107;
              while ( 1 )
              {
                v27 = (double)v132;
                v126 = v111 * v27;
                v127 = v112 * v27;
                v128 = v27 * v113;
                off_103EDFEC();
                v28 = *(int (__thiscall **)(int))(*(_DWORD *)this + 36);
                v96 = v126 * v151 * 2.0;
                v97 = v127 * v151 * 2.0;
                v98 = 2.0 * (v151 * v128);
                v29 = (float *)v28(this);
                v30 = *v15;
                v85[0] = v96 + *v29;
                v85[1] = v29[1] + v97;
                v31 = v29[2];
                v32 = *(int (__thiscall **)(float *))(LODWORD(v30) + 36);
                v85[2] = v31 + v98;
                v33 = (float *)v32(v15);
                if ( sub_1018EAC0((float **)this, (int)&savedregs, this, (int)v15, v85, v148, v150, v33, &v144) )
                  break;
                v26 = -v26;
                v132 = v26;
                if ( ++v137 >= 2 )
                  goto LABEL_28;
              }
              v148 = v143 * v128 + v141 * v126 + v142 * v127;
              v150 = v126 * v138 + v127 * v139 + v128 * v140;
              goto LABEL_39;
            }
            sub_100392A0((char *)v15, (int)&v108, 0, 0);
            v43 = *(int (__thiscall **)(int))(*(_DWORD *)this + 36);
            v102 = v108 * v151 * 2.0;
            v103 = v109 * v151 * 2.0;
            v104 = 2.0 * (v151 * v110);
            v44 = (float *)v43(this);
            v45 = *v15;
            v87[0] = *v44 - v102;
            v87[1] = v44[1] - v103;
            v46 = v44[2];
            v47 = *(int (__thiscall **)(float *))(LODWORD(v45) + 36);
            v87[2] = v46 - v104;
            v150 = v151 * 2.0;
            v148 = 2.0 * v107;
            v48 = (float *)v47(v15);
            if ( sub_1018EAC0((float **)this, (int)&savedregs, this, (int)v15, v87, v148, v150, v48, &v144) )
            {
              v42 = -v108;
              v49 = v42;
              v41 = -v109;
              v50 = v41;
              v51 = v110;
            }
            else
            {
LABEL_28:
              v34 = *(int (__thiscall **)(int))(*(_DWORD *)this + 36);
              v91 = v144 * v151 * 2.0;
              v92 = v145 * v151 * 2.0;
              v93 = 2.0 * (v151 * v146);
              v35 = (float *)v34(this);
              v36 = *v15;
              v86[0] = *v35 + v91;
              v86[1] = v35[1] + v92;
              v37 = v35[2];
              v38 = *(int (__thiscall **)(float *))(LODWORD(v36) + 36);
              v86[2] = v37 + v93;
              v39 = (float *)v38(v15);
              if ( sub_1018EAC0((float **)this, (int)&savedregs, this, (int)v15, v86, v148, v150, v39, &v144) )
              {
                v40 = v146;
                v148 = v142 * v145 + v141 * v144 + v143 * v146;
                v41 = v145;
                v42 = v144;
                goto LABEL_37;
              }
              v52 = *(int (__thiscall **)(int))(*(_DWORD *)this + 36);
              v99 = v134 * v151 * 2.0;
              v100 = v135 * v151 * 2.0;
              v101 = 2.0 * (v151 * v136);
              v53 = (float *)v52(this);
              v54 = *v15;
              v84[0] = *v53 - v99;
              v84[1] = v53[1] - v100;
              v55 = v53[2];
              v56 = *(int (__thiscall **)(float *))(LODWORD(v54) + 36);
              v84[2] = v55 - v101;
              v57 = (float *)v56(v15);
              if ( sub_1018EAC0((float **)this, (int)&savedregs, this, (int)v15, v84, v148, v150, v57, &v144) )
              {
                v58 = -v134;
                v59 = -v135;
                v60 = -v136;
                v148 = v59 * v142 + v58 * v141 + v60 * v143;
                v150 = v59 * v139 + v58 * v138 + v60 * v140;
LABEL_39:
                if ( v149 )
                  v62 = 6.0;
                else
                  v62 = v94;
                if ( v89 > 0.0 && v90 > 0.0 )
                  v62 = 0.1;
                v131 = v148 * 2000.0 + v131;
                v133 = 2000.0 * (v62 * v150) + v133;
                goto LABEL_46;
              }
              (*(void (__thiscall **)(int))(*(_DWORD *)this + 36))(this);
              v42 = -v144;
              v49 = v42;
              v41 = -v145;
              v50 = v41;
              v51 = v146;
            }
            v61 = v50 * v142 + v49 * v141 + -v51 * v143;
            v40 = -v51;
            v148 = v61;
LABEL_37:
            v150 = v41 * v139 + v42 * v138 + v40 * v140;
            if ( v129 > (double)v147 )
              sub_1000DF30(v15, 32);
            goto LABEL_39;
          }
LABEL_46:
          v8 = a3;
          goto LABEL_47;
        }
        return sub_1011A810(v76);
      }
    }
  }
  return result;
}
