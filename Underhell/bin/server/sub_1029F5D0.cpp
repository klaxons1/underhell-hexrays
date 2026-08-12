// bad sp value at call has been detected, the output may be wrong!
char __userpurge sub_1029F5D0@<al>(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, float *a5, float *a6)
{
  double v7; // st7
  float *v8; // eax
  int v9; // ecx
  float *v10; // eax
  double v11; // st7
  unsigned int v12; // eax
  int v13; // eax
  void (__thiscall *v14)(int, float *, int, _DWORD *); // edx
  float v17[20]; // [esp+24h] [ebp-ECh] BYREF
  _BYTE v18[12]; // [esp+74h] [ebp-9Ch] BYREF
  float v19[10]; // [esp+80h] [ebp-90h] BYREF
  char v20; // [esp+AAh] [ebp-66h]
  _DWORD v21[6]; // [esp+D0h] [ebp-40h] BYREF
  float v22; // [esp+E8h] [ebp-28h]
  float v23[3]; // [esp+ECh] [ebp-24h] BYREF
  float v24[2]; // [esp+F8h] [ebp-18h] BYREF
  float v25; // [esp+100h] [ebp-10h]
  int v26; // [esp+104h] [ebp-Ch]
  void *v27; // [esp+108h] [ebp-8h]
  void *retaddr; // [esp+110h] [ebp+0h]

  v26 = a2;
  v27 = retaddr;
  v7 = ((double (__thiscall *)(_DWORD, int, int))*(_DWORD *)(**(_DWORD **)(a1 + 4) + 1724))(*(_DWORD *)(a1 + 4), a3, a4);
  v25 = *(float *)(*(_DWORD *)(a1 + 4) + 1676);
  v22 = v7 + v7;
  v8 = (float *)sub_10073710(SLODWORD(v25));
  v9 = *(_DWORD *)(a1 + 4);
  v23[0] = *v8;
  v23[1] = v8[1];
  v23[2] = v8[2] + v22;
  v22 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v9 + 1724))(v9);
  v10 = (float *)sub_10073730(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 1676));
  v24[0] = *v10;
  v24[1] = v10[1];
  v11 = v10[2];
  v12 = *(_DWORD *)(a1 + 68);
  v25 = v11 - v22;
  if ( v12 == -1 || off_1061BE18[4 * (v12 & 0xFFF) + 2] != v12 >> 12 )
    v13 = 0;
  else
    v13 = off_1061BE18[4 * (v12 & 0xFFF) + 1];
  sub_10265720(v21, *(_DWORD *)(a1 + 4), v13, 0);
  v21[0] = &CTraceFilterVehicleTransition::`vftable';
  sub_1001F200(v17, a5, a6, v23, v24);
  v14 = *(void (__thiscall **)(int, float *, int, _DWORD *))(*(_DWORD *)dword_106B31F4 + 16);
  v25 = COERCE_FLOAT(v18);
  v14(dword_106B31F4, v17, 33701899, v21);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v18, (int)v19, 255, 255, 0, 1, -1.0);
  if ( v19[8] >= 1.0 && !v20 )
    return 1;
  if ( *(_DWORD *)(dword_106DB4EC + 48) )
    sub_1011BA20((int)a5, (int)a6, (int)v23, (int)v24, (int)&flt_106F1CB4, 255, 0, 0, 64, 2.0);
  return 0;
}
