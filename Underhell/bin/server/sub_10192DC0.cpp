// bad sp value at call has been detected, the output may be wrong!
bool __usercall sub_10192DC0@<al>(float a1@<ebp>, float *a2, float *a3)
{
  bool result; // al
  float v4[22]; // [esp+14h] [ebp-CCh] BYREF
  _BYTE v5[12]; // [esp+6Ch] [ebp-74h] BYREF
  float v6[13]; // [esp+78h] [ebp-68h] BYREF
  __int16 v7; // [esp+ACh] [ebp-34h]
  float v8[6]; // [esp+C8h] [ebp-18h] BYREF
  float retaddr; // [esp+E0h] [ebp+0h]

  v8[3] = a1;
  v8[4] = retaddr;
  sub_1001F180(v4, a2, a3);
  sub_10265570(0, 0);
  (*(void (__thiscall **)(int, float *, int, float *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v4,
    81931,
    v8,
    v5);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v5, (int)v6, 255, 0, 0, 1, 5.0);
  if ( 1.0 == v6[8] )
    return 0;
  result = *(_BYTE *)((*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF8 + 20))(dword_106BAFF8, v7) + 74) != 0;
  if ( !result )
    return (LODWORD(v6[9]) & 0x20000000) != 0;
  return result;
}
