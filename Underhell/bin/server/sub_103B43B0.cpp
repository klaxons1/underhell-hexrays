// bad sp value at call has been detected, the output may be wrong!
void __userpurge sub_103B43B0(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, float *a5)
{
  int (__thiscall *v6)(int, _DWORD); // edx
  double v7; // st7
  int v8; // esi
  float *v9; // eax
  int (__stdcall *v10)(char); // edx
  _BYTE v12[12]; // [esp+50h] [ebp-F4h] BYREF
  float v13; // [esp+5Ch] [ebp-E8h] BYREF
  float v14; // [esp+60h] [ebp-E4h]
  float v15; // [esp+64h] [ebp-E0h]
  float v16[3]; // [esp+ACh] [ebp-98h] BYREF
  float v17[4]; // [esp+B8h] [ebp-8Ch] BYREF
  float v18[10]; // [esp+C8h] [ebp-7Ch] BYREF
  float v19; // [esp+F0h] [ebp-54h]
  float v20; // [esp+F4h] [ebp-50h]
  float v21; // [esp+F8h] [ebp-4Ch]
  int v22; // [esp+FCh] [ebp-48h]
  __int16 v23; // [esp+100h] [ebp-44h]
  int v24; // [esp+104h] [ebp-40h]
  int v25; // [esp+108h] [ebp-3Ch]
  int v26; // [esp+10Ch] [ebp-38h]
  char v27; // [esp+110h] [ebp-34h]
  float v28; // [esp+118h] [ebp-2Ch]
  float v29; // [esp+11Ch] [ebp-28h] BYREF
  float v30; // [esp+120h] [ebp-24h]
  float v31; // [esp+124h] [ebp-20h]
  float v32; // [esp+128h] [ebp-1Ch] BYREF
  float v33; // [esp+12Ch] [ebp-18h]
  float v34; // [esp+130h] [ebp-14h]
  int v35; // [esp+134h] [ebp-10h]
  _DWORD v36[3]; // [esp+138h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+144h] [ebp+0h]

  v36[0] = a2;
  v36[1] = retaddr;
  v32 = *a5;
  v33 = a5[1];
  v34 = a5[2] - 100.0;
  v29 = *a5;
  v30 = a5[1];
  v31 = a5[2] + 48.0;
  sub_1001F180(v18, &v29, &v32);
  sub_10265570(v16, a1, 0);
  (*(void (__thiscall **)(int, float *, int, float *, _BYTE *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v18,
    16395,
    v16,
    v12,
    a3,
    a4);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v12, (int)&v13, 255, 0, 0, 1, 5.0);
  v6 = *(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31E4 + 8);
  v35 = 120;
  v35 = v6(dword_106B31E4, 0);
  v34 = 0.0;
  v33 = COERCE_FLOAT(&v29);
  v28 = (float)v35;
  v29 = v13;
  v30 = v14;
  v31 = v15 + 1.0;
  if ( ((**(int (__thiscall ***)(int, float *, _DWORD))dword_106B31F4)(dword_106B31F4, &v29, 0) & 0x4030) != 0 )
  {
    v34 = v15 + 100.0;
    v7 = sub_10261EE0((int)v36, &v13, v15, v34);
    v17[3] = 0.0;
    v18[0] = 0.0;
    v18[1] = 0.0;
    v18[5] = 0.0;
    v18[6] = 0.0;
    v23 = 0;
    v18[7] = 0.0;
    v18[9] = 0.0;
    v22 = 0;
    v19 = 1.0;
    v24 = 0;
    v25 = 0;
    v20 = 0.0;
    v26 = 0;
    v21 = 0.0;
    v27 = 0;
    v18[8] = 0.0;
    v17[0] = v13;
    v17[1] = v14;
    v17[2] = v7;
    v18[2] = 0.0;
    v18[3] = 0.0;
    v18[4] = 1.0;
    v19 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            10.0,
            14.0);
    sub_1028E890((int)"watersplash", (int)v17);
  }
  else
  {
    v8 = 0;
    v35 = 0;
    do
    {
      v34 = (double)v35 + v28;
      v9 = sub_102650F0(v16, v34);
      v32 = *v9 * 10.0;
      v33 = v9[1] * 10.0;
      off_10689714();
      v34 = 0.25;
      off_10689714();
      v10 = (*off_1061B7A0)[4];
      v34 = 50.0;
      v33 = 12.0;
      v32 = COERCE_FLOAT(&v32);
      ((void (__thiscall *)(int (__stdcall ***)(char), float *))v10)(off_1061B7A0, &v13);
      v8 += 120;
      v35 = v8;
    }
    while ( v8 < 360 );
  }
  sub_10261B70(&v13, 4.0, 1.0, 0.5, 1000.0, 0, 0);
  if ( *(_DWORD *)(dword_106EB4D4 + 48) )
    sub_1021A8D0(&v13, *(float *)(dword_106EB4D4 + 44), *(float *)(dword_106EB51C + 44));
  sub_1023D4B0(67108872, &v13, 512, 1.0, a1, 0, 0);
}
