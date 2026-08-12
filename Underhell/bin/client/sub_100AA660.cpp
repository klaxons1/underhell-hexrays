void __thiscall sub_100AA660(_DWORD *this)
{
  int v1; // edx
  double v2; // st7

  v1 = this[1];
  if ( 0.0 == *(float *)(v1 + 4212) )
  {
    if ( *(float *)(v1 + 296) == 0.0 )
      v2 = 1.0;
    else
      v2 = *(float *)(v1 + 296);
    *(float *)(this[2] + 72) = *(float *)(this[2] + 72)
                             - v2 * *(float *)(dword_10434644 + 44) * *((float *)off_103DC81C + 4) * 0.5;
    sub_100A8BB0(this);
  }
}
