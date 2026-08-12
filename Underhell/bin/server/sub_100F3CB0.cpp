int __thiscall sub_100F3CB0(int *this)
{
  float v3; // [esp+8h] [ebp-Ch]

  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  sub_1023D4B0(8, (int)(this + 145), 400, 1.5, (int)this, 0, 0);
  sub_100EC3F0(this, (int)sub_100F3AE0, 0.0, 0);
  v3 = *(float *)(dword_106B31C8 + 12) + 1.5;
  return sub_100EC4A0(this, v3, 0);
}
