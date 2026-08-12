void __userpurge sub_10363A10(int *a1@<ecx>, int a2@<edi>, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ebx
  int v6; // eax
  float *v7; // eax
  double v8; // st6
  _DWORD *v9; // eax
  int v10; // eax
  int v11; // ecx
  int (__thiscall *v12)(int); // eax
  float *v13; // eax
  int v14; // ebx
  double v15; // st6
  double v16; // st5
  double v17; // st7
  double v18; // st7
  float *v19; // eax
  int v20; // edi
  _DWORD *v21; // eax
  _DWORD *v22; // eax
  int v23; // eax
  int v24; // ebx
  int v25; // eax
  float *v26; // eax
  double v27; // st6
  int v28; // ecx
  int (__thiscall *v29)(int); // eax
  float *v30; // eax
  int v31; // ecx
  double v32; // st7
  double v33; // st7
  int *v34; // ebx
  int v35; // edi
  float *v36; // eax
  float v37; // ebx
  int v38; // eax
  int v39; // eax
  int v40; // eax
  _DWORD *v41; // eax
  int v42; // eax
  float *v43; // eax
  double v44; // st7
  float *v45; // ebx
  float *v46; // eax
  void (__thiscall *v47)(int, float *); // edx
  int v48; // eax
  float *v49; // ebx
  float *v50; // eax
  double v51; // st7
  int v52; // ebx
  double v53; // st7
  int v54; // eax
  float *v55; // eax
  void (__thiscall *v56)(int, float *, float *); // edx
  double v57; // st7
  void (__thiscall *v58)(int, int *, int *); // eax
  int v59; // eax
  float *v60; // eax
  double v61; // st6
  double v62; // st7
  int v63; // ecx
  int (__thiscall *v64)(int); // eax
  float *v65; // eax
  int v66; // ecx
  double v67; // st7
  double v68; // st7
  int v69; // ecx
  float *v70; // eax
  _DWORD *v71; // eax
  _DWORD *v72; // eax
  int v73; // eax
  void (__thiscall *v74)(int, float *, int *); // edx
  __int64 v75; // [esp+30h] [ebp-128h]
  float v76[12]; // [esp+48h] [ebp-110h] BYREF
  float v77[12]; // [esp+78h] [ebp-E0h] BYREF
  float v78[12]; // [esp+A8h] [ebp-B0h] BYREF
  float v79[3]; // [esp+D8h] [ebp-80h] BYREF
  float v80; // [esp+E4h] [ebp-74h] BYREF
  float v81; // [esp+E8h] [ebp-70h]
  float v82; // [esp+ECh] [ebp-6Ch]
  int v83; // [esp+F0h] [ebp-68h] BYREF
  float v84; // [esp+F4h] [ebp-64h]
  float v85; // [esp+F8h] [ebp-60h]
  float v86; // [esp+FCh] [ebp-5Ch] BYREF
  float v87; // [esp+100h] [ebp-58h]
  float v88; // [esp+104h] [ebp-54h]
  float v89; // [esp+108h] [ebp-50h] BYREF
  float v90; // [esp+10Ch] [ebp-4Ch]
  float v91; // [esp+110h] [ebp-48h]
  float v92; // [esp+114h] [ebp-44h] BYREF
  float v93; // [esp+118h] [ebp-40h]
  float v94; // [esp+11Ch] [ebp-3Ch]
  float v95; // [esp+120h] [ebp-38h] BYREF
  float v96; // [esp+124h] [ebp-34h]
  float v97; // [esp+128h] [ebp-30h]
  int v98; // [esp+12Ch] [ebp-2Ch] BYREF
  float v99; // [esp+130h] [ebp-28h]
  float v100; // [esp+134h] [ebp-24h]
  int v101; // [esp+138h] [ebp-20h]
  int v102; // [esp+13Ch] [ebp-1Ch] BYREF
  float v103; // [esp+140h] [ebp-18h]
  float v104; // [esp+144h] [ebp-14h]
  int v105; // [esp+148h] [ebp-10h] BYREF
  float v106; // [esp+14Ch] [ebp-Ch]
  float v107; // [esp+150h] [ebp-8h]
  int v108; // [esp+154h] [ebp-4h]
  int *v109; // [esp+160h] [ebp+8h]
  int v110; // [esp+160h] [ebp+8h]

  switch ( *a3 )
  {
    case 2:
      if ( sub_10022810((float *)a1) )
        sub_10027CD0(a1, 0);
      if ( sub_1026A890((unsigned int *)a1 + 1046) )
      {
        if ( !*((_BYTE *)a1 + 4288) )
        {
          v20 = a1[651];
          v21 = (_DWORD *)sub_1026A890((unsigned int *)a1 + 1046);
          v22 = sub_10019640(v21);
          sub_10078690(v20, (int)v22, 0.0, 0.0);
          (*(void (__thiscall **)(int, int))(*(_DWORD *)a1[651] + 76))(a1[651], -1);
        }
      }
      return;
    case 0x81:
      if ( a1[581] == 4 || *((_BYTE *)a1 + 2680) )
        goto LABEL_77;
      if ( !(unsigned __int8)sub_103E0CF0(0) )
        goto LABEL_41;
      v24 = *(_DWORD *)(sub_1026A890((unsigned int *)a1 + 1046) + 424);
      if ( v24 )
      {
        if ( ((*(int (__thiscall **)(int))(*(_DWORD *)v24 + 76))(v24) & 4) != 0 )
          (*(void (__thiscall **)(int *, const char *))(*a1 + 1312))(a1, "Player picked it up!");
        if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v24 + 8))(v24) && !sub_1007E040((_DWORD *)a1[647]) )
        {
          v25 = sub_1026A890((unsigned int *)a1 + 1046);
          v26 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v25 + 576))(v25);
          v27 = *((float *)a1 + 180) - v26[1];
          v95 = *((float *)a1 + 179) - *v26;
          v96 = v27;
          off_10689714();
          v97 = 0.0;
          v28 = sub_1026A890((unsigned int *)a1 + 1046);
          v29 = *(int (__thiscall **)(int))(*(_DWORD *)v28 + 576);
          *(float *)&v102 = v95 * 96.0;
          v103 = 96.0 * v96;
          v30 = (float *)v29(v28);
          v31 = a1[647];
          *(float *)&v105 = *v30 + *(float *)&v102;
          v106 = v30[1] + v103;
          v107 = v30[2];
          v100 = v107;
          v98 = v105;
          v99 = v106;
          sub_10081C10(v31);
          *(float *)&v102 = *(float *)&v105 - *((float *)a1 + 179);
          v103 = v106 - *((float *)a1 + 180);
          v32 = v107 - *((float *)a1 + 181);
          v104 = v32;
          sub_100D7A40((float *)&v102);
          *(float *)&v108 = v32;
          v101 = 11;
          *(float *)&v102 = *(float *)&v105 - *((float *)a1 + 179);
          v103 = v106 - *((float *)a1 + 180);
          v33 = v107 - *((float *)a1 + 181);
          v104 = v33;
          sub_100D7A40((float *)&v102);
          if ( v33 <= 128.0 )
            v101 = 6;
          v34 = (int *)a1[647];
          v35 = *v34;
          v36 = sub_10042450(v78, (float *)&v98, v101, -1.0, 0, dword_106726F4);
          (*(void (__thiscall **)(int *, float *, int))(v35 + 20))(v34, v36, 8);
          if ( *(float *)&v108 <= 96.0 )
          {
            sub_10027CD0(a1, 0);
            sub_10082A70((float *)a1[647], 1u);
          }
        }
