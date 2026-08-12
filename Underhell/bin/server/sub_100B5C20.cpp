// bad sp value at call has been detected, the output may be wrong!
int __userpurge sub_100B5C20@<eax>(int a1@<ecx>, float a2@<ebp>, int a3@<esi>, float *a4, float *a5)
{
  float v8[20]; // [esp+24h] [ebp-DCh] BYREF
  _BYTE v9[12]; // [esp+74h] [ebp-8Ch] BYREF
  float v10[20]; // [esp+80h] [ebp-80h] BYREF
  int v11; // [esp+D0h] [ebp-30h] BYREF
  float v12[3]; // [esp+DCh] [ebp-24h] BYREF
  float v13[6]; // [esp+E8h] [ebp-18h] BYREF
  float retaddr; // [esp+100h] [ebp+0h]

  v13[3] = a2;
  v13[4] = retaddr;
  v13[0] = 4.0;
  v13[1] = 4.0;
  v13[2] = 4.0;
  v12[0] = -4.0;
  v12[1] = -4.0;
  v12[2] = -4.0;
  sub_1001F200(v8, a4, a5, v12, v13);
  sub_10265570(a1, 0);
  (*(void (__thiscall **)(int, float *, int, int *, _BYTE *, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v8,
    1174421507,
    &v11,
    v9,
    a3);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v9, (int)v10, 255, 255, 0, 1, -1.0);
  if ( 1.0 == v10[8] )
    return 0;
  else
    return LODWORD(v10[16]);
}
