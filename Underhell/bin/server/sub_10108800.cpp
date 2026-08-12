unsigned int __thiscall sub_10108800(int *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // eax
  unsigned int result; // eax
  float v6; // [esp+0h] [ebp-Ch]

  this[200] = 1;
  v2 = this[220];
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (this[220] & 0xFFF) + 1], v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = *v3;
  sub_1010DD80(v4, (int)this, 0.0);
  result = (unsigned int)this[62] >> 12;
  this[49] = (this[62] & 0x100) != 0 ? (unsigned int)sub_1010AA70 : 0;
  if ( (result & 1) != 0 )
  {
    sub_100EC3F0(this, (int)sub_10107F90, 0.0, 0);
    v6 = *(float *)(dword_106B31C8 + 12) + 0.5;
    return sub_100EC4A0(this, v6, 0);
  }
  return result;
}