LABEL_41:
        sub_1001E820(a1, a3);
      }
      else
      {
        Warning("npc_dog TASK_WAIT_FOR_MOVEMENT with NULL m_hPhysicsEnt->VPhysicsGetObject\n");
        sub_1001E820(a1, a3);
      }
      return;
    case 0x97:
      v4 = a1 + 1046;
      if ( sub_1012B040((unsigned int *)a1 + 1046, 0) )
        sub_10360BB0((int)a1, (int)v4, 0.0, 0);
      if ( sub_1012B040((unsigned int *)a1 + 1046, 0) )
      {
        (*(void (__thiscall **)(int *, const char *))(*a1 + 1312))(a1, "Can't find an object I like!");
      }
      else
      {
        v5 = *(_DWORD *)(sub_1026A890((unsigned int *)a1 + 1046) + 424);
        v6 = sub_1026A890((unsigned int *)a1 + 1046);
        v7 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 576))(v6);
        v8 = *((float *)a1 + 180) - v7[1];
        *(float *)&v105 = *((float *)a1 + 179) - *v7;
        v106 = v8;
        off_10689714();
        v107 = 0.0;
        v9 = (_DWORD *)sub_1026A890((unsigned int *)a1 + 1046);
        if ( !sub_10019B00(v9) )
        {
          v10 = sub_1026A890((unsigned int *)a1 + 1046);
          (*(void (__thiscall **)(int, int *))(*(_DWORD *)v10 + 76))(v10, a1);
        }
        if ( v5 )
          (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 104))(v5);
        v11 = sub_1026A890((unsigned int *)a1 + 1046);
        v12 = *(int (__thiscall **)(int))(*(_DWORD *)v11 + 576);
        *(float *)&v98 = *(float *)&v105 * 96.0;
        v99 = v106 * 96.0;
        v100 = 96.0 * v107;
        v13 = (float *)v12(v11);
        v14 = 11;
        v15 = v13[1] + v99;
        v16 = *v13 + *(float *)&v98;
        v17 = v13[2] + v100;
        *(float *)&v98 = v16;
        v99 = v15;
        v100 = v17;
        *(float *)&v102 = v16 - *((float *)a1 + 179);
        v103 = v15 - *((float *)a1 + 180);
        v18 = v17 - *((float *)a1 + 181);
        v104 = v18;
        sub_100D7A40((float *)&v102);
        if ( v18 <= 128.0 )
          v14 = 6;
        v109 = (int *)a1[647];
        v108 = *v109;
        v19 = sub_10042450(v77, (float *)&v98, v14, -1.0, 0, dword_106726F4);
        if ( (*(unsigned __int8 (__thiscall **)(int *, float *, int))(v108 + 20))(v109, v19, 8) == 1 )
          goto LABEL_25;
        *((float *)a1 + 1044) = *(float *)(dword_106B31C8 + 12) + 0.1;
        *((float *)a1 + 1071) = *(float *)(dword_106B31C8 + 12) + 0.3;
        *((float *)a1 + 1043) = *(float *)(dword_106B31C8 + 12) + 0.1;
        if ( sub_10319100(a1 + 1073, (unsigned int *)a1 + 1046) == -1 )
          sub_10194990(a1 + 1073, a1[1076], a1 + 1046);
        *v4 = -1;
        sub_10081C10(a1[647]);
      }
      return;
    case 0x98:
      sub_10363720((int)a1, a2, 0.0);
      return;
    case 0x99:
      if ( (*(unsigned __int8 (__thiscall **)(int *))(*a1 + 732))(a1) )
      {
        if ( sub_1026A890((unsigned int *)a1 + 1046) )
        {
          v23 = sub_1026A890((unsigned int *)a1 + 1046);
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v23 + 76))(v23, 0);
        }
