// bad sp value at call has been detected, the output may be wrong!
char __userpurge sub_1039EE40@<al>(float *a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, int a5)
{
  int v6; // eax
  int v7; // edi
  int v8; // ecx
  int v9; // edx
  float v13[22]; // [esp+24h] [ebp-ACh] BYREF
  _DWORD v14[3]; // [esp+7Ch] [ebp-54h] BYREF
  float v15[3]; // [esp+88h] [ebp-48h] BYREF
  float v16[3]; // [esp+94h] [ebp-3Ch] BYREF
  int v17; // [esp+A0h] [ebp-30h] BYREF
  float v18[3]; // [esp+ACh] [ebp-24h] BYREF
  float v19[3]; // [esp+B8h] [ebp-18h] BYREF
  int v20; // [esp+C4h] [ebp-Ch]
  void *v21; // [esp+C8h] [ebp-8h]
  void *retaddr; // [esp+D0h] [ebp+0h]

  v20 = a2;
  v21 = retaddr;
  v18[0] = 16.0;
  v6 = *((_DWORD *)a1 + 63);
  v18[1] = 16.0;
  v18[2] = 16.0;
  v7 = *((_DWORD *)a1 + 105);
  v15[0] = -16.0;
  v15[1] = -16.0;
  v15[2] = -16.0;
  if ( (v6 & 0x800) != 0 )
    sub_100DAE60((int)a1);
  v8 = *((_DWORD *)a1 + 63);
  v16[0] = a1[145];
  v16[1] = a1[146];
  v16[2] = a1[147] - 56755.84;
  if ( (v8 & 0x800) != 0 )
    sub_100DAE60((int)a1);
  v19[0] = a1[145];
  v19[1] = a1[146];
  v19[2] = a1[147] + 64.0;
  sub_1001F200(v13, v19, v16, v15, v18);
  sub_10265570(v14, (int)a1, v7);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, int, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v13,
    33701899,
    v14,
    a5,
    a3,
    a4);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0(a5, a5 + 12, 255, 255, 0, 1, -1.0);
  sub_100737D0(*((_DWORD *)a1 + 419));
  (*(void (__thiscall **)(float *, int *, _DWORD, float *, int, void *))(*(_DWORD *)a1 + 416))(
    a1,
    &v17,
    0,
    &flt_106F1CA8,
    v20,
    v21);
  sub_100E0970((int)a1, v9, 0, 0);
  return sub_100457E0(a1, 90);
}
