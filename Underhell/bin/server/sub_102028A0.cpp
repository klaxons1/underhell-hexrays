int __thiscall sub_102028A0(_DWORD *this, int a2)
{
  __int64 v4; // [esp-8h] [ebp-24h]
  int v5[5]; // [esp+8h] [ebp-14h] BYREF

  memset(v5, 0, sizeof(v5));
  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  if ( sub_10202660(this, (int)(this + 145), (int)(this + 176), v5) )
  {
    HIDWORD(v4) = this;
    LODWORD(v4) = this;
    sub_1010DD80(this + 226, v4, 0.0);
  }
  return sub_102375F0(v5);
}
