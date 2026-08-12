int __userpurge sub_103143D0@<eax>(int a1@<ecx>, float a2@<ebp>, float *a3, float *a4)
{
  float v5[22]; // [esp+14h] [ebp-ECh] BYREF
  _BYTE v6[12]; // [esp+6Ch] [ebp-94h] BYREF
  float v7[20]; // [esp+78h] [ebp-88h] BYREF
  _DWORD v8[5]; // [esp+C8h] [ebp-38h] BYREF
  float v9[3]; // [esp+DCh] [ebp-24h] BYREF
  float v10[6]; // [esp+E8h] [ebp-18h] BYREF
  float retaddr; // [esp+100h] [ebp+0h]

  v10[3] = a2;
  v10[4] = retaddr;
  if ( *(_BYTE *)(a1 + 4261) )
    return 0;
  sub_10265570(v8, a1, 0);
  v10[0] = 4.0;
  v10[1] = 4.0;
  v10[2] = 4.0;
  v9[0] = -4.0;
  v9[1] = -4.0;
  v9[2] = -4.0;
  v8[0] = &CTraceFilterChopper::`vftable';
  sub_1001F200(v5, a3, a4, v9, v10);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v5,
    1174421507,
    v8,
    v6);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v6, (int)v7, 255, 255, 0, 1, -1.0);
  if ( 1.0 == v7[8] )
    return 0;
  else
    return LODWORD(v7[16]);
}
