void __thiscall sub_10031BF0(int this, int a2, int a3, int a4)
{
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  float v13; // edx
  int v14; // eax
  int v15; // eax
  int v16; // ebx
  char v17; // al
  int v18; // eax
  double v19; // st7
  const char *v20; // eax
  float v21; // edx
  float v22; // ecx
  int v23; // eax
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // ebx
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // edx
  _DWORD *v41; // eax
  _DWORD *v42; // eax
  int v43; // ecx
  float v44; // edx
  int v45; // eax
  int v46; // ebx
  int v47; // eax
  int v48; // eax
  int v49; // edi
  bool v50; // zf
  signed int v51; // eax
  int v52; // edi
  int v53; // eax
  int v54; // edi
  int v55; // eax
  int v56; // edi
  int v57; // eax
  int v58; // eax
  int v59; // edi
  int v60; // eax
  int v61; // ebx
  int v62; // eax
  int v63; // eax
  int v64; // edi
  int v65; // edi
  int v66; // eax
  int v67; // edi
  int v68; // edi
  int v69; // eax
  int v70; // edi
  int v71; // eax
  int v72; // eax
  int v73; // edi
  int v74; // eax
  int v75; // eax
  int v76; // eax
  int v77; // eax
  int v78; // eax
  int v79; // eax
  const char *v80; // [esp-1Ch] [ebp-FCh]
  char v81; // [esp-Ch] [ebp-ECh]
  const char *v82; // [esp-Ch] [ebp-ECh]
  int v83; // [esp-8h] [ebp-E8h]
  int v84; // [esp-4h] [ebp-E4h]
  int v85; // [esp-4h] [ebp-E4h]
  char *v86; // [esp+0h] [ebp-E0h]
  int v87; // [esp+4h] [ebp-DCh]
  int v88; // [esp+4h] [ebp-DCh]
  int v89; // [esp+4h] [ebp-DCh]
  int v90; // [esp+4h] [ebp-DCh]
  int v91; // [esp+4h] [ebp-DCh]
  _BYTE v92[12]; // [esp+14h] [ebp-CCh] BYREF
  _BYTE v93[4]; // [esp+20h] [ebp-C0h] BYREF
  _DWORD v94[20]; // [esp+24h] [ebp-BCh] BYREF
  _BYTE v95[4]; // [esp+74h] [ebp-6Ch] BYREF
  float v96[3]; // [esp+78h] [ebp-68h] BYREF
  _DWORD v97[3]; // [esp+84h] [ebp-5Ch] BYREF
  float v98[3]; // [esp+90h] [ebp-50h] BYREF
  int v99; // [esp+9Ch] [ebp-44h] BYREF
  int v100; // [esp+A0h] [ebp-40h]
  int v101; // [esp+A4h] [ebp-3Ch]
  int v102; // [esp+A8h] [ebp-38h] BYREF
  int v103; // [esp+ACh] [ebp-34h]
  int v104; // [esp+B0h] [ebp-30h]
  int v105; // [esp+B4h] [ebp-2Ch]
  int v106; // [esp+B8h] [ebp-28h]
  int v107; // [esp+BCh] [ebp-24h] BYREF
  int v108; // [esp+C0h] [ebp-20h]
  int v109; // [esp+C4h] [ebp-1Ch]
  int v110; // [esp+C8h] [ebp-18h] BYREF
  int v111; // [esp+CCh] [ebp-14h]
  int v112; // [esp+D0h] [ebp-10h]
  int v113; // [esp+D4h] [ebp-Ch] BYREF
  int v114; // [esp+D8h] [ebp-8h]
  int v115; // [esp+DCh] [ebp-4h]
  int savedregs; // [esp+E0h] [ebp+0h] BYREF

  if ( !*(_BYTE *)(this + 1713) )
    return;
  if ( *(_DWORD *)(a3 + 64) == 64 )
  {
    a4 = 2 * *(_DWORD *)(dword_106B912C + 48);
    if ( (double)a4 < *(float *)(a3 + 52) )
    {
      sub_1001E4E0(v94, a3);
      *(float *)&v94[13] = 100.0;
      v94[16] = 0;
      v5 = sub_10219A30() % 8;
      sub_10031BF0(v5, v94, 0);
      v6 = sub_10219A30() % 8;
      sub_10031BF0(v6, v94, 0);
      v7 = sub_10219A30() % 8;
      sub_10031BF0(v7, v94, 0);
      v8 = sub_10219A30() % 8;
      sub_10031BF0(v8, v94, 0);
      v9 = sub_10219A30() % 8;
      sub_10031BF0(v9, v94, 0);
    }
    return;
  }
  switch ( a2 )
  {
    case 1:
    case 8:
      if ( *(_DWORD *)(this + 808) == 1 )
      {
        v10 = sub_100BF520("helmet");
        if ( sub_100BF4B0(v10) )
        {
          v11 = sub_100BF520("helmet");
          sub_100C1600(v11, 0);
          if ( a2 != 8 )
          {
            sub_1023C380((int)"Player.Helmet", 0.0, 0);
            if ( (double)*(int *)(this + 1708) - *(float *)(a3 + 52) > 0.0 )
            {
              sub_100BEFA0("Eyes", (int)&v102, (int)&v99);
              sub_10021920((_DWORD *)this, (int)"item_helmet_worker", v102, v103, v104, v99, v100, v101);
              v110 = *(int *)(a3 + 4);
              v13 = *(float *)(a3 + 12);
              v111 = *(int *)(a3 + 8);
              *(float *)&v113 = *(float *)&v110 * 0.25;
              *(float *)&v112 = v13;
              *(float *)&v114 = *(float *)&v111 * 0.25;
              *(float *)&v115 = 0.25 * v13;
              if ( (_BYTE)a4 )
              {
                v98[0] = 0.0;
                v98[1] = 0.0;
                v98[2] = 100.0;
                sub_100EAD90(v98);
              }
              else
              {
                sub_100EAD90(&v113);
              }
            }
            else
            {
              *(_DWORD *)(this + 1716) = -1;
              v12 = sub_100BF520("helmet");
              sub_100C1600(v12, 0);
              sub_100BEFA0("Eyes", (int)&v107, (int)&v110);
              sub_10021920((_DWORD *)this, (int)"item_helmet_worker", v107, v108, v109, v110, v111, v112);
              sub_10031BF0(8, a3, 0);
            }
            return;
          }
          a4 = 0;
          sub_1002AB00((_DWORD *)(this + 220), &a4);
          sub_100BEFA0("Eyes", (int)&v110, (int)&v113);
          sub_10021920((_DWORD *)this, (int)"item_helmet_worker", v110, v111, v112, v113, v114, v115);
LABEL_51:
          v24 = (int)((double)*(int *)(this + 1716) - *(float *)(a3 + 52));
          *(_DWORD *)(this + 1716) = v24;
          if ( v24 > 0 )
          {
            *(_DWORD *)(this + 1740) |= 0x20u;
            return;
          }
          sub_1023C380((int)"Player.HeadShot", 0.0, 0);
          v25 = *(_DWORD *)(a3 + 12);
          v26 = *(_DWORD *)(a3 + 8);
          v97[0] = *(_DWORD *)(a3 + 4);
          v97[2] = v25;
          v97[1] = v26;
          v27 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 504))(this, v92);
          sub_10124BC0(v27, v97, 0, 8, 4);
          v28 = *(_DWORD *)(this + 808);
          if ( v28 == 6 )
          {
            v29 = sub_100BF520("helmet");
            v30 = sub_100BF4B0(v29);
            if ( v30 )
            {
              v31 = sub_100BF520("helmet");
              sub_100C1600(v31, 0);
              sub_100BEFA0("Eyes", (int)&v107, (int)&v113);
              sub_101CB6F0("item_helmet_guard", v107, v108, v109, v113, v114, v115, 1, v30);
            }
            v32 = sub_100BF520("respirator");
            if ( sub_100BF4B0(v32) )
            {
              v33 = sub_100BF520("respirator");
              sub_100C1600(v33, 0);
              sub_100BEFA0("Eyes", (int)&v107, (int)&v113);
              sub_10021920((_DWORD *)this, (int)"item_respirator_guard", v107, v108, v109, v113, v114, v115);
            }
            v34 = sub_100BF520("head");
            if ( (int)sub_100BF4B0(v34) >= 9 )
              v87 = 11;
            else
              v87 = 10;
          }
          else
          {
            if ( v28 == 8 )
            {
              v36 = sub_100BF520("head");
              sub_100C1600(v36, 1);
              if ( *(_BYTE *)(this + 4976) )
              {
                v37 = sub_100BF520("gasmask");
                if ( sub_100BF4B0(v37) )
                {
                  v38 = sub_100BF520("gasmask");
                  sub_100C1600(v38, 0);
                  sub_100BEFA0("Eyes", (int)&v107, (int)&v113);
                  sub_101CB6F0("item_gasmask_prison", v107, v108, v109, v113, v114, v115, 0, 0);
                }
              }
              goto LABEL_66;
            }
            v87 = 9;
          }
          v35 = sub_100BF520("head");
          sub_100C1600(v35, v87);
LABEL_66:
          if ( !*(_DWORD *)(this + 808) )
          {
            a4 = 0;
            sub_10031670((_DWORD *)(this + 848), &a4);
          }
          v39 = *(_DWORD *)(a3 + 16);
          v40 = *(_DWORD *)(a3 + 24);
          v103 = *(int *)(a3 + 20);
          v102 = v39;
          v104 = v40;
          v41 = (_DWORD *)sub_100232D0((_DWORD *)a3);
          v42 = sub_10019640(v41);
          v43 = *v42;
          v44 = *((float *)v42 + 1);
          v109 = v42[2];
          v107 = v43;
          v108 = LODWORD(v44);
          *(float *)&v110 = *(float *)&v102 - *(float *)&v43;
          *(float *)&v111 = *(float *)&v103 - v44;
          *(float *)&v112 = *(float *)&v104 - (*(float *)&v109 + 64.0);
          off_10689714();
          *(float *)&v113 = *(float *)&v110 * 128.0 + *(float *)&v102;
          *(float *)&v114 = *(float *)&v111 * 128.0 + *(float *)&v103;
          *(float *)&v115 = 128.0 * *(float *)&v112 + *(float *)&v104;
          sub_1002A5F0((int)&savedregs, this, (float *)&v102, (float *)&v113, 1174421507, this, 0, (int)v93);
          if ( v94[18] )
            (*(void (__thiscall **)(int, _BYTE *, const char *))(*(_DWORD *)this + 304))(this, v93, "Blood_Trace");
          *(_DWORD *)(this + 1740) |= 1u;
          return;
        }
      }
      v14 = *(_DWORD *)(this + 808);
      if ( v14 != 6 && v14 != 8 )
        goto LABEL_50;
      v15 = sub_100BF520("helmet");
      if ( !sub_100BF4B0(v15) )
        goto LABEL_50;
      v105 = __RTDynamicCast(
               this,
               0,
               (struct _s_RTTICompleteObjectLocator *)&CAI_BaseNPC `RTTI Type Descriptor',
               (int)&CNPC_CombineS `RTTI Type Descriptor',
               0);
      v16 = sub_100BF520("helmet");
      v106 = sub_100BF4B0(v16);
      if ( !v105 || !*(_BYTE *)(v105 + 4977) || (v17 = 1, v106 <= 3) )
        v17 = 0;
      if ( a2 == 8 || v17 )
      {
LABEL_50:
        a4 = 0;
        sub_1002AB00((_DWORD *)(this + 220), &a4);
        goto LABEL_51;
      }
      sub_1023C380((int)"Player.Helmet", 0.0, 0);
      if ( v105 && *(_BYTE *)(v105 + 4977) )
      {
        v18 = (int)((double)*(int *)(this + 1708) - *(float *)(a3 + 52));
        *(_DWORD *)(this + 1708) = v18;
        if ( v18 > 0 )
          return;
        *(_DWORD *)(this + 1716) = -1;
        v106 = sub_100BF4B0(v16);
        sub_100C1600(v16, 0);
        sub_100BEFA0("Eyes", (int)&v110, (int)&v113);
        sub_101CB6F0("item_helmet_pmc", v110, v111, v112, v113, v114, v115, 1, v106);
        goto LABEL_49;
      }
      v19 = (double)*(int *)(this + 1708) - *(float *)(a3 + 52);
      if ( v106 != 1 )
      {
        *(_DWORD *)(this + 1708) = (int)v19;
        if ( (int)v19 > 0 )
          return;
        *(_DWORD *)(this + 1716) = -1;
        v106 = sub_100BF4B0(v16);
        sub_100C1600(v16, 0);
        sub_100BEFA0("Eyes", (int)&v107, (int)&v110);
        if ( *(_DWORD *)(this + 808) == 6 || !*(_BYTE *)(v105 + 4976) )
          sub_101CB6F0("item_helmet_guard", v107, v108, v109, v110, v111, v112, 1, v106);
        else
          sub_101CB6F0("item_helmet_prison", v107, v108, v109, v110, v111, v112, 1, v106);
        goto LABEL_49;
      }
      if ( v19 <= 0.0 )
      {
        *(_DWORD *)(this + 1716) = -1;
        sub_100C1600(v16, 0);
        sub_100BEFA0("Eyes", (int)&v99, (int)&v102);
        if ( v105 && *(_BYTE *)(v105 + 4976) )
        {
          v81 = v102;
          v83 = v103;
          v84 = v104;
          v80 = "item_helmet_prison";
        }
        else
        {
          v81 = v102;
          v83 = v103;
          v84 = v104;
          v80 = "item_helmet_guard";
        }
        sub_101CB6F0(v80, v99, v100, v101, v81, v83, v84, 1, 1);
LABEL_49:
        sub_10031BF0(8, a3, 0);
        return;
      }
      sub_100C1600(v16, 0);
      sub_100BEFA0("Eyes", (int)&v110, (int)&v107);
      v20 = *(const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 28))(this, v95);
      if ( !v20 )
        v20 = String;
      if ( !_stricmp(v20, "models/combine_soldier_prisonguard.mdl") )
        sub_101CB6F0("item_helmet_prison", v110, v111, v112, v107, v108, v109, 1, 1);
      else
        sub_101CB6F0("item_helmet_guard", v110, v111, v112, v107, v108, v109, 1, 1);
      v21 = *(float *)(a3 + 8);
      v99 = *(int *)(a3 + 4);
      v22 = *(float *)(a3 + 12);
      v100 = LODWORD(v21);
      v101 = LODWORD(v22);
      *(float *)&v113 = *(float *)&v99 * 0.25;
      *(float *)&v114 = v21 * 0.25;
      *(float *)&v115 = 0.25 * v22;
      if ( (_BYTE)a4 )
      {
        v96[0] = 0.0;
        v96[1] = 0.0;
        v96[2] = 100.0;
        sub_100EAD90(v96);
      }
      else
      {
        sub_100EAD90(&v113);
      }
      v23 = sub_100BF520("helmet");
      sub_100C1600(v23, 0);
      sub_100D7330(this);
      return;
    case 4:
      *(_DWORD *)(this + 1720) = (int)((double)*(int *)(this + 1720) - *(float *)(a3 + 52));
      v45 = *(_DWORD *)(this + 808);
      if ( v45 == 2 )
        goto LABEL_107;
      if ( v45 != 1 )
      {
        if ( v45 != 6 && v45 != 8 )
        {
          if ( *(int *)(this + 1720) > 0
            || *(int *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1136))(this) >= 2
            && (*(int *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1136))(this) <= 3
             || *(int *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1136))(this) >= 6) )
          {
            return;
          }
          sub_1023C380((int)"Player.Splat", 0.0, 0);
          v46 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1136))(this);
          sub_100D7330(this);
          sub_101AB3B0((int)"blood_zombie_split_spray", 4, this, "UpperArm_L", 0);
          *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1136))(this) = v46 + 2;
          v47 = sub_100BF520("arms");
          sub_100C1600(v47, v46 + 2);
          if ( v46 + 2 > 5 )
            *(_BYTE *)(this + 1712) = 0;
          if ( *(int *)(this + 220) > 0 )
          {
            v48 = *(_DWORD *)(this + 2372);
            if ( v48 != 36 && v48 != 34 && v48 != 35 )
            {
              *(_DWORD *)(this + 2548) &= ~8u;
LABEL_89:
              sub_100BEFA0("ForeArm_L", (int)&v113, (int)&v110);
              sub_100BEFA0("UpperArm_L", (int)&v113, (int)&v107);
              v49 = sub_101CDCC0(this, *(_DWORD *)(this + 816), &v113, &v110);
              sub_100EBE30(1);
              sub_100C1600(1, v46 % 2);
              *(_DWORD *)(v49 + 848) = *(_DWORD *)(this + 848);
              sub_101AB3B0((int)"blood_zombie_split_spray", 4, v49, "ForeArm_L", 0);
              return;
            }
            a4 = 0;
            sub_1002AB00((_DWORD *)(this + 220), &a4);
          }
          *(_DWORD *)(this + 1740) |= 2u;
          goto LABEL_89;
        }
