int __usercall sub_100231A0@<eax>(
        int a1@<ebp>,
        int a2@<esi>,
        float *a3,
        float *a4,
        float *a5,
        float *a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  int result; // eax
  float v11[21]; // [esp+24h] [ebp-6Ch] BYREF
  _DWORD v12[6]; // [esp+78h] [ebp-18h] BYREF
  _UNKNOWN *retaddr; // [esp+90h] [ebp+0h]

  v12[3] = a1;
  v12[4] = retaddr;
  sub_1001F200(v11, a3, a4, a5, a6);
  sub_10265570(a8, a9);
  result = (*(int (__thiscall **)(int, float *, int, _DWORD *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
             dword_106B31F4,
             v11,
             a7,
             v12,
             a10,
             a2);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    return sub_101A0AD0(a10, a10 + 12, 255, 255, 0, 1, -1.0);
  return result;
}
