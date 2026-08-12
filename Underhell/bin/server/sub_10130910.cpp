char __thiscall sub_10130910(int *this)
{
  unsigned int v2; // eax
  unsigned int v3; // eax
  float v5; // [esp+0h] [ebp-Ch]

  v5 = *(float *)(dword_106B31C8 + 12) + 0.5;
  sub_100EC4A0(this, v5, 0);
  v2 = this[206];
  if ( v2 == -1
    || (v3 = v2 >> 12, off_1061BE18[4 * (this[206] & 0xFFF) + 2] != v3)
    || !off_1061BE18[4 * (this[206] & 0xFFF) + 1]
    || (this[62] & 2) == 0 )
  {
    LOBYTE(v3) = sub_10130770((int)this);
    if ( (_BYTE)v3 )
    {
      if ( (this[62] & 4) != 0 || (LOBYTE(v3) = sub_10130690((int)this), !(_BYTE)v3) )
        LOBYTE(v3) = sub_10130A30(
                       (int)this,
                       flt_10689730,
                       flt_10689734,
                       flt_10689738,
                       flt_106F1CB4,
                       flt_106F1CB8,
                       flt_106F1CBC);
    }
  }
  return v3;
}
