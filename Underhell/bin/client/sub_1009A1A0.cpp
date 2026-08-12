char __thiscall sub_1009A1A0(
        int this,
        int a2,
        float *a3,
        float *a4,
        int a5,
        int a6,
        int a7,
        unsigned __int8 a8,
        char a9)
{
  int v10; // edi
  int v11; // eax
  char v12; // al
  char result; // al
  int v14; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)(this + 32) = a6;
  if ( a8 )
  {
    *(_BYTE *)(this + 36) |= 0x10u;
    v14 = this;
    v10 = (unsigned __int16)sub_1009A0C0((int)&off_103DDC60, &v14);
    if ( a7 >= 0x1000000 || a8 >= 0x64u )
      Error("Light style overflow\n");
    v11 = 2 * v10;
    *(_DWORD *)(dword_103DDC64 + 8 * v11 + 12) ^= (a7 ^ *(_DWORD *)(dword_103DDC64 + 16 * v10 + 12)) & 0xFFFFFF;
    *(_BYTE *)(dword_103DDC64 + 8 * v11 + 15) = a8;
  }
  v12 = *(_BYTE *)(this + 36);
  *(_DWORD *)(this + 40) = a5;
  *(_BYTE *)(this + 36) = a9 & 3 | v12 & 0xF0;
  *(float *)(this + 8) = *a3;
  *(float *)(this + 12) = a3[1];
  *(float *)(this + 16) = a3[2];
  *(float *)(this + 20) = *a4;
  *(float *)(this + 24) = a4[1];
  result = 1;
  *(float *)(this + 28) = a4[2];
  *(_BYTE *)(this + 37) = -1;
  return result;
}
