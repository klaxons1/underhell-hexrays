void __thiscall sub_101BCFA0(int *this, int a2, float *a3, float *a4)
{
  void *v4; // edx

  if ( this[103] != -1
    && off_1061BE18[4 * (this[103] & 0xFFF) + 2] == (unsigned int)this[103] >> 12
    && (v4 = (void *)off_1061BE18[4 * (this[103] & 0xFFF) + 1]) != 0 )
  {
    sub_100E8760(v4, a2, (int)a3, (int)a4);
  }
  else
  {
    sub_100EAC20(this, a2, a3, a4);
  }
}
