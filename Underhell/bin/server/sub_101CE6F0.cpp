void __thiscall sub_101CE6F0(int this, int a2, int a3)
{
  int v4; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // eax
  const char *v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // edx
  _DWORD *v31; // eax
  _DWORD *v32; // eax
  int v33; // ecx
  float v34; // edx
  int v35; // eax
  bool v36; // zf
  signed int v37; // eax
  int v38; // edi
  int v39; // edi
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // ebx
  int v46; // eax
  int v47; // edi
  int v48; // eax
  bool v49; // zf
  signed int v50; // eax
  int v51; // eax
  int v52; // edi
  int v53; // eax
  int v54; // edi
  int v55; // eax
  int v56; // eax
  int v57; // edi
  int v58; // edi
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // ebx
  int v63; // eax
  int v64; // edi
  int v65; // eax
  int v66; // eax
  int v67; // edi
  int v68; // eax
  int v69; // eax
  int v70; // edi
  bool v71; // zf
  signed int v72; // eax
  int v73; // eax
  int v74; // edi
  const char *v75; // [esp-Ch] [ebp-B8h]
  int v76; // [esp-4h] [ebp-B0h]
  int v77; // [esp+0h] [ebp-ACh]
  int v78; // [esp+0h] [ebp-ACh]
  int v79; // [esp+0h] [ebp-ACh]
  char *v80; // [esp+0h] [ebp-ACh]
  int v81; // [esp+4h] [ebp-A8h]
  int v82; // [esp+4h] [ebp-A8h]
  int v83; // [esp+4h] [ebp-A8h]
  int v84; // [esp+4h] [ebp-A8h]
  _BYTE v85[32]; // [esp+14h] [ebp-98h] BYREF
  _BYTE v86[4]; // [esp+34h] [ebp-78h] BYREF
  int v87[20]; // [esp+38h] [ebp-74h] BYREF
  int v88; // [esp+88h] [ebp-24h] BYREF
  int v89; // [esp+8Ch] [ebp-20h]
  int v90; // [esp+90h] [ebp-1Ch]
  int v91; // [esp+94h] [ebp-18h] BYREF
  int v92; // [esp+98h] [ebp-14h]
  int v93; // [esp+9Ch] [ebp-10h]
  int v94; // [esp+A0h] [ebp-Ch] BYREF
  int v95; // [esp+A4h] [ebp-8h]
  int v96; // [esp+A8h] [ebp-4h]
  int savedregs; // [esp+ACh] [ebp+0h] BYREF

  if ( *(_BYTE *)(this + 1867) )
    sub_101CBCA0(this, (int)v85);
  if ( *(_BYTE *)(this + 4392) )
  {
    v4 = a3;
    if ( *(_DWORD *)(a3 + 64) == 64 )
    {
      a2 = 2 * *(_DWORD *)(dword_106B912C + 48);
      if ( (double)a2 < *(float *)(a3 + 52) )
      {
        sub_1001E4E0(v87, a3);
        *(float *)&v87[13] = 100.0;
        v87[16] = 0;
        v5 = sub_10219A30();
        sub_101CE6F0(v5 % 13, v87);
        v6 = sub_10219A30();
        sub_101CE6F0(v6 % 13, v87);
        v7 = sub_10219A30();
        sub_101CE6F0(v7 % 13, v87);
      }
    }
    else
    {
      v8 = *(_DWORD *)(this + 4396);
      if ( v8 == 8 || v8 == 10 )
      {
        v9 = a2;
        switch ( a2 )
        {
          case 1:
          case 13:
          case 14:
            return;
          case 2:
          case 6:
            v9 = 9;
            goto LABEL_16;
          case 3:
          case 4:
            v9 = 7;
            goto LABEL_16;
          case 8:
          case 9:
            v9 = 3;
            goto LABEL_16;
          case 10:
            v9 = 12;
            goto LABEL_16;
          case 11:
          case 12:
            v9 = 1;
            goto LABEL_16;
          default:
            goto LABEL_16;
        }
      }
      else
      {
        v9 = a2;
LABEL_16:
        switch ( v9 )
        {
          case 1:
          case 2:
            *(_DWORD *)(this + 4412) = (int)((double)*(int *)(this + 4412) - *(float *)(a3 + 52));
            v69 = sub_100BF520(this, "legs");
            v70 = v69;
            if ( *(int *)(this + 4412) <= 0 )
            {
              v72 = sub_100BF4B0(this, v69) & 0x80000001;
              v71 = v72 == 0;
              if ( v72 < 0 )
                v71 = (((_BYTE)v72 - 1) | 0xFFFFFFFE) == -1;
              if ( v71 )
              {
                sub_1023C380((int)"Player.Splat", 0.0, 0);
                sub_100D7330((void *)this);
                sub_101AB3B0("blood_advisor_puncture_withdraw", 4, this, "Thigh_L", 0);
                if ( *(_DWORD *)(this + 4396) == 8 )
                {
                  v83 = sub_100BF4B0(this, v70) + 1;
                  sub_100C1600(this, v70, v83);
                }
                else if ( sub_100BF4B0(this, v70) == 2 )
                {
                  sub_100C1600(this, v70, 3);
                }
                else
                {
                  sub_100C1600(this, v70, 1);
                }
                sub_100BEFA0((void *)this, "Calf_L", (int)&v94, (int)&v91);
                v47 = sub_101CDCC0(this, *(_BYTE **)(this + 1880), (float *)&v94, (float *)&v91);
                sub_100EBE30(v47, 1);
                v80 = "Calf_L";
                goto LABEL_116;
              }
            }
            break;
          case 3:
          case 4:
            *(_DWORD *)(this + 4416) = (int)((double)*(int *)(this + 4416) - *(float *)(a3 + 52));
            v73 = sub_100BF520(this, "legs");
            v74 = v73;
            if ( *(int *)(this + 4416) <= 0
              && (sub_100BF4B0(this, v73) < 2 || sub_100BF4B0(this, v74) > 3 && sub_100BF4B0(this, v74) < 6) )
            {
              sub_1023C380((int)"Player.Splat", 0.0, 0);
              sub_100D7330((void *)this);
              sub_101AB3B0("blood_advisor_puncture_withdraw", 4, this, "Thigh_R", 0);
              if ( *(_DWORD *)(this + 4396) == 8 )
              {
                v84 = sub_100BF4B0(this, v74) + 2;
                sub_100C1600(this, v74, v84);
              }
              else if ( sub_100BF4B0(this, v74) == 1 )
              {
                sub_100C1600(this, v74, 3);
              }
              else
              {
                sub_100C1600(this, v74, 2);
              }
              sub_100BEFA0((void *)this, "Calf_R", (int)&v94, (int)&v91);
              v47 = sub_101CDCC0(this, *(_BYTE **)(this + 1884), (float *)&v94, (float *)&v91);
              sub_100EBE30(v47, 1);
              v80 = "Calf_R";
LABEL_116:
              v76 = v47;
              v75 = "blood_advisor_puncture_withdraw";
              goto LABEL_117;
            }
            break;
          case 7:
          case 8:
            *(_DWORD *)(this + 4404) = (int)((double)*(int *)(this + 4404) - *(float *)(a3 + 52));
            v35 = *(_DWORD *)(this + 4396);
            if ( v35 == 1 )
            {
              if ( *(int *)(this + 4404) <= 0 )
              {
                v37 = sub_100BF4B0(this, 3) & 0x80000001;
                v36 = v37 == 0;
                if ( v37 < 0 )
                  v36 = (((_BYTE)v37 - 1) | 0xFFFFFFFE) == -1;
                if ( v36 )
                {
                  sub_1023C380((int)"Player.Splat", 0.0, 0);
                  v38 = sub_100BF4B0(this, 3) + 1;
                  sub_100D7330((void *)this);
                  sub_101AB3B0("blood_zombie_split_spray", 4, this, "UpperArm_L", 0);
                  sub_100C1600(this, 3, v38);
                  sub_100BEFA0((void *)this, "ForeArm_L", (int)&v91, (int)&v94);
                  sub_100BEFA0((void *)this, "UpperArm_L", (int)&v91, (int)&v88);
                  v39 = sub_101CDCC0(this, *(_BYTE **)(this + 1872), (float *)&v91, (float *)&v94);
                  sub_100EBE30(v39, 1);
                  if ( *(int *)(this + 848) > 2 )
                  {
                    a2 = 1;
                    sub_10031670((_DWORD *)(v39 + 848), &a2);
                  }
                  v81 = sub_100BF4B0(this, 4);
                  v40 = sub_100BF520(v39, "Glove_L");
                  sub_100C1600(v39, v40, v81);
                  sub_101AB3B0("blood_zombie_split_spray", 4, v39, "ForeArm_L", 0);
                  sub_100C1600(this, 4, 0);
                }
              }
            }
            else if ( v35 == 2 || v35 == 8 || v35 == 6 || v35 == 10 )
            {
              if ( *(int *)(this + 4404) <= 0 )
              {
                v48 = sub_100BF520(this, "arms");
                v50 = sub_100BF4B0(this, v48) & 0x80000001;
                v49 = v50 == 0;
                if ( v50 < 0 )
                  v49 = (((_BYTE)v50 - 1) | 0xFFFFFFFE) == -1;
                if ( v49 )
                {
                  sub_1023C380((int)"Player.Splat", 0.0, 0);
                  v51 = sub_100BF520(this, "arms");
                  v52 = sub_100BF4B0(this, v51) + 1;
                  sub_100D7330((void *)this);
                  sub_101AB3B0("blood_zombie_split_spray", 4, this, "UpperArm_L", 0);
                  v53 = sub_100BF520(this, "arms");
                  sub_100C1600(this, v53, v52);
                  sub_100BEFA0((void *)this, "ForeArm_L", (int)&v91, (int)&v94);
                  sub_100BEFA0((void *)this, "UpperArm_L", (int)&v91, (int)&v88);
                  v54 = sub_101CDCC0(this, *(_BYTE **)(this + 1872), (float *)&v91, (float *)&v94);
                  sub_100EBE30(v54, 1);
                  *(_DWORD *)(v54 + 848) = *(_DWORD *)(this + 848);
                  sub_101AB3B0("blood_zombie_split_spray", 4, v54, "ForeArm_L", 0);
                }
              }
            }
            else if ( *(int *)(this + 4404) <= 0 )
            {
              v41 = sub_100BF520(this, "arms");
              if ( sub_100BF4B0(this, v41) < 2
                || (v42 = sub_100BF520(this, "arms"), sub_100BF4B0(this, v42) > 3)
                && (v43 = sub_100BF520(this, "arms"), sub_100BF4B0(this, v43) < 6) )
              {
                sub_1023C380((int)"Player.Splat", 0.0, 0);
                v44 = sub_100BF520(this, "arms");
                v45 = sub_100BF4B0(this, v44);
                sub_100D7330((void *)this);
                sub_101AB3B0("blood_zombie_split_spray", 4, this, "UpperArm_L", 0);
                v46 = sub_100BF520(this, "arms");
                sub_100C1600(this, v46, v45 + 2);
                sub_100BEFA0((void *)this, "ForeArm_L", (int)&v91, (int)&v94);
                sub_100BEFA0((void *)this, "UpperArm_L", (int)&v91, (int)&v88);
                v47 = sub_101CDCC0(this, *(_BYTE **)(this + 1872), (float *)&v91, (float *)&v94);
                sub_100EBE30(v47, 1);
                sub_100C1600(v47, 1, v45 % 2);
                v80 = "ForeArm_L";
                v76 = v47;
                v75 = "blood_zombie_split_spray";
                goto LABEL_117;
              }
            }
            break;
          case 9:
          case 10:
            *(_DWORD *)(this + 4408) = (int)((double)*(int *)(this + 4408) - *(float *)(a3 + 52));
            v55 = *(_DWORD *)(this + 4396);
            if ( v55 == 1 )
            {
              if ( *(int *)(this + 4408) <= 0 )
              {
                v56 = sub_100BF520(this, "arms");
                if ( sub_100BF4B0(this, v56) < 2 )
                {
                  sub_1023C380((int)"Player.Splat", 0.0, 0);
                  v57 = sub_100BF4B0(this, 3);
                  sub_100D7330((void *)this);
                  sub_101AB3B0("blood_zombie_split_spray", 4, this, "UpperArm_R", 0);
                  sub_100C1600(this, 3, v57 + 2);
                  sub_100BEFA0((void *)this, "ForeArm_R", (int)&v91, (int)&v94);
                  sub_100BEFA0((void *)this, "UpperArm_R", (int)&v91, (int)&v88);
                  v58 = sub_101CDCC0(this, *(_BYTE **)(this + 1876), (float *)&v91, (float *)&v94);
                  sub_100EBE30(v58, 1);
                  if ( *(int *)(this + 848) > 2 )
                  {
                    a2 = 1;
                    sub_10031670((_DWORD *)(v58 + 848), &a2);
                  }
                  v82 = sub_100BF4B0(this, 5);
                  v59 = sub_100BF520(v58, "Glove_R");
                  sub_100C1600(v58, v59, v82);
                  sub_101AB3B0("blood_zombie_split_spray", 4, v58, "ForeArm_R", 0);
                  sub_100C1600(this, 5, 0);
                }
              }
            }
            else if ( v55 == 2 || v55 == 8 || v55 == 6 || v55 == 10 )
            {
              if ( *(int *)(this + 4408) <= 0 )
              {
                v65 = sub_100BF520(this, "arms");
                if ( sub_100BF4B0(this, v65) < 2 )
                {
                  sub_1023C380((int)"Player.Splat", 0.0, 0);
                  v66 = sub_100BF520(this, "arms");
                  v67 = sub_100BF4B0(this, v66);
                  sub_100D7330((void *)this);
                  sub_101AB3B0("blood_zombie_split_spray", 4, this, "UpperArm_R", 0);
                  v68 = sub_100BF520(this, "arms");
                  sub_100C1600(this, v68, v67 + 2);
                  sub_100BEFA0((void *)this, "ForeArm_R", (int)&v91, (int)&v94);
                  sub_100BEFA0((void *)this, "UpperArm_R", (int)&v91, (int)&v88);
                  v47 = sub_101CDCC0(this, *(_BYTE **)(this + 1876), (float *)&v91, (float *)&v94);
                  sub_100EBE30(v47, 1);
                  v80 = "ForeArm_R";
                  v76 = v47;
                  v75 = "blood_zombie_split_spray";
LABEL_117:
                  *(_DWORD *)(v47 + 848) = *(_DWORD *)(this + 848);
                  sub_101AB3B0(v75, 4, v76, v80, 0);
                }
              }
            }
            else if ( *(int *)(this + 4408) <= 0 )
            {
              v60 = sub_100BF520(this, "arms");
              if ( sub_100BF4B0(this, v60) < 4 )
              {
                sub_1023C380((int)"Player.Splat", 0.0, 0);
                v61 = sub_100BF520(this, "arms");
                v62 = sub_100BF4B0(this, v61);
                sub_100D7330((void *)this);
                sub_101AB3B0("blood_zombie_split_spray", 4, this, "UpperArm_R", 0);
                v63 = sub_100BF520(this, "arms");
                sub_100C1600(this, v63, v62 + 4);
                sub_100BEFA0((void *)this, "ForeArm_R", (int)&v91, (int)&v94);
                sub_100BEFA0((void *)this, "UpperArm_R", (int)&v91, (int)&v88);
                v64 = sub_101CDCC0(this, *(_BYTE **)(this + 1876), (float *)&v91, (float *)&v94);
                sub_100EBE30(v64, 1);
                sub_100C1600(v64, 1, v62 % 2);
                *(_DWORD *)(v64 + 848) = *(_DWORD *)(this + 848);
                sub_101AB3B0("blood_zombie_split_spray", 4, v64, "ForeArm_R", 0);
              }
            }
            break;
          case 12:
            v10 = sub_100BF520(this, "helmet");
            v11 = sub_100BF4B0(this, v10);
            v12 = *(_DWORD *)(this + 4396);
            if ( (v12 == 6 || v12 == 8) && v11 )
            {
              v13 = sub_100BF520(this, "helmet");
              sub_100C1600(this, v13, 0);
              sub_100D7330((void *)this);
              sub_100BEFA0((void *)this, "Eyes", (int)&v88, (int)&v94);
              v14 = *(const char **)(*(int (__thiscall **)(int, int *))(*(_DWORD *)this + 28))(this, &a3);
              if ( !v14 )
                v14 = String;
              if ( !_stricmp(v14, "models/combine_soldier_prisonguard.mdl") )
                sub_101CB6F0(
                  this,
                  (int)"item_helmet_prison",
                  *(float *)&v88,
                  v89,
                  v90,
                  *(float *)&v94,
                  v95,
                  v96,
                  1,
                  v11);
              else
                sub_101CB6F0(this, (int)"item_helmet_guard", *(float *)&v88, v89, v90, *(float *)&v94, v95, v96, 1, v11);
            }
            else if ( v12 == 10 && v11 )
            {
              v15 = sub_100BF520(this, "helmet");
              sub_100C1600(this, v15, 0);
              sub_100D7330((void *)this);
              sub_100BEFA0((void *)this, "Eyes", (int)&v94, (int)&v88);
              if ( v11 <= 3 )
              {
                sub_101CB6F0(this, (int)"item_helmet_pmc", *(float *)&v94, v95, v96, *(float *)&v88, v89, v90, 1, v11);
              }
              else
              {
                sub_101CB6F0(this, (int)"item_headset_pmc", *(float *)&v94, v95, v96, *(float *)&v88, v89, v90, 1, v11);
                if ( v11 == 5 )
                  sub_101CB6F0(this, (int)"item_cap_pmc", *(float *)&v94, v95, v96, *(float *)&v88, v89, v90, 1, 5);
              }
            }
            v16 = (int)((double)*(int *)(this + 4400) - *(float *)(v4 + 52));
            *(_DWORD *)(this + 4400) = v16;
            if ( v16 <= 0 )
            {
              if ( (v17 = sub_100BF520(this, "head"), sub_100BF4B0(this, v17) < 9) && *(_DWORD *)(this + 4396) != 6
                || *(_DWORD *)(this + 4396) == 6 && (v18 = sub_100BF520(this, "head"), sub_100BF4B0(this, v18) < 10) )
              {
                if ( (v19 = *(_DWORD *)(this + 4396), v19 != 8) && v19 != 10
                  || (v20 = sub_100BF520(this, "head"), !sub_100BF4B0(this, v20)) )
                {
                  sub_1023C380((int)"Player.HeadShot", 0.0, 0);
                  sub_100D7330((void *)this);
                  v21 = *(_DWORD *)(this + 4396);
                  if ( v21 == 6 )
                  {
                    v22 = sub_100BF520(this, "respirator");
                    if ( sub_100BF4B0(this, v22) )
                    {
                      v23 = sub_100BF520(this, "respirator");
                      sub_100C1600(this, v23, 0);
                      sub_100BEFA0((void *)this, "Eyes", (int)&v94, (int)&v91);
                      sub_101CB6F0(
                        this,
                        (int)"item_respirator_guard",
                        *(float *)&v94,
                        v95,
                        v96,
                        *(float *)&v91,
                        v92,
                        v93,
                        0,
                        0);
                    }
                    v24 = sub_100BF520(this, "head");
                    if ( sub_100BF4B0(this, v24) >= 9 )
                    {
                      v78 = sub_100BF520(this, "head");
                      sub_100C1600(this, v78, 11);
                    }
                    else
                    {
                      v77 = sub_100BF520(this, "head");
                      sub_100C1600(this, v77, 10);
                    }
                  }
                  else if ( v21 == 8
                         && sub_100BF520(this, "gasmask") != -1
                         && (v25 = sub_100BF520(this, "gasmask"), sub_100BF4B0(this, v25)) )
                  {
                    v26 = sub_100BF520(this, "gasmask");
                    sub_100C1600(this, v26, 0);
                    sub_100BEFA0((void *)this, "Eyes", (int)&v94, (int)&v91);
                    sub_101CB6F0(
                      this,
                      (int)"item_gasmask_prison",
                      *(float *)&v94,
                      v95,
                      v96,
                      *(float *)&v91,
                      v92,
                      v93,
                      0,
                      0);
                    v79 = sub_100BF520(this, "head");
                    sub_100C1600(this, v79, 1);
                  }
                  else
                  {
                    sub_100C1600(this, 1, 9);
                  }
                  v27 = *(_DWORD *)(this + 4396);
                  if ( v27 == 8 || v27 == 10 )
                  {
                    v28 = sub_100BF520(this, "head");
                    sub_100C1600(this, v28, 1);
                  }
                  if ( !*(_DWORD *)(this + 4396) )
                  {
                    a2 = 0;
                    sub_10031670((_DWORD *)(this + 848), &a2);
                  }
                  v29 = *(_DWORD *)(v4 + 16);
                  v30 = *(_DWORD *)(v4 + 24);
                  v95 = *(int *)(v4 + 20);
                  v94 = v29;
                  v96 = v30;
                  v31 = (_DWORD *)sub_100232D0((_DWORD *)v4);
                  v32 = sub_10019640(v31);
                  v33 = *v32;
                  v34 = *((float *)v32 + 1);
                  v93 = v32[2];
                  v91 = v33;
                  *(float *)&v92 = v34;
                  *(float *)&v88 = *(float *)&v94 - *(float *)&v33;
                  *(float *)&v89 = *(float *)&v95 - v34;
                  *(float *)&v90 = *(float *)&v96 - (*(float *)&v93 + 64.0);
                  off_10689714();
                  *(float *)&v91 = *(float *)&v88 * 128.0 + *(float *)&v94;
                  *(float *)&v92 = *(float *)&v89 * 128.0 + *(float *)&v95;
                  *(float *)&v93 = 128.0 * *(float *)&v90 + *(float *)&v96;
                  sub_1002A5F0((int)&savedregs, this, (float *)&v94, (float *)&v91, 1174421507, this, 0, (int)v86);
                  if ( v87[18] )
                    (*(void (__thiscall **)(int, _BYTE *, const char *))(*(_DWORD *)this + 304))(
                      this,
                      v86,
                      "Blood_Trace");
                  sub_101AB3B0("blood_zombie_split_spray", 4, this, "Neck", 0);
                }
              }
            }
            break;
          default:
            return;
        }
      }
    }
  }
}
