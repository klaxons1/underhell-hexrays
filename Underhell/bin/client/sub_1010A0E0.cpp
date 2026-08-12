void __thiscall sub_1010A0E0(_BYTE *this, int a2, float *a3, double *a4, int a5)
{
  if ( this[20] )
  {
    if ( !a2 )
      sub_10109720(
        (int)this,
        "quaternion[] differs (1st diff) (net %f %f %f %f - pred %f %f %f %f) delta(%f %f %f %f)\n",
        *a4,
        a4[1],
        a4[2],
        a4[3],
        a4[4],
        a4[5],
        a4[6],
        a4[7],
        *(double *)a3,
        *((double *)a3 + 1),
        *((double *)a3 + 2),
        *((double *)a3 + 3));
    sub_101097C0((int)this, a2, "quaternion (%f %f %f %f)\n", *a3, a3[1], a3[2], *((double *)a3 + 6));
  }
}
