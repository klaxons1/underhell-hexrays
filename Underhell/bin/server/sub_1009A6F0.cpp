_BYTE *__thiscall sub_1009A6F0(_BYTE *this, int a2)
{
  _BYTE *result; // eax
  char v3; // cl
  char v4; // cl
  char v5; // dl
  char v6; // cl
  char v7; // dl
  char v8; // cl

  result = this;
  v3 = this[8];
  *(float *)result = *(float *)a2;
  *((float *)result + 1) = *(float *)(a2 + 4);
  result[8] ^= (*(_BYTE *)(a2 + 8) ^ v3) & 1;
  v4 = result[8] ^ (result[8] ^ *(_BYTE *)(a2 + 8)) & 2;
  result[8] = v4;
  v5 = v4 ^ (v4 ^ *(_BYTE *)(a2 + 8)) & 4;
  result[8] = v5;
  v6 = v5 ^ (v5 ^ *(_BYTE *)(a2 + 8)) & 8;
  result[8] = v6;
  v7 = v6 ^ (v6 ^ *(_BYTE *)(a2 + 8)) & 0x10;
  result[8] = v7;
  v8 = v7 ^ (v7 ^ *(_BYTE *)(a2 + 8)) & 0x20;
  result[8] = v8;
  result[8] = v8 ^ (v8 ^ *(_BYTE *)(a2 + 8)) & 0x40;
  *(_WORD *)(result + 9) = *(_WORD *)(a2 + 9);
  *(_WORD *)(result + 11) = *(_WORD *)(a2 + 11);
  return result;
}
