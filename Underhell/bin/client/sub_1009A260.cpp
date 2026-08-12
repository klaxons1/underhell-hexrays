char __thiscall sub_1009A260(
        int this,
        int a2,
        char a3,
        float *a4,
        float *a5,
        __int16 a6,
        int a7,
        int a8,
        unsigned __int8 a9,
        char a10,
        float a11,
        char a12,
        int a13,
        int a14,
        int a15)
{
  int v16; // edi
  int v17; // eax
  char result; // al
  int v19; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)(this + 32) = a7;
  if ( a9 )
  {
    *(_BYTE *)(this + 36) |= 0x10u;
    v19 = this;
    v16 = (unsigned __int16)sub_1009A0C0((int)&off_103DDC60, &v19);
    if ( a8 >= 0x1000000 || a9 >= 0x64u )
      Error("Light style overflow\n");
    v17 = 2 * v16;
    *(_DWORD *)(dword_103DDC64 + 8 * v17 + 12) ^= (a8 ^ *(_DWORD *)(dword_103DDC64 + 16 * v16 + 12)) & 0xFFFFFF;
    *(_BYTE *)(dword_103DDC64 + 8 * v17 + 15) = a9;
  }
  *(_WORD *)(this + 40) = a6;
  *(_WORD *)(this + 42) = sub_10094C40(a11);
  *(_BYTE *)(this + 36) = a10 & 3 | *(_BYTE *)(this + 36) & 0xD0 | (4 * (a12 & 3 | (8 * (a3 & 1))));
  *(float *)(this + 8) = *a4;
  *(float *)(this + 12) = a4[1];
  *(float *)(this + 16) = a4[2];
  *(float *)(this + 20) = *a5;
  *(float *)(this + 24) = a5[1];
  result = 1;
  *(float *)(this + 28) = a5[2];
  *(_BYTE *)(this + 37) = -1;
  return result;
}
