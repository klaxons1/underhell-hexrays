char __thiscall sub_10147290(int this, const void *a2, int a3, char a4, int a5, _BYTE *a6, int a7)
{
  char result; // al

  sub_10146F40((_DWORD *)this, a2, a3, a4, a5, a6, 0);
  *(float *)(this + 180) = *(float *)a7;
  *(float *)(this + 184) = *(float *)(a7 + 4);
  *(float *)(this + 188) = *(float *)(a7 + 8);
  *(float *)(this + 192) = *(float *)(a7 + 12);
  *(_BYTE *)(this + 196) = *(_BYTE *)(a7 + 16);
  *(_BYTE *)(this + 197) = *(_BYTE *)(a7 + 17);
  *(_BYTE *)(this + 198) = *(_BYTE *)(a7 + 18);
  result = *(_BYTE *)(a7 + 19);
  *(_BYTE *)(this + 199) = result;
  return result;
}
