// bad sp value at call has been detected, the output may be wrong!
bool __userpurge sub_1023FE10@<al>(float *a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, int a5)
{
  float v6; // ecx
  float v9[20]; // [esp+2Ch] [ebp-DCh] BYREF
  _BYTE v10[12]; // [esp+7Ch] [ebp-8Ch] BYREF
  float v11[10]; // [esp+88h] [ebp-80h] BYREF
  char v12; // [esp+B3h] [ebp-55h]
  int v13; // [esp+D8h] [ebp-30h] BYREF
  float v14; // [esp+E4h] [ebp-24h] BYREF
  float v15; // [esp+E8h] [ebp-20h]
  float v16; // [esp+ECh] [ebp-1Ch]
  float v17; // [esp+F0h] [ebp-18h] BYREF
  float v18; // [esp+F4h] [ebp-14h]
  float v19; // [esp+F8h] [ebp-10h]
  int v20; // [esp+FCh] [ebp-Ch]
  void *v21; // [esp+100h] [ebp-8h]
  void *retaddr; // [esp+108h] [ebp+0h]

  v20 = a2;
  v21 = retaddr;
  (*(void (__thiscall **)(float *, float *, int, int))(*(_DWORD *)a1 + 516))(a1, &v14, a3, a4);
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)a5 + 516))(a5, &v17);
  v18 = (v19 - v16) * (v19 - v16) + (v6 - v15) * (v6 - v15) + (v17 - v14) * (v17 - v14);
  if ( off_10689708(v18) >= a1[206] && -1.0 != a1[206] )
    return 0;
  sub_1001F180(v9, &v14, &v17);
  sub_10265570(a5, 0);
  (*(void (__thiscall **)(int, float *, int, int *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v9,
    16443,
    &v13,
    v10);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v10, (int)v11, 255, 0, 0, 1, 5.0);
  return 1.0 == v11[8] && !v12;
}
