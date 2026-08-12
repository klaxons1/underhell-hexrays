// bad sp value at call has been detected, the output may be wrong!
int __userpurge sub_10117A40@<eax>(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, _DWORD *a5)
{
  double v6; // st6
  float v7; // eax
  float v8; // ecx
  float v9; // edx
  float *v10; // eax
  int v11; // edx
  float *v12; // eax
  float v15[22]; // [esp+24h] [ebp-FCh] BYREF
  _BYTE v16[12]; // [esp+7Ch] [ebp-A4h] BYREF
  _BYTE v17[76]; // [esp+88h] [ebp-98h] BYREF
  _BYTE v18[12]; // [esp+D4h] [ebp-4Ch] BYREF
  _BYTE v19[24]; // [esp+E0h] [ebp-40h] BYREF
  float *v20; // [esp+F8h] [ebp-28h]
  float v21[2]; // [esp+FCh] [ebp-24h] BYREF
  float v22; // [esp+104h] [ebp-1Ch]
  float v23; // [esp+108h] [ebp-18h]
  float v24; // [esp+10Ch] [ebp-14h]
  float v25; // [esp+110h] [ebp-10h]
  int v26; // [esp+114h] [ebp-Ch]
  void *v27; // [esp+118h] [ebp-8h]
  void *retaddr; // [esp+120h] [ebp+0h]

  v26 = a2;
  v27 = retaddr;
  v6 = *(float *)(a1 + 1208);
  v7 = *(float *)(a1 + 1208);
  v8 = *(float *)(a1 + 1212);
  v9 = *(float *)(a1 + 1216);
  v23 = v7;
  v24 = v8;
  v25 = v9;
  if ( v6 == flt_106F1CA8 && *(float *)(a1 + 1212) == flt_106F1CAC && *(float *)(a1 + 1216) == flt_106F1CB0 )
  {
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    v23 = *(float *)(a1 + 580);
    v24 = *(float *)(a1 + 584);
    v25 = *(float *)(a1 + 588);
  }
  *(float *)&v10 = COERCE_FLOAT((*(int (__thiscall **)(_DWORD *, int, int))(a5[80] + 8))(a5 + 80, a3, a4));
  v11 = a5[80];
  v20 = v10;
  v12 = (float *)(*(int (__thiscall **)(_DWORD *))(v11 + 4))(a5 + 80);
  v21[0] = v23;
  v21[1] = v24;
  v22 = *(float *)&v20 - 500.0;
  sub_1001F200(v15, (float *)LODWORD(v22), v21, v12, v20);
  sub_10265570(a5, 0);
  (*(void (__thiscall **)(int, float *, int, _BYTE *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v15,
    33570827,
    v19,
    v16);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v16, (int)v17, 255, 255, 0, 1, -1.0);
  (*(void (__thiscall **)(_DWORD *, _BYTE *, _DWORD, float *))(*a5 + 416))(a5, v17, 0, &flt_106F1CA8);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  (*(void (__thiscall **)(_DWORD *, _BYTE *))(*a5 + 504))(a5, v19);
  off_10689714();
  sub_10422620(1.0, v21, v18);
  return sub_101E1CC0(v18, 0);
}
