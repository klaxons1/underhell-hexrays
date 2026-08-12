int __usercall sub_1002A5F0@<eax>(int a1@<ebp>, int a2@<esi>, float *a3, float *a4, int a5, int a6, int a7, int a8)
{
  int result; // eax
  float v9[21]; // [esp+24h] [ebp-6Ch] BYREF
  _DWORD v10[6]; // [esp+78h] [ebp-18h] BYREF
  _UNKNOWN *retaddr; // [esp+90h] [ebp+0h]

  v10[3] = a1;
  v10[4] = retaddr;
  sub_1001F180(v9, a3, a4);
  sub_10265570(a6, a7);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v9,
    a5,
    v10,
    a8,
    a2);
  result = dword_106CE63C;
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    return sub_101A0AD0(a8, a8 + 12, 255, 0, 0, 1, 5.0);
  return result;
}
