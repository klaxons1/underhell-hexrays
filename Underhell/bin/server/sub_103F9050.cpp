// bad sp value at call has been detected, the output may be wrong!
int __userpurge sub_103F9050@<eax>(int a1@<ecx>, float *a2@<ebp>, int a3@<edi>, int a4@<esi>, int a5)
{
  void (__thiscall *v6)(int, float *, int, int); // edx
  double v7; // st3
  double v8; // st6
  double v9; // st5
  int v10; // edx
  int (__thiscall *v11)(int, _DWORD); // eax
  float *v12; // eax
  void (__thiscall *v13)(int, float *); // edx
  float v14; // ecx
  const char *v15; // edi
  float v18[20]; // [esp+34h] [ebp-10Ch] BYREF
  _BYTE v19[12]; // [esp+84h] [ebp-BCh] BYREF
  int v20; // [esp+90h] [ebp-B0h] BYREF
  float v21; // [esp+9Ch] [ebp-A4h]
  float v22; // [esp+A0h] [ebp-A0h]
  float v23; // [esp+A4h] [ebp-9Ch]
  float v24; // [esp+B0h] [ebp-90h]
  _DWORD v25[3]; // [esp+E0h] [ebp-60h] BYREF
  float v26[3]; // [esp+ECh] [ebp-54h] BYREF
  float v27[3]; // [esp+F8h] [ebp-48h] BYREF
  float v28; // [esp+104h] [ebp-3Ch] BYREF
  float v29; // [esp+108h] [ebp-38h]
  float v30; // [esp+10Ch] [ebp-34h]
  float v31; // [esp+110h] [ebp-30h] BYREF
  float v32; // [esp+114h] [ebp-2Ch]
  float v33; // [esp+118h] [ebp-28h]
  float v34; // [esp+11Ch] [ebp-24h] BYREF
  float v35; // [esp+120h] [ebp-20h]
  float v36; // [esp+124h] [ebp-1Ch]
  float v37; // [esp+128h] [ebp-18h] BYREF
  float v38; // [esp+12Ch] [ebp-14h]
  float v39; // [esp+130h] [ebp-10h]
  float *v40; // [esp+134h] [ebp-Ch]
  void *v41; // [esp+138h] [ebp-8h]
  void *retaddr; // [esp+140h] [ebp+0h]

  v40 = a2;
  v41 = retaddr;
  v28 = 0.5;
  v29 = 0.5;
  v30 = 0.0;
  sub_101117D0(a5 + 320, &v28, &v37);
  v6 = *(void (__thiscall **)(int, float *, int, int))(*(_DWORD *)a5 + 904);
  v39 = v39 + 4.0;
  v6(a5, &v34, a3, a4);
  v36 = 0.0;
  off_10689714();
  v28 = v37;
  v29 = v38;
  v30 = COERCE_FLOAT(&v28) - 16.0;
  sub_1001F180(v18, &v37, &v28);
  sub_10265570(v25, a5, 0);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v18,
    33636363,
    v25,
    v19);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v19, (int)&v20, 255, 0, 0, 1, 5.0);
  if ( 1.0 != v24 )
  {
    v7 = v23 * v35 - v22 * v36;
    v8 = v36 * v21 - v23 * v34;
    v9 = v34 * v22 - v35 * v21;
    v34 = v22 * v9 - v23 * v8;
    v35 = v23 * v7 - v9 * v21;
    v36 = v8 * v21 - v22 * v7;
  }
  v10 = *(_DWORD *)a5;
  v39 = COERCE_FLOAT(&v37);
  v11 = *(int (__thiscall **)(int, _DWORD))(v10 + 576);
  v37 = v34 * 18.0 + v37;
  v39 = 18.0 * v36 + COERCE_FLOAT(&v37);
  v12 = (float *)v11(a5, LODWORD(v39));
  sub_103F8CE0(a5, (int *)a5, v12, v40);
  v13 = *(void (__thiscall **)(int, float *))(*(_DWORD *)a5 + 540);
  v40 = 0;
  v13(a5, &v31);
  v39 = 0.0;
  v38 = v14;
  v31 = v34 * 700.0 + v31;
  v32 = v35 * 700.0 + v32;
  v33 = 700.0 * v36 + v33;
  v26[0] = 0.0;
  v26[1] = *(float *)(a5 + 732);
  v26[2] = -90.0;
  v27[0] = 0.0;
  v27[1] = 0.0;
  v27[2] = 720.0;
  sub_102D5F00(&v37, v26, (int)&v31, (int)v27, a5, 3.0, 0);
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 1132))(a1, 12, 0.0);
  ++*(_DWORD *)(a1 + 1372);
  *(_BYTE *)(a1 + 1392) = 1;
  v15 = *(const char **)(a1 + 92);
  if ( !v15 )
    v15 = String;
  return (*(int (__thiscall **)(int, int, int, const char *))(*(_DWORD *)off_10627F88 + 116))(off_10627F88, a5, 1, v15);
}
