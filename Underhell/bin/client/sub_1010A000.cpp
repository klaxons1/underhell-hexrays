void __thiscall sub_1010A000(_BYTE *this, int a2, float *a3, float *a4, int a5)
{
  if ( this[20] )
  {
    if ( !a2 )
      sub_10109720(
        (int)this,
        "vec[] differs (1st diff) (net %f %f %f - pred %f %f %f) delta(%f %f %f)\n",
        *a4,
        a4[1],
        a4[2],
        *a3,
        a3[1],
        a3[2],
        *a3 - *a4,
        a3[1] - a4[1],
        a3[2] - a4[2]);
    sub_101097C0((int)this, a2, "vector (%f %f %f)\n", *a3, a3[1], a3[2]);
  }
}