LABEL_107:
        if ( *(int *)(this + 1720) > 0 || *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1136))(this) % 2 )
          return;
        sub_1023C380((int)"Player.Splat", 0.0, 0);
        v56 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1136))(this);
        sub_100D7330(this);
        sub_101AB3B0((int)"blood_zombie_split_spray", 4, this, "UpperArm_L", 0);
        *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1136))(this) = ++v56;
        v57 = sub_100BF520("arms");
        sub_100C1600(v57, v56);
        if ( v56 == 3 )
          *(_BYTE *)(this + 1712) = 0;
        if ( *(int *)(this + 220) > 0 )
        {
          if ( *(_DWORD *)(this + 808) == 8 )
          {
            sub_100CD920(0);
            *(_DWORD *)(this + 2548) &= ~0x200000u;
            *(_BYTE *)(this + 1670) = 1;
          }
          else
          {
            v58 = *(_DWORD *)(this + 2372);
            if ( v58 != 36 && v58 != 34 && v58 != 35 )
            {
              *(_DWORD *)(this + 2548) &= ~8u;
LABEL_120:
              sub_100BEFA0("ForeArm_L", (int)&v113, (int)&v110);
              sub_100BEFA0("UpperArm_L", (int)&v113, (int)&v107);
              v59 = sub_101CDCC0(this, *(_DWORD *)(this + 816), &v113, &v110);
              sub_100EBE30(1);
              v86 = "ForeArm_L";
              v85 = v59;
              v82 = "blood_zombie_split_spray";
              goto LABEL_189;
            }
          }
          a4 = 0;
          sub_1002AB00((_DWORD *)(this + 220), &a4);
        }
        *(_DWORD *)(this + 1740) |= 2u;
        goto LABEL_120;
      }
      if ( *(int *)(this + 1720) > 0 )
        return;
      v51 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1136))(this) & 0x80000001;
      v50 = v51 == 0;
      if ( v51 < 0 )
        v50 = (((_BYTE)v51 - 1) | 0xFFFFFFFE) == -1;
      if ( !v50 )
        return;
      sub_1023C380((int)"Player.Splat", 0.0, 0);
      v52 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1136))(this);
      sub_100D7330(this);
      sub_101AB3B0((int)"blood_zombie_split_spray", 4, this, "UpperArm_L", 0);
      *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1136))(this) = ++v52;
      sub_100C1600(3, v52);
      if ( v52 == 3 )
        *(_BYTE *)(this + 1712) = 0;
      if ( *(int *)(this + 220) <= 0 )
        goto LABEL_103;
      v53 = *(_DWORD *)(this + 2372);
      if ( v53 == 36 || v53 == 34 || v53 == 35 )
      {
        a4 = 0;
        sub_1002AB00((_DWORD *)(this + 220), &a4);
LABEL_103:
        *(_DWORD *)(this + 1740) |= 2u;
      }
      else
      {
        *(_DWORD *)(this + 2548) &= ~8u;
      }
      sub_100BEFA0("ForeArm_L", (int)&v113, (int)&v110);
      sub_100BEFA0("UpperArm_L", (int)&v113, (int)&v107);
      v54 = sub_101CDCC0(this, *(_DWORD *)(this + 816), &v113, &v110);
      sub_100EBE30(1);
      if ( *(int *)(this + 848) > 2 )
      {
        a4 = 1;
        sub_10031670((_DWORD *)(v54 + 848), &a4);
      }
      v88 = sub_100BF4B0(4);
      v55 = sub_100BF520("Glove_L");
      sub_100C1600(v55, v88);
      sub_101AB3B0((int)"blood_zombie_split_spray", 4, v54, "ForeArm_L", 0);
      sub_100C1600(4, 0);
      return;
    case 5:
      *(_DWORD *)(this + 1724) = (int)((double)*(int *)(this + 1724) - *(float *)(a3 + 52));
      v60 = *(_DWORD *)(this + 808);
      if ( v60 == 2 )
        goto LABEL_156;
      if ( v60 != 1 )
      {
        if ( v60 != 6 && v60 != 8 )
        {
          if ( *(int *)(this + 1724) > 0 || *(int *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1136))(this) >= 4 )
            return;
          sub_1023C380((int)"Player.Splat", 0.0, 0);
          v61 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1136))(this);
          sub_100D7330(this);
          sub_101AB3B0((int)"blood_zombie_split_spray", 4, this, "UpperArm_R", 0);
          *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1136))(this) = v61 + 4;
          v62 = sub_100BF520("arms");
          sub_100C1600(v62, v61 + 4);
          if ( v61 + 4 > 5 )
            *(_BYTE *)(this + 1712) = 0;
          if ( *(int *)(this + 220) > 0 )
          {
            v63 = *(_DWORD *)(this + 2372);
            if ( v63 != 36 && v63 != 34 && v63 != 35 )
            {
              v64 = sub_100CF460(this);
              if ( v64 )
              {
                (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)this + 960))(this, v64, 0, 0);
                *(_BYTE *)(v64 + 1172) = 1;
              }
              *(_DWORD *)(this + 2548) &= 0xFFDFFFF7;
              *(_BYTE *)(this + 1670) = 1;
              goto LABEL_138;
            }
            a4 = 0;
            sub_1002AB00((_DWORD *)(this + 220), &a4);
          }
          *(_DWORD *)(this + 1740) |= 4u;
