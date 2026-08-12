// bad sp value at call has been detected, the output may be wrong!
char __userpurge sub_100DA7A0@<al>(
        int a1@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        float *a5,
        int a6,
        float *a7)
{
  unsigned int v8; // edi
  void (__thiscall *v9)(int, float *, unsigned int, int *); // eax
  float v12[22]; // [esp+28h] [ebp-DCh] BYREF
  _BYTE v13[12]; // [esp+80h] [ebp-84h] BYREF
  float v14[20]; // [esp+8Ch] [ebp-78h] BYREF
  int v15; // [esp+DCh] [ebp-28h] BYREF
  float v16; // [esp+ECh] [ebp-18h] BYREF
  _BYTE *v17; // [esp+F4h] [ebp-10h]
  _DWORD v18[3]; // [esp+F8h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+104h] [ebp+0h]

  v18[0] = a2;
  v18[1] = retaddr;
  (*(void (__thiscall **)(int, float *, int, int))(*(_DWORD *)a1 + 504))(a1, &v16, a3, a4);
  if ( *(_DWORD *)(dword_1069109C + 48) )
  {
    sub_1002A5F0((int)v18, a1, &v16, a5, a6, a1, 0, (int)v13);
  }
  else
  {
    v8 = a6;
    if ( a6 == 16449 )
      v8 = 33570881;
    if ( (*(unsigned __int8 (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 320))(a1, v17) )
      v8 = v8 & 0xFFFFDFBF | 0x2000;
    sub_10265790(a1, 0, 0);
    sub_1001F180(v12, &v16, a5);
    v9 = *(void (__thiscall **)(int, float *, unsigned int, int *))(*(_DWORD *)dword_106B31F4 + 16);
    v17 = v13;
    v9(dword_106B31F4, v12, v8, &v15);
    if ( *(_DWORD *)(dword_106CE63C + 48) )
      sub_101A0AD0((int)v13, (int)v14, 255, 0, 0, 1, -1.0);
  }
  if ( 1.0 == v14[8] )
    return 1;
  if ( a7 )
    *a7 = v14[16];
  return 0;
}
