void __thiscall sub_102A8850(int this, int a2)
{
  int v3; // eax
  int *v4; // ebx
  int *v5; // eax
  float v6; // edx
  int v7; // ecx
  float v8; // eax
  int v9; // edx
  float *v10; // eax
  double v11; // st7
  double v13; // st7
  float *v14; // eax
  int v15; // eax
  _DWORD *v16; // eax
  float *v17; // eax
  double v18; // st7
  _DWORD *v19; // eax
  float *v20; // eax
  _DWORD *v21; // eax
  float *v22; // eax
  _DWORD *v23; // eax
  float *v24; // eax
  int v25; // ecx
  unsigned __int8 (__thiscall *v26)(int, float *, _DWORD); // edx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  _DWORD *v30; // edi
  int v31; // ecx
  double v32; // st7
  int v33; // eax
  int v34; // ecx
  unsigned __int8 (__thiscall *v35)(int, _DWORD *, _DWORD); // edx
  _DWORD *v36; // eax
  _DWORD *v37; // eax
  int v38; // eax
  int v39; // edi
  int v40; // edi
  _DWORD *v41; // eax
  float *v42; // [esp+8h] [ebp-B4h]
  float v43; // [esp+Ch] [ebp-B0h]
  float v44[12]; // [esp+24h] [ebp-98h] BYREF
  _DWORD v45[12]; // [esp+54h] [ebp-68h] BYREF
  int v46; // [esp+84h] [ebp-38h] BYREF
  int v47; // [esp+88h] [ebp-34h] BYREF
  int v48; // [esp+8Ch] [ebp-30h]
  float v49; // [esp+90h] [ebp-2Ch]
  float v50; // [esp+94h] [ebp-28h]
  int v51; // [esp+98h] [ebp-24h] BYREF
  float v52; // [esp+9Ch] [ebp-20h]
  float v53; // [esp+A0h] [ebp-1Ch]
  int v54; // [esp+A4h] [ebp-18h] BYREF
  float v55; // [esp+A8h] [ebp-14h]
  float v56; // [esp+ACh] [ebp-10h]
  float v57; // [esp+B0h] [ebp-Ch]
  __int64 v58; // [esp+B4h] [ebp-8h]
  float v59; // [esp+C4h] [ebp+8h]

  switch ( *(_DWORD *)a2 )
  {
    case 0x186A0:
      v3 = sub_1026A890((unsigned int *)(this + 40));
      v4 = (int *)sub_102A9F50(v3);
      v5 = (int *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 576))(*(_DWORD *)(this + 4));
      v6 = *((float *)v5 + 1);
      v7 = *v5;
      v8 = *((float *)v5 + 2);
      v55 = v6;
      v9 = *v4;
      v54 = v7;
      v56 = v8;
      v10 = (float *)(*(int (__thiscall **)(int *))(v9 + 576))(v4);
      *(float *)&v51 = *v10 - *(float *)&v54;
      v52 = v10[1] - v55;
      v53 = v10[2] - v56;
      v11 = off_10689714();
      if ( v11 >= *(float *)(a2 + 4) )
      {
        v13 = v11 - *(float *)(a2 + 4);
        v57 = *(float *)&v51 * v13;
        *(float *)&v58 = v52 * v13;
        *((float *)&v58 + 1) = v13 * v53;
        v14 = (float *)sub_1004BF30((_DWORD *)this);
        *(float *)&v54 = *v14 + v57;
        v55 = v14[1] + *(float *)&v58;
        v56 = v14[2] + *((float *)&v58 + 1);
        v15 = sub_1026A890((unsigned int *)(this + 40));
        v43 = sub_102A9EA0(v15);
        v16 = (_DWORD *)sub_1026A890((unsigned int *)(this + 40));
        v42 = (float *)sub_10019640(v16);
        v17 = (float *)sub_1004BF30((_DWORD *)this);
        if ( sub_10113200(v17, (float *)&v51, v42, v43, (float *)&v46, (float *)&v47) )
        {
          v18 = *(float *)&v47;
          if ( *(float *)&v46 > (double)*(float *)&v47 )
            v18 = *(float *)&v46;
          v57 = *(float *)&v51 * v18;
          *(float *)&v58 = v52 * v18;
          *((float *)&v58 + 1) = v18 * v53;
          v19 = (_DWORD *)sub_1026A890((unsigned int *)(this + 40));
          v20 = (float *)sub_10019640(v19);
          *(float *)&v48 = *v20 + v57;
          v49 = v20[1] + *(float *)&v58;
          v50 = v20[2] + *((float *)&v58 + 1);
          v21 = (_DWORD *)sub_1026A890((unsigned int *)(this + 40));
          v22 = (float *)sub_10019640(v21);
          v59 = v22[1] - v55;
          *((float *)&v58 + 1) = fabs(*v22 - *(float *)&v54);
          v23 = (_DWORD *)sub_1026A890((unsigned int *)(this + 40));
          v24 = (float *)sub_10019640(v23);
          if ( fabs(v59) + *((float *)&v58 + 1) > fabs(*v24 - *(float *)&v48) + fabs(v24[1] - v49) )
          {
            v54 = v48;
            v55 = v49;
            v56 = v50;
          }
        }
        sub_10042450(v44, (float *)&v54, -1, -1.0, 0, dword_1065F650);
        v25 = *(_DWORD *)(*(_DWORD *)(this + 4) + 2588);
        v26 = *(unsigned __int8 (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v25 + 20);
        v58 = (__int64)*(float *)(a2 + 4);
        if ( !v26(v25, v44, v58) )
          goto LABEL_11;
        sub_1007DD70(327);
        v27 = sub_1026A890((unsigned int *)(this + 40));
        v28 = sub_102A9F50(v27);
        sub_1007DF80(v28);
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 12))(this, 0);
      }
      else
      {
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 12))(this, 0);
      }
      break;
    case 0x186A1:
      v29 = sub_1026A890((unsigned int *)(this + 40));
      v30 = (_DWORD *)v29;
      if ( (*(_DWORD *)(v29 + 252) & 0x800) != 0 )
        sub_100DAE60(v29);
      v45[0] = 4;
      v45[1] = v30[145];
      v45[2] = v30[146];
      v31 = v30[147];
      *(float *)&v45[8] = -1.0;
      *(float *)&v45[9] = -1.0;
      v32 = *(float *)(a2 + 4);
      memset(&v45[4], 255, 16);
      v33 = *(_DWORD *)(this + 4);
      v45[11] = dword_1065F650;
      v45[3] = v31;
      v45[10] = 0;
      v34 = *(_DWORD *)(v33 + 2588);
      v35 = *(unsigned __int8 (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)v34 + 20);
      v58 = (__int64)v32;
      if ( v35(v34, v45, (__int64)v32) )
      {
        v36 = (_DWORD *)sub_1026A890((unsigned int *)(this + 40));
        v37 = sub_1001F410(v36);
        sub_1007DF50((int)v37);
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 12))(this, 0);
      }
      else
      {
LABEL_11:
        (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 8))(this, 11);
      }
      break;
    case 0x186A2:
      if ( sub_1026A890((unsigned int *)(this + 40)) )
      {
        v40 = *(_DWORD *)(*(_DWORD *)(this + 4) + 2604);
        v41 = (_DWORD *)sub_1026A890((unsigned int *)(this + 40));
        *(float *)(v40 + 20) = *((float *)sub_1001F410(v41) + 1);
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 2076))(*(_DWORD *)(this + 4));
      }
      break;
    case 0x186A3:
      sub_102A8670((int *)this);
      v38 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 4, 6);
      v39 = *(_DWORD *)(this + 4);
      *(float *)(this + 20) = (double)v38 + *(float *)(dword_106B31C8 + 12);
      if ( (*(_DWORD *)(v39 + 252) & 0x800) != 0 )
        sub_100DAE60(v39);
      sub_1023D4B0(4096, (float *)(v39 + 580), 256, 2.0, v39, 0, 0);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 12))(this, 0);
      break;
    default:
      sub_1004B450((_BYTE *)this, a2);
      break;
  }
}
