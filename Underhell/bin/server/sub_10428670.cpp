int __thiscall sub_10428670(int this)
{
  int v2; // ecx
  _DWORD *v3; // eax

  v2 = 6;
  v3 = (_DWORD *)(this + 8);
  do
  {
    *(v3 - 2) = 0;
    *(v3 - 1) = 0;
    *v3 = 0;
    v3[1] = 0;
    v3[2] = 0;
    v3 += 5;
    --v2;
  }
  while ( v2 >= 0 );
  *(_DWORD *)(this + 144) = 0;
  *(_DWORD *)(this + 148) = 0;
  *(_DWORD *)(this + 152) = 0;
  *(_DWORD *)(this + 156) = 0;
  *(_DWORD *)(this + 160) = 0;
  sub_1042F8A0(0, 32, 1);
  *(_DWORD *)(this + 244) = 0;
  *(_DWORD *)(this + 248) = 0;
  *(_DWORD *)(this + 252) = 0;
  *(_DWORD *)(this + 256) = 0;
  *(_DWORD *)(this + 260) = 0;
  *(float *)(this + 268) = 0.0;
  *(_BYTE *)(this + 272) = 0;
  *(_DWORD *)(this + 140) = 0;
  *(_DWORD *)(this + 276) = 0;
  *(_DWORD *)(this + 240) = &off_1068DE04;
  *(_BYTE *)(this + 273) = 1;
  *(_BYTE *)(this + 274) = 1;
  return this;
}
