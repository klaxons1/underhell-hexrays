void __userpurge sub_10379310(int *a1@<ecx>, int a2@<edi>, int a3)
{
  int v3; // esi
  int v5; // eax
  int v6; // eax
  void (__thiscall *v7)(int *, int *); // edx
  int *v8; // ecx
  int i; // eax
  int *v10; // ecx
  float *v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  float *v16; // eax
  int (__thiscall *v17)(int *); // edx
  _DWORD *v18; // eax
  float *v19; // eax
  int v20; // esi
  int (__thiscall *v21)(int *, float *, _DWORD, _DWORD, _DWORD); // edx
  int v22; // eax
  int v23; // esi
  unsigned __int8 (__thiscall *v24)(int, int); // eax
  double v25; // st7
  double v26; // st7
  double v27; // st7
  float *v28; // eax
  int (*v29)(void); // eax
  int v30; // eax
  bool v31; // zf
  int v32; // eax
  float *v33; // esi
  _DWORD *v34; // eax
  float *v35; // eax
  double v36; // st7
  float *v37; // eax
  double v38; // st6
  double v39; // rt2
  double v40; // st5
  double v41; // rtt
  double v42; // st5
  double v43; // rt0
  double v44; // st5
  int (__thiscall *v45)(int *); // eax
  int v46; // eax
  int v47; // [esp+14h] [ebp-F0h]
  float v48; // [esp+14h] [ebp-F0h]
  float v49; // [esp+18h] [ebp-ECh]
  _BYTE v50[64]; // [esp+24h] [ebp-E0h] BYREF
  _BYTE v51[12]; // [esp+64h] [ebp-A0h] BYREF
  _BYTE v52[12]; // [esp+70h] [ebp-94h] BYREF
  float v53; // [esp+7Ch] [ebp-88h]
  float v54; // [esp+80h] [ebp-84h]
  float v55[16]; // [esp+84h] [ebp-80h] BYREF
  float v56[3]; // [esp+C4h] [ebp-40h] BYREF
  float v57[3]; // [esp+D0h] [ebp-34h] BYREF
  float v58[3]; // [esp+DCh] [ebp-28h] BYREF
  int v59; // [esp+E8h] [ebp-1Ch]
  float v60; // [esp+ECh] [ebp-18h] BYREF
  float v61; // [esp+F0h] [ebp-14h]
  float v62; // [esp+F4h] [ebp-10h]
  float v63; // [esp+F8h] [ebp-Ch] BYREF
  int v64; // [esp+FCh] [ebp-8h] BYREF
  float v65; // [esp+100h] [ebp-4h]
  int savedregs; // [esp+104h] [ebp+0h] BYREF

  v3 = a3;
  switch ( *(_DWORD *)a3 )
  {
    case 0x4B:
      if ( (*(int (__thiscall **)(int *))(*a1 + 368))(a1) )
      {
        v14 = (*(int (__thiscall **)(int *))(*a1 + 368))(a1);
        HIBYTE(a3) = sub_10370900(v14);
        if ( HIBYTE(a3) )
        {
          v15 = (*(int (__thiscall **)(int *))(*a1 + 368))(a1);
          v16 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v15 + 536))(v15, v51);
          v63 = *v16 * 0.5;
          *(float *)&v64 = v16[1] * 0.5;
          v17 = *(int (__thiscall **)(int *))(*a1 + 368);
          v65 = 0.5 * v16[2];
          v18 = (_DWORD *)v17(a1);
          v19 = (float *)sub_10019640(v18);
          v20 = *a1;
          v21 = *(int (__thiscall **)(int *, float *, _DWORD, _DWORD, _DWORD))(*a1 + 368);
          v57[0] = v63 + *v19;
          v57[1] = v19[1] + *(float *)&v64;
          v57[2] = v19[2] + v65;
          v22 = v21(a1, v57, 1.0, 0.80000001, 0.0);
          (*(void (__thiscall **)(int *, int))(v20 + 1704))(a1, v22);
        }
        sub_10039F40(a1, 18);
        v23 = *(_DWORD *)(dword_106E86DC + 48);
        v24 = *(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 172);
        v59 = v23;
        if ( v24(dword_106B3CDC, 1) )
          v59 = --v23;
        v25 = *(float *)(dword_106E88D4 + 44);
        v65 = *(float *)(dword_106E88D4 + 44);
        if ( HIBYTE(a3) )
        {
          v25 = 0.0;
          v65 = 0.0;
        }
        v26 = v25 + *(float *)(dword_106B31C8 + 12);
        a1[1135] = v23;
        a1[1136] = 0;
        *((_BYTE *)a1 + 4290) = 0;
        *((float *)a1 + 1138) = v26;
        if ( !(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 1) )
          *((_BYTE *)a1 + 4290) = 1;
        v27 = *(float *)(dword_106E888C + 44);
        a1[1047] = 2;
        *((float *)a1 + 1056) = v27 * (double)v59 + v65 + *(float *)(dword_106B31C8 + 12);
      }
      else
      {
        (*(void (__thiscall **)(int *, int))(*a1 + 1312))(a1, 6);
      }
      break;
    case 0x4C:
      v29 = *(int (**)(void))(*a1 + 368);
      a1[685] = *(int *)(dword_106B31C8 + 12);
      if ( v29()
        && (v30 = (*(int (__thiscall **)(int *))(*a1 + 368))(a1),
            (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v30 + 320))(v30)) )
      {
        sub_10043E90(a1, dword_106E84EC);
      }
      else
      {
        sub_10043E90(a1, 64);
      }
      break;
    case 0x71:
      sub_10082A70((float *)a1[647], 1u);
      v45 = *(int (__thiscall **)(int *))(*a1 + 1020);
      a1[593] = 0;
      v46 = v45(a1);
      sub_10039F40(a1, v46);
      a3 = 1;
      sub_100316C0((_BYTE *)a1 + 224, (char *)&a3);
      break;
    case 0x97:
      sub_103762F0((float *)a1, (int)&savedregs, a2, a3);
      break;
    case 0x98:
      if ( *(_DWORD *)(dword_106E906C + 48) )
      {
        v12 = sub_1001F3C0(a1);
        Msg("Hunter %d dodging\n", v12);
      }
      sub_10039F40(a1, a1[1058]);
      break;
    case 0x99:
      if ( !*((_BYTE *)a1 + 4288) )
        goto LABEL_16;
      if ( (*(int (__thiscall **)(int *))(*a1 + 368))(a1) )
      {
        v13 = (*(int (__thiscall **)(int *))(*a1 + 368))(a1);
        if ( sub_10370900(v13) )
          goto LABEL_16;
      }
      sub_10039F40(a1, dword_106E84E0);
      break;
    case 0x9A:
      *((float *)a1 + 1050) = *(float *)(dword_106B31C8 + 12) + 100.0;
      sub_10027CD0(a1, 0);
      break;
    case 0x9B:
      v8 = (int *)a1[699];
      if ( v8 && sub_100B16F0(v8, 1) > 1 )
      {
        for ( i = sub_100B1560((_DWORD *)a1[699], &a3, 1); (int *)i == a1; i = sub_100B1630((_DWORD *)a1[699], &a3, 1) )
          ;
        v10 = (int *)i;
      }
      else
      {
        v10 = a1;
      }
      v11 = (float *)sub_10019640(v10);
      a1[716] = *(int *)v11;
      a1[717] = *((int *)v11 + 1);
      a1[718] = *((int *)v11 + 2);
