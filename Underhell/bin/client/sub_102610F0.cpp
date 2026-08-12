int __thiscall sub_102610F0(int this, int a2)
{
  sub_10242C50(this);
  *(_DWORD *)this = &Dragger::`vftable';
  *(_DWORD *)(this + 204) = a2;
  sub_10239D10((_WORD *)this, 0);
  sub_10239D30((_WORD *)this, 0);
  sub_10239CF0((_WORD *)this, 0);
  sub_10237030((_DWORD *)this, 10);
  *(_BYTE *)(this + 208) = 0;
  *(_BYTE *)(this + 216) = 1;
  *(_DWORD *)(this + 212) = 0;
  sub_10238E80((_DWORD *)this, 1);
  return this;
}
