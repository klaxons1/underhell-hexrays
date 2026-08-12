// bad sp value at call has been detected, the output may be wrong!
float *__userpurge sub_102CB8B0@<eax>(
        int a1@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        float *a5,
        float *a6,
        float *a7,
        float *a8)
{
  double v8; // st7
  double v9; // st6
  double v10; // st5
  double v11; // st6
  double v12; // rt0
  double v13; // st6
  double v14; // st7
  float *result; // eax
  float v16[20]; // [esp+24h] [ebp-DCh] BYREF
  _BYTE v17[12]; // [esp+74h] [ebp-8Ch] BYREF
  float v18[19]; // [esp+80h] [ebp-80h] BYREF
  _DWORD v19[3]; // [esp+CCh] [ebp-34h] BYREF
  float v20[3]; // [esp+D8h] [ebp-28h] BYREF
  float v21[3]; // [esp+E4h] [ebp-1Ch] BYREF
  int v22; // [esp+F0h] [ebp-10h]
  int v23; // [esp+F4h] [ebp-Ch]
  void *v24; // [esp+F8h] [ebp-8h]
  void *retaddr; // [esp+100h] [ebp+0h]

  v23 = a2;
  v24 = retaddr;
  v8 = *a6;
  v9 = a6[1];
  v10 = a6[2];
  v22 = a1;
  v11 = v9 + a5[1];
  v12 = v10 + a5[2];
  v21[0] = v8 + *a5;
  v20[0] = v21[0];
  v21[1] = v11;
  v20[1] = v11;
  v21[2] = v12;
  v20[2] = v12 - 256.0;
  sub_1001F180(v16, v21, v20);
  sub_10265570(v19, v22, 0);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v16,
    1174421507,
    v19,
    v17,
    a3,
    a4);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v17, (int)v18, 255, 0, 0, 1, 5.0);
  if ( v18[8] >= 1.0 )
  {
    if ( a7 )
    {
      *a7 = *a5;
      a7[1] = a5[1];
      a7[2] = a5[2];
    }
    result = a8;
    if ( a8 )
    {
      *a8 = *a6;
      a8[1] = a6[1];
      a8[2] = a6[2];
    }
  }
  else
  {
    if ( a7 )
    {
      v13 = 16.0 * a6[2] + v18[2];
      v14 = a6[1] * 16.0 + v18[1];
      *a7 = *a6 * 16.0 + v18[0];
      a7[1] = v14;
      a7[2] = v13;
    }
    result = a8;
    if ( a8 )
    {
      *a8 = v18[3];
      a8[1] = v18[4];
      a8[2] = v18[5];
    }
  }
  return result;
}
