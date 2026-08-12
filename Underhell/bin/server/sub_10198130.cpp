// bad sp value at call has been detected, the output may be wrong!
char __userpurge sub_10198130@<al>(float *a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, float *a5, float *a6)
{
  double v7; // st7
  int v9; // edi
  float *v10; // eax
  double v11; // st7
  double v12; // st6
  double v13; // st5
  float v15[20]; // [esp+34h] [ebp-DCh] BYREF
  _BYTE v16[12]; // [esp+84h] [ebp-8Ch] BYREF
  _BYTE v17[32]; // [esp+90h] [ebp-80h] BYREF
  float v18; // [esp+B0h] [ebp-60h]
  float v19[3]; // [esp+E0h] [ebp-30h] BYREF
  _DWORD v20[3]; // [esp+ECh] [ebp-24h] BYREF
  float v21; // [esp+F8h] [ebp-18h] BYREF
  float v22; // [esp+FCh] [ebp-14h]
  float v23; // [esp+100h] [ebp-10h]
  int v24; // [esp+104h] [ebp-Ch]
  void *v25; // [esp+108h] [ebp-8h]
  void *retaddr; // [esp+110h] [ebp+0h]

  v24 = a2;
  v25 = retaddr;
  sub_10265570(0, 0);
  v21 = a1[7];
  v22 = a1[8];
  v7 = a1[9] + 54.0;
  v20[0] = &CTraceFilterNoNPCsOrPlayer::`vftable';
  v23 = v7;
  sub_1001F180(v15, a5, &v21);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v15,
    33570881,
    v20,
    v16,
    a3,
    a4);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v16, (int)v17, 255, 0, 0, 1, -1.0);
  if ( 1.0 == v18 )
  {
    if ( a6 )
    {
      *a6 = a1[7];
      a6[1] = a1[8];
      a6[2] = a1[9];
    }
    return 1;
  }
  else
  {
    v9 = 0;
    while ( 1 )
    {
      v10 = sub_1018B480(a1, v9);
      v11 = *v10;
      v21 = *v10;
      v12 = v10[1];
      v22 = v10[1];
      v13 = v10[2];
      v23 = v10[2];
      v19[0] = v11;
      v19[1] = v12;
      v19[2] = v13 + 54.0;
      sub_1001F180(v15, a5, v19);
      (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
        dword_106B31F4,
        v15,
        33570881,
        v20,
        v16);
      if ( *(_DWORD *)(dword_106CE63C + 48) )
        sub_101A0AD0((int)v16, (int)v17, 255, 0, 0, 1, -1.0);
      if ( 1.0 == v18 )
        break;
      if ( ++v9 >= 4 )
        return 0;
    }
    if ( a6 )
    {
      *a6 = v21;
      a6[1] = v22;
      a6[2] = v23;
    }
    return 1;
  }
}
