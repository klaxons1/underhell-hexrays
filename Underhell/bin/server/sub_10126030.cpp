int __thiscall sub_10126030(int *this)
{
  float v3; // [esp+0h] [ebp-Ch]
  float v4; // [esp+0h] [ebp-Ch]

  v3 = 0.0;
  if ( this[203] )
  {
    this[203] = 0;
    sub_100EC3F0(this, 0, v3, 0);
    return sub_100EC4A0(this, -1.0, 0);
  }
  else
  {
    this[203] = 1;
    sub_100EC3F0(this, (int)sub_10124720, v3, 0);
    v4 = *(float *)(dword_106B31C8 + 12) + 0.1;
    return sub_100EC4A0(this, v4, 0);
  }
}
