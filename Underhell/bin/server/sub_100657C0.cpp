int __thiscall sub_100657C0(int this, int a2)
{
  __int16 v3; // ax

  *(_DWORD *)(this + 148) = 100;
  v3 = sub_10065220(0.0);
  *(_WORD *)(this + 136) = v3;
  *(_WORD *)(this + 138) = v3;
  *(_WORD *)(this + 140) = v3;
  *(_WORD *)(this + 142) = v3;
  *(_WORD *)(this + 144) = v3;
  *(_WORD *)(this + 146) = v3;
  *(_BYTE *)(this + 152) = 0;
  *(_WORD *)(this + 153) = v3;
  *(_WORD *)(this + 155) = v3;
  *(_DWORD *)(this + 132) = 0;
  qmemcpy((void *)this, (const void *)a2, 0xA8u);
  *(_DWORD *)(this + 132) = 0;
  *(_DWORD *)(this + 160) = 0;
  sub_10065480((_DWORD *)this, *(const char **)(a2 + 160));
  *(_BYTE *)(this + 164) = *(_BYTE *)(a2 + 164);
  return this;
}
