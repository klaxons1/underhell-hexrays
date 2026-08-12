void __thiscall sub_1005C150(float *this)
{
  double v1; // st7
  double v2; // st7

  v1 = *((float *)off_103DC81C + 3);
  if ( this[307] != this[305] )
  {
    if ( v1 <= this[309] )
    {
      v2 = (1.0 - (this[309] - v1) / (this[309] - this[308])) * (this[307] - this[306]) + this[306];
      this[298] = v2;
    }
    else
    {
      v2 = this[307];
      this[298] = this[307];
    }
    this[305] = v2;
  }
}
