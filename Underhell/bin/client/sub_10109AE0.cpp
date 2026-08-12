void __thiscall sub_10109AE0(_BYTE *this, int a2, float *a3, float *a4, int a5)
{
  if ( this[20] )
  {
    if ( !a2 )
      sub_10109720((int)this, "float differs (net %f pred %f) diff(%f)\n", *a4, *a3, *a3 - *a4);
    sub_101097C0((int)this, a2, "float (%f)\n", *a3);
  }
}
