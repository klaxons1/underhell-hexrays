char __userpurge sub_10316D40@<al>(int a1@<ecx>, float a2@<ebp>, _DWORD *a3, int a4, _DWORD *a5)
{
  int v6; // eax
  float v8[22]; // [esp+2Ch] [ebp-ECh] BYREF
  _BYTE v9[12]; // [esp+84h] [ebp-94h] BYREF
  float v10[16]; // [esp+90h] [ebp-88h] BYREF
  _DWORD *v11; // [esp+D0h] [ebp-48h]
  _DWORD v12[5]; // [esp+E0h] [ebp-38h] BYREF
  float v13[3]; // [esp+F4h] [ebp-24h] BYREF
  float v14[6]; // [esp+100h] [ebp-18h] BYREF
  float retaddr; // [esp+118h] [ebp+0h]

  v14[3] = a2;
  v14[4] = retaddr;
  if ( (a3[64] & 0x8000) != 0 )
    return 0;
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)a1 + 504))(a1, v13);
  (*(void (__thiscall **)(_DWORD *, float *))(*a3 + 504))(a3, v14);
  sub_10265570(v12, a1, 0);
  v12[0] = &CTraceFilterChopper::`vftable';
  sub_1001F180(v8, v13, v14);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v8,
    a4,
    v12,
    v9);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v9, (int)v10, 255, 0, 0, 1, -1.0);
  if ( 1.0 != v10[8] && v11 != a3 )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a3 + 320))(a3)
      || (v6 = (*(int (__thiscall **)(_DWORD *))(*a3 + 1096))(a3), v11 != (_DWORD *)v6) )
    {
      if ( a5 )
        *a5 = v11;
      return 0;
    }
  }
  return 1;
}
