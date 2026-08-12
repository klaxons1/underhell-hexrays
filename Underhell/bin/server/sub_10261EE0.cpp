double __usercall sub_10261EE0@<st0>(int a1@<ebp>, float *a2, float a3, float a4)
{
  float v5[22]; // [esp-C8h] [ebp-D4h] BYREF
  float v6[21]; // [esp-70h] [ebp-7Ch] BYREF
  float v7[3]; // [esp-1Ch] [ebp-28h] BYREF
  float v8[3]; // [esp-10h] [ebp-1Ch] BYREF
  _DWORD v9[4]; // [esp-4h] [ebp-10h] BYREF
  _UNKNOWN *retaddr; // [esp+Ch] [ebp+0h]

  v9[1] = a1;
  v9[2] = retaddr;
  v8[0] = *a2;
  v9[0] = &CWaterTraceFilter::`vftable';
  v8[1] = a2[1];
  v8[2] = a4;
  v7[0] = *a2;
  v7[1] = a2[1];
  v7[2] = a3;
  sub_1001F180(v6, v8, v7);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, float *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v6,
    16432,
    v9,
    v5);
  return v5[5];
}
