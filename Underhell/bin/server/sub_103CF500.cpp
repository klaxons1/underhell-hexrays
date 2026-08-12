int __thiscall sub_103CF500(int *this, float a2, float a3)
{
  int v4; // edi
  unsigned int v5; // eax

  v4 = sub_1032D910(this, a2, a3);
  v5 = this[965];
  if ( v5 != -1
    && off_1061BE18[4 * (this[965] & 0xFFF) + 2] == v5 >> 12
    && off_1061BE18[4 * (this[965] & 0xFFF) + 1]
    && v4 == 23 )
  {
    sub_103CF190((float *)this);
  }
  return v4;
}
