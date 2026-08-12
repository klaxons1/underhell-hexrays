void __thiscall sub_10180E90(int this)
{
  __int64 v2; // [esp-8h] [ebp-10h]

  HIDWORD(v2) = this;
  LODWORD(v2) = this;
  sub_1010DD80((_DWORD *)(this + 824), v2, 0.0);
  if ( (*(_BYTE *)(this + 248) & 1) != 0 )
    sub_1025FAC0(this);
}
