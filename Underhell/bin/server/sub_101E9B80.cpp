// bad sp value at call has been detected, the output may be wrong!
int __userpurge sub_101E9B80@<eax>(int a1@<ecx>, float a2@<ebp>, int a3@<esi>, int a4, float *a5, float *a6)
{
  double v7; // st6
  double v8; // rt0
  int result; // eax
  float v11[20]; // [esp+24h] [ebp-CCh] BYREF
  _BYTE v12[12]; // [esp+74h] [ebp-7Ch] BYREF
  int v13; // [esp+80h] [ebp-70h] BYREF
  int v14; // [esp+C0h] [ebp-30h]
  int v15; // [esp+CCh] [ebp-24h] BYREF
  float v16[6]; // [esp+D8h] [ebp-18h] BYREF
  float retaddr; // [esp+F0h] [ebp+0h]

  v16[3] = a2;
  v16[4] = retaddr;
  v7 = 1024.0 * a6[2];
  v8 = a6[1] * 1024.0;
  v16[0] = *a6 * 1024.0 + *a5;
  v16[1] = v8 + a5[1];
  v16[2] = v7 + a5[2];
  sub_1001F180(v11, a5, v16);
  sub_10265570(a1, 0);
  (*(void (__thiscall **)(int, float *, int, int *, _BYTE *, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v11,
    1174421507,
    &v15,
    v12,
    a3);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v12, (int)&v13, 255, 0, 0, 1, 5.0);
  if ( !v14 )
    return a4;
  if ( !sub_100D7680(v14) )
    return a4;
  result = v14;
  if ( v14 == a4 )
    return a4;
  return result;
}