LABEL_138:
          sub_100BEFA0("ForeArm_R", (int)&v113, (int)&v110);
          sub_100BEFA0("UpperArm_R", (int)&v113, (int)&v107);
          v59 = sub_101CDCC0(this, *(_DWORD *)(this + 820), &v113, &v110);
          sub_100EBE30(1);
          sub_100C1600(1, v61 % 2);
          v86 = "ForeArm_R";
          v85 = v59;
          v82 = "blood_zombie_split_spray";
LABEL_189:
          *(_DWORD *)(v59 + 848) = *(_DWORD *)(this + 848);
          sub_101AB3B0((int)v82, 4, v85, v86, 0);
          return;
        }
LABEL_156:
        if ( *(int *)(this + 1724) > 0 || *(int *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1136))(this) >= 2 )
          return;
        sub_1023C380((int)"Player.Splat", 0.0, 0);
        v70 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1136))(this);
        sub_100D7330(this);
        sub_101AB3B0((int)"blood_zombie_split_spray", 4, this, "UpperArm_R", 0);
        v70 += 2;
        *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1136))(this) = v70;
        v71 = sub_100BF520("arms");
        sub_100C1600(v71, v70);
        if ( v70 == 3 )
          *(_BYTE *)(this + 1712) = 0;
        if ( *(_DWORD *)(this + 808) == 8 )
        {
          a4 = 0;
          sub_1002AB00((_DWORD *)(this + 220), &a4);
        }
        if ( *(int *)(this + 220) > 0 )
        {
          v72 = *(_DWORD *)(this + 2372);
          if ( v72 != 36 && v72 != 34 && v72 != 35 )
          {
            v73 = sub_100CF460(this);
            if ( v73 )
            {
              (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)this + 960))(this, v73, 0, 0);
              *(_BYTE *)(v73 + 1172) = 1;
            }
            *(_DWORD *)(this + 2548) &= 0xFFDFFFF7;
            *(_BYTE *)(this + 1670) = 1;
            goto LABEL_171;
          }
          a4 = 0;
          sub_1002AB00((_DWORD *)(this + 220), &a4);
        }
        *(_DWORD *)(this + 1740) |= 4u;