LABEL_25:
        sub_10027CD0(a1, 0);
      }
      return;
    case 0x9B:
      if ( (unsigned __int8)sub_103E0CF0(0) )
      {
        v37 = *(float *)a1;
        v38 = sub_1026A890((unsigned int *)a1 + 1046);
        if ( (*(unsigned __int8 (__thiscall **)(int *, int, int, _DWORD))(LODWORD(v37) + 548))(a1, v38, 16449, 0) )
        {
          v40 = sub_1026A890((unsigned int *)a1 + 1046);
          (*(void (__thiscall **)(int, int *))(*(_DWORD *)v40 + 76))(v40, a1);
          v41 = sub_1001F410(a1);
          sub_10422220(v41, &v98);
          sub_100BD6D0(a1, a1[1048], (int)&v80, 0, 0, 0);
          v42 = sub_1026A890((unsigned int *)a1 + 1046);
          v43 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v42 + 576))(v42);
          v95 = *v43 - v80;
          v96 = v43[1] - v81;
          v44 = v43[2] - v82;
          v97 = v44;
          sub_100D7A40(&v95);
          *(float *)&v110 = v44;
          off_10689714();
          *(float *)&v108 = COERCE_FLOAT(sub_1026A890((unsigned int *)a1 + 1046));
          v45 = (float *)sub_10019640(a1);
          v46 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v108 + 576))(v108);
          v47 = *(void (__thiscall **)(int, float *))(*a1 + 1836);
          v79[0] = *v46 - *v45;
          v79[1] = v46[1] - v45[1];
          v79[2] = v46[2] - v45[2];
          v47((int)a1, v79);
          if ( *(int *)(dword_106B31C8 + 20) <= 1 )
            v101 = sub_10261B20();
          else
            v101 = 0;
          v108 = v110;
          if ( v101 )
          {
            v48 = sub_1026A890((unsigned int *)a1 + 1046);
            v49 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v48 + 576))(v48);
            v50 = (float *)sub_10019640((_DWORD *)v101);
            *(float *)&v102 = *v50 - *v49;
            v103 = v50[1] - v49[1];
            v51 = v50[2] - v49[2];
            v104 = v51;
            sub_100D7A40((float *)&v102);
            *(float *)&v108 = v51;
          }
          v52 = *(_DWORD *)(sub_1026A890((unsigned int *)a1 + 1046) + 424);
          if ( v52 )
          {
            if ( ((*(int (__thiscall **)(int))(*(_DWORD *)v52 + 76))(v52) & 4) == 0
              && *(float *)&v110 + *(float *)&v110 < *(float *)&v108 )
            {
              v53 = *(float *)(dword_106B31C8 + 12);
              if ( v53 >= *((float *)a1 + 1045) )
              {
                (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v52 + 204))(v52, &v92, &v89);
                sub_100D7A40(&v92);
                *(float *)&v108 = v53;
                off_10689714();
                if ( *(float *)&v110 <= 200.0 )
                {
                  v54 = sub_1026A890((unsigned int *)a1 + 1046);
                  v55 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v54 + 576))(v54);
                  *(float *)&v105 = v80 - *v55;
                  v106 = v81 - v55[1];
                  v107 = v82 - v55[2];
                  off_10689714();
                  v56 = *(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v52 + 196);
                  v57 = *(float *)&v108 * 0.1;
                  v92 = v92 * v57;
                  v93 = v93 * v57;
                  v94 = v57 * v94;
                  v89 = v89 * 0.80000001;
                  v90 = v90 * 0.80000001;
                  v91 = 0.80000001 * v91;
                  v56(v52, &v92, &v89);
                  v58 = *(void (__thiscall **)(int, int *, int *))(*(_DWORD *)v52 + 208);
                  *(float *)&v105 = *(float *)&v105 * *(float *)&v110 * 2.0;
                  v106 = v106 * *(float *)&v110 * 2.0;
                  v107 = *(float *)&v110 * v107 * 2.0;
                  *(float *)&v102 = 0.0;
                  v103 = 0.0;
                  v104 = 0.0;
                  v58(v52, &v105, &v102);
                  sub_10363410((int)a1);
                }
                if ( *(float *)&v110 >= 200.0
                  && *(float *)&v110 <= 400.0
                  && v92 * *(float *)&v98 + v99 * v93 + v100 * v94 > -0.3
                  && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v52 + 8))(v52)
                  && ((*(int (__thiscall **)(int))(*(_DWORD *)v52 + 76))(v52) & 4) == 0 )
                {
                  v59 = sub_1026A890((unsigned int *)a1 + 1046);
                  v60 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v59 + 576))(v59);
                  v61 = *((float *)a1 + 180) - v60[1];
                  v62 = *((float *)a1 + 181) - v60[2];
                  *(float *)&v105 = *((float *)a1 + 179) - *v60;
                  v106 = v61;
                  v107 = v62;
                  off_10689714();
                  v107 = 0.0;
                  v63 = sub_1026A890((unsigned int *)a1 + 1046);
                  v64 = *(int (__thiscall **)(int))(*(_DWORD *)v63 + 576);
                  v86 = *(float *)&v105 * 96.0;
                  v87 = 96.0 * v106;
                  v65 = (float *)v64(v63);
                  v66 = a1[647];
                  *(float *)&v102 = *v65 + v86;
                  v103 = v65[1] + v87;
                  v104 = v65[2];
                  v85 = v104;
                  v83 = v102;
                  v84 = v103;
                  sub_10081C10(v66);
                  v67 = *(float *)&v102 - *((float *)a1 + 179);
                  v108 = 11;
                  v86 = v67;
                  v87 = v103 - *((float *)a1 + 180);
                  v68 = v104 - *((float *)a1 + 181);
                  v88 = v68;
                  sub_100D7A40(&v86);
                  v69 = 6;
                  if ( v68 > 128.0 )
                    v69 = v108;
                  v108 = a1[647];
                  v101 = *(_DWORD *)v108 + 20;
                  v70 = sub_10042450(v76, (float *)&v83, v69, -1.0, 0, dword_106726F4);
                  (*(void (__thiscall **)(int, float *, int))v101)(v108, v70, 8);
                }
              }
            }
          }
          else
          {
            Warning("npc_dog:  TASK_DOG_WAIT_FOR_OBJECT with m_hPhysicsEnt->VPhysicsGetObject == NULL\n");
          }
          if ( *(float *)&v98 * v95 + v99 * v96 + v100 * v97 < 0.2 )
          {
            v108 = a1[651];
            v71 = (_DWORD *)sub_1026A890((unsigned int *)a1 + 1046);
            v72 = sub_10019640(v71);
            sub_10078690(v108, (int)v72, 0.0, 0.0);
            (*(void (__thiscall **)(int, int))(*(_DWORD *)a1[651] + 76))(a1[651], -1);
          }
          if ( *(float *)(dword_106B31C8 + 12) <= (double)*((float *)a1 + 1044) || *((_BYTE *)a1 + 4197) )
          {
            if ( v52 && *(float *)&v110 <= 48.0 && ((*(int (__thiscall **)(int))(*(_DWORD *)v52 + 76))(v52) & 4) == 0 )
            {
              v74 = *(void (__thiscall **)(int, float *, int *))(*(_DWORD *)v52 + 196);
              *(float *)&v83 = 0.0;
              v84 = 0.0;
              v85 = 0.0;
              v74(v52, &flt_106F1CA8, &v83);
              sub_10082A70((float *)a1[647], 1u);
              HIDWORD(v75) = a1;
              LODWORD(v75) = a1;
              sub_1010DD80(a1 + 1057, v75, 0.0);
              *((_BYTE *)a1 + 4288) = 1;
              sub_10360B50(a1);
              sub_10027CD0(a1, 0);
            }
          }
          else
          {
            v73 = sub_1026A890((unsigned int *)a1 + 1046);
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v73 + 76))(v73, 0);
            *((float *)a1 + 1044) = 0.0;
            sub_10360B50(a1);
            (*(void (__thiscall **)(int *, const char *))(*a1 + 1312))(a1, "Done waiting!");
          }
        }
        else
        {
          *((float *)a1 + 1044) = 0.0;
          sub_10360B50(a1);
          (*(void (__thiscall **)(int *, const char *))(*a1 + 1312))(a1, "Lost sight of the object!");
          v39 = sub_1026A890((unsigned int *)a1 + 1046);
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v39 + 76))(v39, 0);
        }
      }
      else
      {
        sub_10082A70((float *)a1[647], 1u);
        sub_10360B50(a1);
        (*(void (__thiscall **)(int *, const char *))(*a1 + 1312))(a1, "No Physics Object!");
      }
      return;
    case 0x9C:
      if ( (*(unsigned __int8 (__thiscall **)(int *))(*a1 + 732))(a1) )
      {
        *((float *)a1 + 1044) = 0.0;
        sub_10027CD0(a1, 0);
      }
      return;
    case 0x9D:
      if ( sub_103600E0((unsigned int *)a1) )
        sub_10027CD0(a1, 0);
      return;
    default:
LABEL_77:
      sub_1001E820(a1, a3);
      return;
  }
}
