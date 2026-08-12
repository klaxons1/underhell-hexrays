int __thiscall sub_102A9620(int *this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // ecx

  if ( a2 == 17 )
  {
    v3 = this[10];
    if ( v3 == -1
      || (v4 = &off_1061BE18[4 * (this[10] & 0xFFF) + 1], off_1061BE18[4 * (this[10] & 0xFFF) + 2] != v3 >> 12) )
    {
      v5 = 0;
    }
    else
    {
      v5 = *v4;
    }
    if ( (unsigned __int8)sub_102AA0E0(v5) )
      sub_102A8CB0(this);
  }
  return sub_1004B470((_DWORD **)this);
}