LABEL_171:
        sub_100BEFA0("ForeArm_R", (int)&v113, (int)&v110);
        sub_100BEFA0("UpperArm_R", (int)&v113, (int)&v107);
        v59 = sub_101CDCC0(this, *(_DWORD *)(this + 820), &v113, &v110);
        sub_100EBE30(1);
        v86 = "ForeArm_R";
        v85 = v59;
        v82 = "blood_zombie_split_spray";
        goto LABEL_189;
      }
      if ( *(int *)(this + 1724) > 0 || *(int *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1136))(this) >= 2 )
        return;
      sub_1023C380((int)"Player.Splat", 0.0, 0);
      v65 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1136))(this);
      sub_100D7330(this);
      sub_101AB3B0((int)"blood_zombie_split_spray", 4, this, "UpperArm_R", 0);
      v65 += 2;
      *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1136))(this) = v65;
      sub_100C1600(3, v65);
      if ( v65 == 3 )
        *(_BYTE *)(this + 1712) = 0;
      if ( *(int *)(this + 220) <= 0 )
        goto LABEL_152;
      v66 = *(_DWORD *)(this + 2372);
      if ( v66 == 36 || v66 == 34 || v66 == 35 )
      {
        a4 = 0;
        sub_1002AB00((_DWORD *)(this + 220), &a4);
LABEL_152:
        *(_DWORD *)(this + 1740) |= 4u;
      }
      else
      {
        v67 = sub_100CF460(this);
        if ( v67 )
        {
          (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)this + 960))(this, v67, 0, 0);
          *(_BYTE *)(v67 + 1172) = 1;
        }
        *(_DWORD *)(this + 2548) &= 0xFFDFFFF7;
        *(_BYTE *)(this + 1670) = 1;
      }
      sub_100BEFA0("ForeArm_R", (int)&v113, (int)&v110);
      sub_100BEFA0("UpperArm_R", (int)&v113, (int)&v107);
      v68 = sub_101CDCC0(this, *(_DWORD *)(this + 820), &v113, &v110);
      sub_100EBE30(1);
      if ( *(int *)(this + 848) > 2 )
      {
        a4 = 1;
        sub_10031670((_DWORD *)(v68 + 848), &a4);
      }
      v89 = sub_100BF4B0(5);
      v69 = sub_100BF520("Glove_R");
      sub_100C1600(v69, v89);
      sub_101AB3B0((int)"blood_zombie_split_spray", 4, v68, "ForeArm_R", 0);
      sub_100C1600(5, 0);
      return;
    case 6:
      v74 = (int)((double)*(int *)(this + 1728) - *(float *)(a3 + 52));
      *(_DWORD *)(this + 1728) = v74;
      if ( v74 > 0 || (*(_BYTE *)(this + 1740) & 8) != 0 )
        return;
      sub_1023C380((int)"Player.Splat", 0.0, 0);
      a4 = 0;
      sub_1002AB00((_DWORD *)(this + 220), &a4);
      if ( *(_DWORD *)(this + 808) == 8 )
      {
        v75 = sub_100BF520("legs");
        v90 = sub_100BF4B0(v75) + 1;
      }
      else if ( (*(_BYTE *)(this + 1740) & 0x10) != 0 )
      {
        v90 = 3;
      }
      else
      {
        v90 = 1;
      }
      v76 = sub_100BF520("legs");
      sub_100C1600(v76, v90);
      *(_DWORD *)(this + 1740) |= 8u;
      sub_100BEFA0("Calf_L", (int)&v113, (int)&v110);
      sub_100BEFA0("Thigh_L", (int)&v113, (int)&v107);
      v59 = sub_101CDCC0(this, *(_DWORD *)(this + 824), &v113, &v110);
      sub_100EBE30(1);
      v86 = "Calf_L";
      goto LABEL_188;
    case 7:
      v77 = (int)((double)*(int *)(this + 1732) - *(float *)(a3 + 52));
      *(_DWORD *)(this + 1732) = v77;
      if ( v77 > 0 || (*(_BYTE *)(this + 1740) & 0x10) != 0 )
        return;
      sub_1023C380((int)"Player.Splat", 0.0, 0);
      a4 = 0;
      sub_1002AB00((_DWORD *)(this + 220), &a4);
      if ( *(_DWORD *)(this + 808) == 8 )
      {
        v78 = sub_100BF520("legs");
        v91 = sub_100BF4B0(v78) + 2;
      }
      else if ( (*(_BYTE *)(this + 1740) & 8) != 0 )
      {
        v91 = 3;
      }
      else
      {
        v91 = 2;
      }
      v79 = sub_100BF520("legs");
      sub_100C1600(v79, v91);
      *(_DWORD *)(this + 1740) |= 0x10u;
      sub_100BEFA0("Calf_R", (int)&v113, (int)&v110);
      sub_100BEFA0("Thigh_R", (int)&v113, (int)&v107);
      v59 = sub_101CDCC0(this, *(_DWORD *)(this + 828), &v113, &v110);
      sub_100EBE30(1);
      v86 = "Calf_R";
LABEL_188:
      v85 = v59;
      v82 = "blood_advisor_puncture_withdraw";
      goto LABEL_189;
    default:
      return;
  }
}
