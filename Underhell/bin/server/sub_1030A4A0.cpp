int __usercall sub_1030A4A0@<eax>(
        int a1@<ebp>,
        float *a2,
        float *a3,
        float *a4,
        float *a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  float v11[20]; // [esp-60h] [ebp-6Ch] BYREF
  _DWORD v12[7]; // [esp-10h] [ebp-1Ch] BYREF
  _UNKNOWN *retaddr; // [esp+Ch] [ebp+0h]

  v12[4] = a1;
  v12[5] = retaddr;
  sub_1001F200(v11, a2, a3, a4, a5);
  v12[3] = a10;
  v12[2] = a8;
  v12[1] = a7;
  v12[0] = &CTraceFilterSkipPhysics::`vftable';
  return (*(int (__thiscall **)(int, float *, int, _DWORD *, int))(*(_DWORD *)dword_106B31F4 + 16))(
           dword_106B31F4,
           v11,
           a6,
           v12,
           a9);
}
