int __thiscall sub_101E39A0(int this, int a2)
{
  char v3; // cl
  char v4; // al
  char v5; // cl

  sub_1022D3E0(this);
  sub_1022D080(a2);
  v3 = *(_BYTE *)(this + 20);
  *(float *)(this + 16) = *(float *)(a2 + 16);
  *(_DWORD *)(this + 24) = *(_DWORD *)(a2 + 24);
  *(_BYTE *)(this + 20) ^= (*(_BYTE *)(a2 + 20) ^ v3) & 1;
  v4 = *(_BYTE *)(this + 20) ^ (*(_BYTE *)(this + 20) ^ *(_BYTE *)(a2 + 20)) & 2;
  *(_BYTE *)(this + 20) = v4;
  v5 = v4 ^ (v4 ^ *(_BYTE *)(a2 + 20)) & 4;
  *(_BYTE *)(this + 20) = v5;
  *(_BYTE *)(this + 20) = v5 ^ (v5 ^ *(_BYTE *)(a2 + 20)) & 8;
  return this;
}
