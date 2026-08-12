// bad sp value at call has been detected, the output may be wrong!
int __userpurge sub_103DAAF0@<eax>(int a1@<ecx>, int a2@<ebp>, int a3@<esi>, float *a4, float a5)
{
  float *v6; // eax
  double v7; // st7
  long double v8; // st7
  int v9; // eax
  int (__thiscall *v10)(int); // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  float *v15; // eax
  double v16; // st7
  long double v17; // st3
  long double v18; // rt0
  int result; // eax
  float v20; // [esp+1Ch] [ebp-F4h]
  int v21; // [esp+24h] [ebp-ECh]
  float v22[20]; // [esp+34h] [ebp-DCh] BYREF
  _BYTE v23[12]; // [esp+84h] [ebp-8Ch] BYREF
  float v24[19]; // [esp+90h] [ebp-80h] BYREF
  float v25[3]; // [esp+DCh] [ebp-34h] BYREF
  float v26; // [esp+E8h] [ebp-28h] BYREF
  float v27; // [esp+ECh] [ebp-24h]
  float v28; // [esp+F0h] [ebp-20h]
  float v29; // [esp+F4h] [ebp-1Ch] BYREF
  float v30; // [esp+F8h] [ebp-18h]
  float v31; // [esp+FCh] [ebp-14h]
  float v32; // [esp+100h] [ebp-10h]
  int v33; // [esp+104h] [ebp-Ch]
  void *v34; // [esp+108h] [ebp-8h]
  void *retaddr; // [esp+110h] [ebp+0h]

  v33 = a2;
  v34 = retaddr;
  v21 = a3;
  v6 = sub_103D9500((float *)a1, v25);
  v26 = *v6;
  v27 = v6[1];
  v28 = v6[2];
  v7 = 0.000001;
  if ( a5 > 0.000001 )
    v7 = a5;
  v8 = (sin((v7 - (*(float *)(a1 + 2820) - *(float *)(dword_106B31C8 + 12))) / v7 * 3.141592653589793 - 1.570796326794897)
      + 1.0)
     * 0.5;
  v32 = v8;
  if ( v8 > 0.25 )
  {
    if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 368))(a1, v21) )
    {
      v9 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 284))(v9) )
      {
        if ( sub_10023D10((_DWORD *)a1, 10) && !*(_BYTE *)(a1 + 3816) )
        {
          v10 = *(int (__thiscall **)(int))(*(_DWORD *)a1 + 368);
          *(_BYTE *)(a1 + 3816) = 1;
          v11 = v10(a1);
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 220))(v11) == 3 )
          {
            v12 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
            v13 = sub_100D7680(v12);
            if ( (*(unsigned __int8 (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)v13 + 548))(v13, a1, 16449, 0) )
            {
              v14 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 368))(a1, v21);
              v21 = 0;
              v15 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v14 + 516))(v14);
              sub_1023D4B0(16777224, v15, (int)v25, COERCE_FLOAT(16), COERCE_INT(1.0), a1, 0);
            }
          }
        }
      }
    }
    v8 = v32;
  }
  if ( v8 <= 1.0 )
  {
    if ( v8 < 0.0 )
      v8 = 0.0;
  }
  else
  {
    v8 = 1.0;
  }
  v20 = v8;
  sub_103DAA00((float *)a1, (float *)(a1 + 3688), a4, v20, &v29);
  if ( v32 < 0.80000001 )
  {
    if ( v32 > 0.19999999 )
      v16 = 1.0;
    else
      v16 = v32 * 5.0000005;
  }
  else
  {
    v16 = 1.0 - (v32 - 0.80000001) * 5.0000005;
  }
  v17 = sin(*(float *)(dword_106B31C8 + 12) * 4.71238898038469 + 3.141592653589793);
  v18 = sin(*(float *)(dword_106B31C8 + 12) * 6.283185307179586 + 1.570796326794897) * 0.0005999999999999999 * v16 + v30;
  v29 = (sin(*(float *)(dword_106B31C8 + 12) * 9.424777960769379) * 0.0005999999999999999 * v16 + v29) * 8192.0 + v26;
  v30 = v18 * 8192.0 + v27;
  v31 = (v16 * (0.0005999999999999999 * v17) + v31) * 8192.0 + v28;
  sub_1001F180(v22, &v26, &v29);
  sub_10265570(v25, a1, 0);
  (*(void (__thiscall **)(int, float *, int, float *, _BYTE *, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v22,
    1174421507,
    v25,
    v23,
    v21);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v23, (int)v24, 255, 0, 0, 1, 5.0);
  sub_100E10C0(*(_DWORD *)(a1 + 3712), v24);
  result = sub_100F9B80(*(_DWORD *)(a1 + 3712));
  *(float *)(a1 + 3628) = v24[0];
  *(float *)(a1 + 3632) = v24[1];
  *(float *)(a1 + 3636) = v24[2];
  return result;
}
