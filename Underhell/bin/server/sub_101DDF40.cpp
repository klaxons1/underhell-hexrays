// bad sp value at call has been detected, the output may be wrong!
void __userpurge sub_101DDF40(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, int a5)
{
  double v6; // st7
  int v7; // edx
  float v8; // ecx
  float v9; // edx
  float *v10; // edi
  float v11; // ecx
  int (__thiscall *v12)(int); // eax
  float v13; // ecx
  int v14; // eax
  double v15; // st7
  float v16; // edi
  double v17; // st7
  void (__thiscall *v18)(_DWORD, float *); // eax
  float v20[23]; // [esp+38h] [ebp-FCh] BYREF
  int v21; // [esp+94h] [ebp-A0h] BYREF
  float v22[3]; // [esp+A0h] [ebp-94h] BYREF
  float v23[3]; // [esp+ACh] [ebp-88h] BYREF
  float v24; // [esp+B8h] [ebp-7Ch]
  float v25; // [esp+BCh] [ebp-78h]
  float v26; // [esp+C0h] [ebp-74h]
  float v27; // [esp+CCh] [ebp-68h]
  char v28; // [esp+D7h] [ebp-5Dh]
  float *v29; // [esp+ECh] [ebp-48h]
  float v30[3]; // [esp+FCh] [ebp-38h] BYREF
  float v31[3]; // [esp+108h] [ebp-2Ch] BYREF
  float v32; // [esp+114h] [ebp-20h] BYREF
  float v33; // [esp+118h] [ebp-1Ch]
  float v34; // [esp+11Ch] [ebp-18h]
  float v35; // [esp+120h] [ebp-14h]
  float v36; // [esp+124h] [ebp-10h]
  int v37; // [esp+128h] [ebp-Ch]
  void *v38; // [esp+12Ch] [ebp-8h]
  void *retaddr; // [esp+134h] [ebp+0h]

  v37 = a2;
  v38 = retaddr;
  if ( *(_DWORD *)(a1 + 808) )
    sub_10260C10(a1, *(char **)(a1 + 808));
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  sub_10422220(a1 + 704, &v32);
  if ( (*(_DWORD *)(a1 + 248) & 2) != 0 )
    v6 = 56755.84086242099;
  else
    v6 = *(float *)(a1 + 804);
  v7 = *(_DWORD *)(a1 + 252);
  v36 = v6;
  if ( (v7 & 0x800) != 0 )
  {
    sub_100DAE60(a1);
    v6 = v36;
  }
  v8 = *(float *)(a1 + 584);
  v9 = *(float *)(a1 + 588);
  v30[0] = *(float *)(a1 + 580);
  v30[1] = v8;
  v30[2] = v9;
  v31[0] = v32 * v6 + v30[0];
  v31[1] = v33 * v6 + v8;
  v31[2] = v6 * v34 + v9;
  sub_1001F180(v20, v30, v31);
  sub_10265570(a1, 0);
  (*(void (__thiscall **)(int, float *, int, int *, float *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v20,
    1174421507,
    &v21,
    v22,
    a3,
    a4);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v22, (int)v23, 255, 0, 0, 1, 5.0);
  if ( *(_DWORD *)(dword_106BB424 + 48) )
  {
    sub_1011C120((int)v30, 24.0, 255, 255, 255, 0, 30.0);
    sub_1011BC50(v22, v23, 0, 255, 0, 0, 30.0);
  }
  if ( 1.0 != v27 )
  {
    if ( v28 )
    {
      v24 = -v32;
      v25 = -v33;
      v26 = -v34;
    }
    v10 = v29;
    v36 = v29[106];
    if ( v36 != 0.0 )
    {
      sub_10247EC0(v20);
      v11 = *(float *)(*(int (__thiscall **)(int, float))(*(_DWORD *)a1 + 8))(a1, COERCE_FLOAT(LODWORD(v36)));
      v12 = *(int (__thiscall **)(int))(*(_DWORD *)a1 + 8);
      v20[11] = v11;
      v13 = *(float *)v12(a1);
      v20[13] = 0.0;
      v20[1] = flt_106F1CA8;
      v20[10] = v13;
      v20[2] = flt_106F1CAC;
      v20[3] = flt_106F1CB0;
      v20[16] = 0.0;
      sub_100E8760(v10, (int)v20, (int)&v32, (int)v22);
      sub_10248230(v37, v38);
      v14 = *(_DWORD *)(a1 + 248);
      if ( (v14 & 3) != 0 )
        v15 = *(float *)(a1 + 800);
      else
        v15 = (1.0 - v27) * *(float *)(a1 + 800);
      v16 = v36;
      v35 = v15;
      if ( (v14 & 4) != 0 )
      {
        v17 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(*(_DWORD *)LODWORD(v36) + 116))(LODWORD(v36));
        v35 = v17 * v35;
      }
      if ( *(_DWORD *)(dword_106BB424 + 48) )
      {
        v31[0] = v24 * -128.0 + v23[0];
        sub_1011BC50(v23, v31, 255, 0, 0, 0, 30.0);
      }
      if ( (*(_DWORD *)(a1 + 248) & 8) == 0 )
      {
        v32 = -v24;
        v33 = -v25;
        v34 = -v26;
      }
      v18 = *(void (__thiscall **)(_DWORD, float *))(*(_DWORD *)LODWORD(v16) + 240);
      v36 = COERCE_FLOAT(v23);
      v18(LODWORD(v16), v31);
    }
  }
}
