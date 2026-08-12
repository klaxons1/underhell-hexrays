// bad sp value at call has been detected, the output may be wrong!
void __userpurge sub_102D5560(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, int *a5)
{
  float v6; // eax
  float v7; // ecx
  int v8; // edx
  double v9; // st7
  void (__thiscall *v10)(int, float *, int, _DWORD *); // eax
  void (__thiscall *v11)(int, _DWORD, _DWORD); // edx
  double v12; // st7
  int v13; // eax
  int v14; // eax
  double v15; // st1
  void (__thiscall *v16)(int); // eax
  float v18[22]; // [esp+38h] [ebp-FCh] BYREF
  _BYTE v19[12]; // [esp+90h] [ebp-A4h] BYREF
  int v20; // [esp+9Ch] [ebp-98h] BYREF
  float v21; // [esp+A8h] [ebp-8Ch]
  float v22; // [esp+ACh] [ebp-88h]
  float v23; // [esp+B0h] [ebp-84h]
  float v24; // [esp+BCh] [ebp-78h]
  char v25; // [esp+C6h] [ebp-6Eh]
  char v26; // [esp+C7h] [ebp-6Dh]
  int *v27; // [esp+DCh] [ebp-58h]
  _DWORD v28[4]; // [esp+E8h] [ebp-4Ch] BYREF
  float v29; // [esp+F8h] [ebp-3Ch] BYREF
  float v30; // [esp+FCh] [ebp-38h]
  float v31; // [esp+100h] [ebp-34h]
  float v32; // [esp+104h] [ebp-30h] BYREF
  float v33; // [esp+108h] [ebp-2Ch]
  float v34; // [esp+10Ch] [ebp-28h]
  float *v35; // [esp+110h] [ebp-24h] BYREF
  float v36; // [esp+114h] [ebp-20h]
  int v37; // [esp+118h] [ebp-1Ch]
  float v38; // [esp+11Ch] [ebp-18h] BYREF
  float v39; // [esp+120h] [ebp-14h]
  float v40; // [esp+124h] [ebp-10h]
  int v41; // [esp+128h] [ebp-Ch]
  void *v42; // [esp+12Ch] [ebp-8h]
  void *retaddr; // [esp+134h] [ebp+0h]

  v41 = a2;
  v42 = retaddr;
  sub_100C9EC0((void *)a1, (int)a5);
  (*(void (__thiscall **)(int *, float *, float *, int, int))(*a5 + 204))(a5, &v38, &v29, a3, a4);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v6 = *(float *)(a1 + 584);
  v7 = *(float *)(a1 + 588);
  v35 = *(float **)(a1 + 580);
  v8 = *(_DWORD *)(a1 + 420);
  v36 = v6;
  v28[2] = v8;
  v28[0] = &CTraceFilterCollisionGroupDelta::`vftable';
  v28[1] = a1;
  v28[3] = 0;
  v9 = *(float *)(dword_106B31C8 + 16);
  *(float *)&v37 = v7;
  v32 = v38 * v9 + *(float *)&v35;
  v33 = v39 * v9 + v6;
  v34 = v9 * COERCE_FLOAT(&v32) + v7;
  sub_1001F180(v18, (float *)&v35, &v32);
  v10 = *(void (__thiscall **)(int, float *, int, _DWORD *))(*(_DWORD *)dword_106B31F4 + 16);
  v40 = COERCE_FLOAT(v19);
  v10(dword_106B31F4, v18, 1107296257, v28);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v19, (int)&v20, 255, 0, 0, 1, -1.0);
  if ( v26 )
  {
    if ( !*(_BYTE *)(a1 + 2148) )
    {
      v11 = *(void (__thiscall **)(int, _DWORD, _DWORD))(*a5 + 196);
      v38 = v38 * -0.2;
      v39 = 0.0 * -0.2;
      v40 = -0.2 * v40;
      v11((int)a5, LODWORD(v38), LODWORD(v39));
    }
    *(_BYTE *)(a1 + 2148) = 1;
  }
  else
  {
    *(_BYTE *)(a1 + 2148) = 0;
    if ( v24 < 1.0 || v25 )
    {
      v33 = v39;
      v32 = v38;
      v34 = v40;
      off_10689714();
      if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
        sub_100DAE60(a1);
      v12 = ((double (__thiscall *)(int *))*(_DWORD *)(*a5 + 116))(a5);
      v39 = 0.0;
      v38 = 0.0;
      *(float *)&v37 = v12 * v40;
      v36 = 0.1;
      v35 = (float *)(a1 + 580);
      v34 = COERCE_FLOAT(&v35);
      v13 = sub_100F4030((_DWORD *)a1);
      sub_102487B0((int)v18, a1, v13, (float *)LODWORD(v34), v35, v36, v37, SLODWORD(v38), SLODWORD(v39));
      sub_100D9E70(v27, a1, v18);
      v14 = *a5;
      v15 = v23 * v40 + v21 * v38 + v22 * v39;
      v38 = (v38 + v21 * -2.0 * v15) * 0.2;
      v39 = (v39 + v22 * -2.0 * v15) * 0.2;
      v40 = (v40 + v23 * -2.0 * v15) * 0.2;
      v29 = v29 * -0.5;
      v30 = v30 * -0.5;
      v31 = -0.5 * v31;
      v16 = *(void (__thiscall **)(int))(v14 + 196);
      v38 = COERCE_FLOAT(&v38);
      v16((int)a5);
    }
  }
}
