int __thiscall sub_10173710(_BYTE *this, int a2)
{
  int v3; // edi
  _WORD v5[8]; // [esp+Ch] [ebp-10h] BYREF

  v3 = sub_100DC590((int)this, a2);
  this[1233] = 1;
  strcpy((char *)v5, "Radio.Track.1");
  LOBYTE(v5[6]) = this[1236] + 49;
  v5[7] = 0;
  sub_1023B860(v5);
  sub_1025FAC0(this);
  return v3;
}