LABEL_16:
      sub_10027CD0(a1, 0);
      break;
    case 0x9C:
      sub_1023C380(a1, (int)"NPC_Hunter.FlankAnnounce", 0.0, 0);
      sub_10027CD0(a1, 0);
      break;
    case 0x9D:
      qmemcpy(v55, sub_100BCD00(a1), 0x30u);
      v55[12] = 0.0;
      v55[13] = 0.0;
      v55[14] = 0.0;
      v55[15] = 1.0;
      v28 = (float *)sub_10426060(v50);
      sub_102C8C70(v28, v58, (float *)a1 + 1069);
      v48 = sub_10029300((float *)a1, v58);
      sub_10019C10(a1, dword_106742FC, v48);
      (*(void (__thiscall **)(int *, _DWORD))(*a1 + 1416))(a1, 0);
      (*(void (__thiscall **)(int *, int))(*a1 + 1416))(a1, dword_106E84F0);
      break;
    case 0x9E:
      *((float *)a1 + 1147) = *(float *)(dword_106B31C8 + 12) + *(float *)(a3 + 4);
      break;
    case 0x9F:
      v31 = (*(int (__thiscall **)(int *))(*a1 + 368))(a1) == 0;
      v32 = *a1;
      if ( v31 )
      {
        (*(void (__thiscall **)(int *, const char *))(v32 + 1312))(a1, "No enemy to sidestep");
      }
      else
      {
        (*(void (__thiscall **)(int *, _DWORD, _DWORD, float *))(v32 + 528))(a1, 0, 0, v56);
        v33 = (float *)sub_10019640(a1);
        v34 = (_DWORD *)(*(int (__thiscall **)(int *))(*a1 + 368))(a1);
        v35 = (float *)sub_10019640(v34);
        v60 = *v35 - *v33;
        v61 = v35[1] - v33[1];
        v62 = v35[2] - v33[2];
        sub_100FDF10(&v63, &v60, v56);
        off_10689714();
        if ( !(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 1) )
        {
          v63 = v63 * -1.0;
          *(float *)&v64 = *(float *)&v64 * -1.0;
          v65 = -1.0 * v65;
        }
        v36 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                dword_106B31E4,
                120.0,
                200.0);
        v60 = v63 * v36;
        v61 = *(float *)&v64 * v36;
        v62 = v36 * v65;
        v37 = (float *)sub_10019640(a1);
        v38 = v37[1];
        v39 = v37[2] + 64.0;
        v40 = *v37 + v60;
        v58[0] = v40;
        v41 = v40;
        v42 = v38 + v61;
        v58[1] = v42;
        v43 = v42;
        v44 = v39 + v62;
        v58[2] = v44;
        v60 = v41;
        v61 = v43;
        v62 = v44 - 128.0;
        sub_1002A5F0((int)&savedregs, (int)v33, v58, &v60, 33701899, 0, 0, (int)v52);
        if ( v55[6] >= 1.0 )
        {
          (*(void (__thiscall **)(int *, const char *))(*a1 + 1312))(a1, "Couldn't find sidestep position\n");
        }
        else
        {
          *((float *)a1 + 716) = v53;
          *((float *)a1 + 717) = v54;
          a1[718] = SLODWORD(v55[0]);
          sub_10027CD0(a1, 0);
        }
      }
      break;
    case 0xA0:
      sub_10039F40(a1, dword_106E84D0);
      break;
    case 0xA1:
      *((float *)a1 + 1051) = *(float *)(dword_106B31C8 + 12) + *(float *)(a3 + 4);
      sub_10027CD0(a1, 0);
      break;
    case 0xA2:
      if ( (*(int (__thiscall **)(int *))(*a1 + 368))(a1) )
      {
        v5 = (*(int (__thiscall **)(int *))(*a1 + 368))(a1);
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 220))(v5) == 3 )
        {
          v49 = *(float *)(dword_106B31C8 + 12) + 10.0;
          v47 = (*(int (__thiscall **)(int *))(*a1 + 368))(a1);
          v6 = (*(int (__thiscall **)(int *))(*a1 + 1868))(a1);
          sub_10077890(v6, v47, v49);
        }
      }
      if ( sub_1026A890((unsigned int *)a1 + 1158) )
        sub_10372B80(a1);
      sub_10027CD0(a1, 0);
      goto LABEL_8;
    case 0xA3:
LABEL_8:
      v7 = *(void (__thiscall **)(int *, int *))(*a1 + 1256);
      v65 = *(float *)(v3 + 4);
      v64 = 129;
      v7(a1, &v64);
      break;
    default:
      sub_1001E620(a1, (_DWORD *)a3);
      break;
  }
}
