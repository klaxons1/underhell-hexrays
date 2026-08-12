// bad sp value at call has been detected, the output may be wrong!
BOOL __userpurge sub_10306560@<eax>(
        int a1@<ecx>,
        float a2@<ebp>,
        int a3@<esi>,
        float *a4,
        float *a5,
        float *a6,
        float *a7)
{
  double v8; // st6
  double v9; // rt0
  float v12[20]; // [esp+24h] [ebp-CCh] BYREF
  _BYTE v13[12]; // [esp+74h] [ebp-7Ch] BYREF
  float v14[19]; // [esp+80h] [ebp-70h] BYREF
  _DWORD v15[3]; // [esp+CCh] [ebp-24h] BYREF
  float v16[6]; // [esp+D8h] [ebp-18h] BYREF
  float retaddr; // [esp+F0h] [ebp+0h]

  v16[3] = a2;
  v16[4] = retaddr;
  v8 = 256.0 * a5[2];
  v9 = a5[1] * 256.0;
  v16[0] = *a5 * 256.0 + *a4;
  v16[1] = v9 + a4[1];
  v16[2] = v8 + a4[2];
  sub_1001F180(v12, a4, v16);
  sub_10265570(v15, a1, 0);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v12,
    147467,
    v15,
    v13,
    a3);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v13, (int)v14, 255, 0, 0, 1, 5.0);
  if ( a6 )
  {
    *a6 = v14[0];
    a6[1] = v14[1];
    a6[2] = v14[2];
  }
  if ( a7 )
  {
    *a7 = v14[3];
    a7[1] = v14[4];
    a7[2] = v14[5];
  }
  return v14[8] < 1.0;
}
