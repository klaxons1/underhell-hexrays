int __thiscall sub_10316A20(_DWORD *this)
{
  int result; // eax
  _BYTE v3[12]; // [esp+4h] [ebp-18h] BYREF
  float v4[3]; // [esp+10h] [ebp-Ch] BYREF

  result = this[62] >> 18;
  if ( (this[62] & 0x40000) != 0 )
  {
    sub_100BD6D0(this, this[1051], (int)v3, v4, 0, 0);
    sub_102AB8F0((int)(this + 991), this[1051], v4);
    return sub_10314100((int)this);
  }
  return result;
}
