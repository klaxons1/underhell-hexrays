// bad sp value at call has been detected, the output may be wrong!
char __userpurge sub_1029EFC0@<al>(
        int a1@<ecx>,
        float a2@<ebp>,
        int a3@<esi>,
        float *a4,
        float a5,
        float a6,
        float *a7)
{
  float *v8; // eax
  int v9; // ecx
  float *v10; // eax
  int v11; // ecx
  unsigned int v12; // esi
  int v13; // eax
  int v15; // [esp+10h] [ebp-110h]
  float v17[22]; // [esp+24h] [ebp-FCh] BYREF
  _DWORD v18[3]; // [esp+7Ch] [ebp-A4h] BYREF
  float v19[10]; // [esp+88h] [ebp-98h] BYREF
  char v20; // [esp+B2h] [ebp-6Eh]
  _DWORD *v21; // [esp+C8h] [ebp-58h]
  _DWORD v22[4]; // [esp+D4h] [ebp-4Ch] BYREF
  float v23[3]; // [esp+E4h] [ebp-3Ch] BYREF
  float v24[3]; // [esp+F0h] [ebp-30h] BYREF
  float v25[3]; // [esp+FCh] [ebp-24h] BYREF
  float v26[6]; // [esp+108h] [ebp-18h] BYREF
  float retaddr; // [esp+120h] [ebp+0h]

  v26[3] = a2;
  v26[4] = retaddr;
  v24[0] = *a4;
  v24[1] = a4[1];
  v24[2] = a4[2] + a5;
  v23[0] = *a4;
  v23[1] = a4[1];
  v15 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 1676);
  v23[2] = a4[2] - a6;
  v8 = (float *)sub_10073710(v15);
  v25[0] = *v8;
  v9 = *(_DWORD *)(a1 + 4);
  v25[1] = v8[1];
  v25[2] = v8[2];
  v10 = (float *)sub_10073730(*(_DWORD *)(v9 + 1676));
  v26[0] = *v10;
  v26[1] = v10[1];
  v11 = *(_DWORD *)(a1 + 4);
  v12 = *(_DWORD *)(a1 + 68);
  v26[2] = v10[2];
  if ( v12 == -1 || off_1061BE18[4 * (v12 & 0xFFF) + 2] != v12 >> 12 )
    v13 = 0;
  else
    v13 = off_1061BE18[4 * (v12 & 0xFFF) + 1];
  sub_10265720(v22, v13, v11, 0);
  v22[0] = &CTraceFilterVehicleTransition::`vftable';
  sub_1001F200(v17, v24, v23, v25, v26);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, _DWORD *, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v17,
    33701899,
    v22,
    v18,
    a3);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v18, (int)v19, 255, 255, 0, 1, -1.0);
  if ( v20 )
  {
    if ( *(_DWORD *)(dword_106DB4EC + 48) )
      sub_1011BA20((int)v18, (int)v19, (int)v25, (int)v26, (int)&flt_106F1CB4, 255, 255, 0, 255, 1.0);
    return 0;
  }
  if ( sub_10163140(v18) || v21 && sub_100E9830(v21) )
  {
    if ( *(_DWORD *)(dword_106DB4EC + 48) )
      sub_1011BA20((int)v18, (int)v19, (int)v25, (int)v26, (int)&flt_106F1CB4, 0, 255, 0, 255, 1.0);
    *a7 = v19[0];
    a7[1] = v19[1];
    a7[2] = v19[2];
    return 1;
  }
  else
  {
    if ( !*(_DWORD *)(dword_106DB4EC + 48) )
      return 0;
    sub_1011BA20((int)v18, (int)v19, (int)v25, (int)v26, (int)&flt_106F1CB4, 255, 0, 0, 255, 1.0);
    return 0;
  }
}
