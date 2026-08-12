void __thiscall sub_1029BFB0(int this, _DWORD *a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  float *v5; // eax
  int v6; // ebx
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  int v9; // eax
  int v10; // eax
  void (__thiscall *v11)(int, _DWORD); // eax
  int v12; // ebx
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  int v15; // eax
  int v16; // ecx
  int (__thiscall *v17)(int, _BYTE *); // eax
  float *v18; // eax
  int v19; // ecx
  float *v20; // eax
  int v21; // ebx
  _DWORD *v22; // eax
  _DWORD *v23; // eax
  int v24; // eax
  int v25; // ecx
  int (__thiscall *v26)(int, _BYTE *); // eax
  float *v27; // eax
  int v28; // ecx
  float *v29; // eax
  int v30; // [esp+14h] [ebp-88h]
  float v31; // [esp+14h] [ebp-88h]
  float v32; // [esp+14h] [ebp-88h]
  float v33[12]; // [esp+24h] [ebp-78h] BYREF
  _BYTE v34[12]; // [esp+54h] [ebp-48h] BYREF
  _BYTE v35[12]; // [esp+60h] [ebp-3Ch] BYREF
  int v36; // [esp+6Ch] [ebp-30h] BYREF
  float v37; // [esp+70h] [ebp-2Ch]
  float v38; // [esp+74h] [ebp-28h]
  float v39; // [esp+78h] [ebp-24h] BYREF
  float v40; // [esp+7Ch] [ebp-20h]
  float v41; // [esp+80h] [ebp-1Ch]
  float v42; // [esp+84h] [ebp-18h] BYREF
  float v43; // [esp+88h] [ebp-14h]
  float v44; // [esp+8Ch] [ebp-10h]
  float v45; // [esp+90h] [ebp-Ch] BYREF
  float v46; // [esp+94h] [ebp-8h]
  float v47; // [esp+98h] [ebp-4h]
  float v48; // [esp+A4h] [ebp+8h]
  float v49; // [esp+A4h] [ebp+8h]

  switch ( *a2 )
  {
    case 0x186A0:
      if ( (unsigned __int8)sub_102DC130(this + 20) )
        goto LABEL_10;
      sub_1026A890((unsigned int *)(this + 20));
      sub_102CA260(&v36);
      sub_10042450(v33, (float *)&v36, -1, -1.0, 0, dword_1065E4F0);
      LODWORD(v33[11]) = sub_1026A890((unsigned int *)(this + 20));
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD, float *, _DWORD))(**(_DWORD **)(*(_DWORD *)(this + 4) + 2588) + 20))(
             *(_DWORD *)(*(_DWORD *)(this + 4) + 2588),
             v33,
             0) )
      {
        v3 = (_DWORD *)sub_1026A890((unsigned int *)(this + 20));
        v4 = sub_1001F410(v3);
        sub_1007DF50((int)v4);
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 12))(this, 0);
      }
      else
      {
        (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(this + 4) + 1312))(
          *(_DWORD *)(this + 4),
          "NO PATH");
        *(float *)(this + 28) = *(float *)(dword_106B31C8 + 12) + 10.0;
      }
      break;
    case 0x186A1:
      if ( (unsigned __int8)sub_102DC130(this + 20) )
        goto LABEL_10;
      sub_1026A890((unsigned int *)(this + 20));
      sub_102CA260(&v42);
      v5 = (float *)sub_1004BF30((_DWORD *)this);
      if ( fabs(v42 - *v5) > 16.0 || fabs(v43 - v5[1]) > 16.0 || fabs(v44 - v5[2]) > 48.0 )
      {
        (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(this + 4) + 1312))(
          *(_DWORD *)(this + 4),
          "Not correctly on func_tank man point");
        v9 = sub_1026A890((unsigned int *)(this + 20));
        sub_102CAAA0(v9);
      }
      else
      {
        v6 = *(_DWORD *)(*(_DWORD *)(this + 4) + 2604);
        v7 = (_DWORD *)sub_1026A890((unsigned int *)(this + 20));
        v8 = sub_10019640(v7);
        sub_10078690(v6, (int)v8, 0.0, 0.0);
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 2076))(*(_DWORD *)(this + 4));
      }
      break;
    case 0x186A2:
      if ( (unsigned __int8)sub_102DC130(this + 20) )
        goto LABEL_10;
      if ( sub_10027B80(*(void **)(this + 4))
        || !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 1884))(*(_DWORD *)(this + 4)) )
      {
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 1644))(*(_DWORD *)(this + 4), 1001);
        v30 = *(_DWORD *)(this + 4);
        v10 = sub_1026A890((unsigned int *)(this + 20));
        sub_102CD970(v10, v30);
        sub_10021880(*(void **)(this + 4));
        v11 = *(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 12);
        *(_BYTE *)(this + 24) = 1;
        v11(this, 0);
        sub_10039F40(*(int **)(this + 4), 330);
      }
      else
      {
        *(_DWORD *)(*(_DWORD *)(this + 4) + 2792) = 1;
      }
      break;
    case 0x186A3:
      if ( (unsigned __int8)sub_102DC130(this + 20) )
        goto LABEL_10;
      *(float *)(*(_DWORD *)(this + 4) + 2820) = *(float *)(dword_106B31C8 + 12) + 5.0;
      break;
    case 0x186A4:
      if ( (unsigned __int8)sub_102DC130(this + 20) )
        goto LABEL_10;
      v12 = *(_DWORD *)(*(_DWORD *)(this + 4) + 2604);
      v13 = (_DWORD *)sub_1026A890((unsigned int *)(this + 20));
      v14 = sub_10019640(v13);
      sub_10078690(v12, (int)v14, 0.0, 0.0);
      v48 = *(float *)(sub_1026A890((unsigned int *)(this + 20)) + 944);
      v15 = sub_1026A890((unsigned int *)(this + 20));
      v31 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              0.0,
              *(float *)(v15 + 952))
          + v48;
      v39 = 0.0;
      v41 = 0.0;
      v40 = sub_100195E0(v31);
      sub_10422220(&v39, &v36);
      v16 = *(_DWORD *)(this + 4);
      v17 = *(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v16 + 504);
      v42 = *(float *)&v36 * 256.0;
      v43 = v37 * 256.0;
      v44 = 256.0 * v38;
      v18 = (float *)v17(v16, v35);
      v19 = *(_DWORD *)(this + 4);
      v45 = *v18 + v42;
      v46 = v18[1] + v43;
      v47 = v18[2] + v44;
      (*(void (__thiscall **)(int, float *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v19 + 1804))(v19, &v45, 1.0, 2.0, 0.2);
      v43 = v46;
      v42 = v45;
      v44 = v47;
      v20 = (float *)sub_1026A890((unsigned int *)(this + 20));
      v20[273] = v45;
      v20[274] = v43;
      v20[275] = v44;
      break;
    case 0x186A5:
      if ( (unsigned __int8)sub_102DC130(this + 20) )
        goto LABEL_10;
      v21 = *(_DWORD *)(*(_DWORD *)(this + 4) + 2604);
      v22 = (_DWORD *)sub_1026A890((unsigned int *)(this + 20));
      v23 = sub_10019640(v22);
      sub_10078690(v21, (int)v23, 0.0, 0.0);
      v49 = *(float *)(sub_1026A890((unsigned int *)(this + 20)) + 944);
      v24 = sub_1026A890((unsigned int *)(this + 20));
      v32 = v49
          - ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              0.0,
              *(float *)(v24 + 952));
      *(float *)&v36 = 0.0;
      v38 = 0.0;
      v37 = sub_100195E0(v32);
      sub_10422220(&v36, &v39);
      v25 = *(_DWORD *)(this + 4);
      v26 = *(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v25 + 504);
      v42 = v39 * 256.0;
      v43 = v40 * 256.0;
      v44 = 256.0 * v41;
      v27 = (float *)v26(v25, v34);
      v28 = *(_DWORD *)(this + 4);
      v45 = *v27 + v42;
      v46 = v27[1] + v43;
      v47 = v27[2] + v44;
      (*(void (__thiscall **)(int, float *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v28 + 1804))(v28, &v45, 1.0, 2.0, 0.2);
      v43 = v46;
      v42 = v45;
      v44 = v47;
      v29 = (float *)sub_1026A890((unsigned int *)(this + 20));
      v29[273] = v45;
      v29[274] = v43;
      v29[275] = v44;
      break;
    case 0x186A6:
      if ( (unsigned __int8)sub_102DC130(this + 20) )
LABEL_10:
        (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 8))(this, 1);
      break;
    case 0x186A7:
      if ( !(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 3) )
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 1644))(*(_DWORD *)(this + 4), 1002);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 12))(this, 0);
      break;
    default:
      sub_1004B450((_BYTE *)this, (int)a2);
      break;
  }
}
