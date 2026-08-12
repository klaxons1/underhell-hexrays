// bad sp value at call has been detected, the output may be wrong!
float *__userpurge sub_103E0F70@<eax>(int a1@<ecx>, int a2@<ebp>, int a3@<esi>, float *a4)
{
  unsigned int v5; // eax
  int v6; // ecx
  unsigned int v7; // eax
  _DWORD *v8; // ecx
  unsigned int v9; // eax
  int v10; // ecx
  float *v11; // eax
  double v12; // st7
  unsigned int v13; // eax
  int v14; // ecx
  float *v15; // eax
  float *result; // eax
  _BYTE v18[12]; // [esp+24h] [ebp-F4h] BYREF
  float v19[20]; // [esp+30h] [ebp-E8h] BYREF
  int v20; // [esp+80h] [ebp-98h] BYREF
  float v21[10]; // [esp+8Ch] [ebp-8Ch] BYREF
  float v22[13]; // [esp+B4h] [ebp-64h] BYREF
  _DWORD v23[3]; // [esp+E8h] [ebp-30h] BYREF
  float v24[3]; // [esp+F4h] [ebp-24h] BYREF
  float v25; // [esp+100h] [ebp-18h] BYREF
  float v26; // [esp+104h] [ebp-14h]
  float v27; // [esp+108h] [ebp-10h]
  int v28; // [esp+10Ch] [ebp-Ch]
  void *v29; // [esp+110h] [ebp-8h]
  void *retaddr; // [esp+118h] [ebp+0h]

  v28 = a2;
  v29 = retaddr;
  if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 240))(dword_106B3CDC, a3) == 2 )
  {
    v22[6] = NAN;
    v5 = *(_DWORD *)(a1 + 1640);
    v22[8] = *(float *)(dword_106CEF94 + 44);
    v22[9] = *(float *)(dword_106BB52C + 44);
    if ( v5 == -1 || off_1061BE18[4 * (v5 & 0xFFF) + 2] != v5 >> 12 )
      v6 = 0;
    else
      v6 = off_1061BE18[4 * (v5 & 0xFFF) + 1];
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)v6 + 1496))(v6, v22);
    v25 = v22[0];
    v26 = v22[1];
    v27 = v22[2];
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 1640);
    if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 1640) & 0xFFF) + 2] != v7 >> 12 )
      v8 = 0;
    else
      v8 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(a1 + 1640) & 0xFFF) + 1];
    sub_100F5A30(v8, (int)&v25, 0, 0);
  }
  v9 = *(_DWORD *)(a1 + 1640);
  if ( v9 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 1640) & 0xFFF) + 2] != v9 >> 12 )
    v10 = 0;
  else
    v10 = off_1061BE18[4 * (*(_DWORD *)(a1 + 1640) & 0xFFF) + 1];
  v11 = (float *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v10 + 504))(v10, v23);
  v24[0] = v25 * 56755.84 + *v11;
  v24[1] = v26 * 56755.84 + v11[1];
  v12 = 56755.84 * v27 + v11[2];
  v13 = *(_DWORD *)(a1 + 1640);
  v24[2] = v12;
  if ( v13 == -1 || off_1061BE18[4 * (v13 & 0xFFF) + 2] != v13 >> 12 )
    v14 = 0;
  else
    v14 = off_1061BE18[4 * (v13 & 0xFFF) + 1];
  v15 = (float *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v14 + 504))(v14, &v20);
  sub_1001F180(v21, v15, v24);
  sub_10265570(v23, a1, 0);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v21,
    1174421507,
    v23,
    v18);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v18, (int)v19, 255, 0, 0, 1, 5.0);
  result = a4;
  *a4 = v19[0];
  a4[1] = v19[1];
  a4[2] = v19[2];
  return result;
}
