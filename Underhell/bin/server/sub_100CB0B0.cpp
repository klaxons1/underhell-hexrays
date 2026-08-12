// bad sp value at call has been detected, the output may be wrong!
int __userpurge sub_100CB0B0@<eax>(
        int a1@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        float *a5,
        float *a6,
        float *a7,
        float *a8,
        int a9,
        int a10,
        float a11,
        char a12)
{
  double v13; // st4
  double v14; // st6
  double v15; // st4
  double v16; // st5
  double v17; // st6
  float v18; // edx
  float v19; // eax
  int v20; // ecx
  int v21; // edi
  double v22; // st7
  float v24; // [esp+0h] [ebp-168h]
  float v25; // [esp+8h] [ebp-160h]
  _BYTE v27[88]; // [esp+14h] [ebp-154h] BYREF
  int v28; // [esp+6Ch] [ebp-FCh] BYREF
  float v29[23]; // [esp+BCh] [ebp-ACh] BYREF
  int v30; // [esp+118h] [ebp-50h] BYREF
  _DWORD v31[4]; // [esp+124h] [ebp-44h] BYREF
  int v32; // [esp+134h] [ebp-34h]
  float v33; // [esp+138h] [ebp-30h]
  char v34; // [esp+13Ch] [ebp-2Ch]
  float v35; // [esp+140h] [ebp-28h]
  float v36[2]; // [esp+144h] [ebp-24h] BYREF
  float v37; // [esp+14Ch] [ebp-1Ch]
  float v38; // [esp+150h] [ebp-18h] BYREF
  float v39; // [esp+154h] [ebp-14h]
  float v40; // [esp+158h] [ebp-10h]
  int v41; // [esp+15Ch] [ebp-Ch]
  void *v42; // [esp+160h] [ebp-8h]
  void *retaddr; // [esp+168h] [ebp+0h]

  v41 = a2;
  v42 = retaddr;
  if ( *(_DWORD *)(dword_10696714 + 48) )
  {
    v13 = a6[1] - a5[1];
    v14 = v13 * v13;
    v15 = *a6 - *a5;
    v16 = v14;
    v17 = a6[2] - a5[2];
    v25 = v15 * v15 + v16 + v17 * v17;
    v35 = off_10689708(v25);
    v38 = *a6 - *a5;
    v39 = a6[1] - a5[1];
    v40 = a6[2] - a5[2];
    off_10689714();
    v18 = a8[1];
    v19 = a8[2];
    v36[0] = *a8;
    v36[1] = v18;
    v36[0] = v36[0] + v35;
    v37 = v19;
    sub_1011BB60((int)a5, (int)a7, (int)v36, (int)&v38, 100, 255, 255, 20, 1.0);
    sub_1011BB60((int)a5, (int)a7, (int)a8, (int)&v38, 255, 0, 0, 20, 1.0);
  }
  v24 = (float)a9;
  sub_10248110(a1, a1, v24, 4, 0);
  v33 = a11;
  v31[3] = &v28;
  v34 = a12;
  v31[0] = &CTraceFilterMelee::`vftable';
  v31[1] = a1;
  v31[2] = 13;
  v32 = 0;
  sub_1001F200(v29, a5, a6, a7, a8);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v29,
    100679691,
    v31,
    v27,
    a3,
    a4);
  v20 = v32;
  v21 = v32;
  if ( !v32 )
  {
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    v22 = *(float *)(a1 + 580);
    v39 = COERCE_FLOAT(v36);
    v38 = v22;
    sub_10111910(a1 + 328, a1 + 340, &v30, *(float *)(a1 + 584));
    v40 = v37 + 1.0;
    sub_1001F200(v29, &v38, a6, a7, a8);
    (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
      dword_106B31F4,
      v29,
      100679691,
      v31,
      v27);
    v20 = v32;
    v21 = v32;
    if ( !v32 )
      return v21;
  }
  if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v20 + 252))(v20, a1) )
    return 0;
  else
    return v21;
}
