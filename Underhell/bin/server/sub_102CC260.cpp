// bad sp value at call has been detected, the output may be wrong!
float *__userpurge sub_102CC260@<eax>(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, float *a5)
{
  unsigned int v6; // eax
  int *v7; // ecx
  int v8; // esi
  int v9; // eax
  int (__thiscall *v10)(int, _DWORD); // edx
  float *v11; // eax
  double v12; // st7
  double v13; // st6
  double v14; // st5
  float *result; // eax
  float v18[20]; // [esp+2Ch] [ebp-DCh] BYREF
  _BYTE v19[12]; // [esp+7Ch] [ebp-8Ch] BYREF
  float v20[20]; // [esp+88h] [ebp-80h] BYREF
  float v21[3]; // [esp+D8h] [ebp-30h] BYREF
  _DWORD v22[3]; // [esp+E4h] [ebp-24h] BYREF
  float v23; // [esp+F0h] [ebp-18h] BYREF
  float v24; // [esp+F4h] [ebp-14h]
  float v25; // [esp+F8h] [ebp-10h]
  int v26; // [esp+FCh] [ebp-Ch]
  void *v27; // [esp+100h] [ebp-8h]
  void *retaddr; // [esp+108h] [ebp+0h]

  v26 = a2;
  v27 = retaddr;
  v6 = *(_DWORD *)(a1 + 920);
  if ( v6 == -1 || (v7 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 920) & 0xFFF) + 1], v7[1] != v6 >> 12) )
    v8 = 0;
  else
    v8 = *v7;
  v9 = (*(int (__thiscall **)(int, _DWORD *, int, int))(*(_DWORD *)v8 + 504))(v8, v22, a3, a4);
  v23 = *(float *)v9;
  v24 = *(float *)(v9 + 4);
  v10 = *(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 924);
  v25 = *(float *)(v9 + 8);
  v11 = (float *)v10(v8, LODWORD(v24));
  v12 = *v11;
  v13 = v11[1];
  v14 = v11[2];
  v21[0] = v12 * 8192.0 + COERCE_FLOAT(&v23);
  v21[1] = v13 * 8192.0 + COERCE_FLOAT(v21);
  v21[2] = 8192.0 * v14 + v25;
  v23 = COERCE_FLOAT(&v23) + v12 * 24.0;
  v24 = COERCE_FLOAT(v21) + v13 * 24.0;
  v25 = v14 * 24.0 + v25;
  sub_1001F180(v18, (float *)LODWORD(v23), (float *)LODWORD(v24));
  sub_10265570(v22, a1, 0);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v18,
    33570881,
    v22,
    v19);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v19, (int)v20, 255, 0, 0, 1, 5.0);
  result = a5;
  *a5 = v20[0];
  a5[1] = v20[1];
  a5[2] = v20[2];
  return result;
}
