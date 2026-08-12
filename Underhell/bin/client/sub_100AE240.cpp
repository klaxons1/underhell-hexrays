void sub_100AE240()
{
  double v0; // st7

  v0 = Plat_FloatTime();
  if ( (-1.0 == flt_1042EC68[606] || v0 - flt_1042EC68[606] >= 1.0) && flt_1042EC68[605] > 0.0 && v0 > flt_1042EC68[605] )
  {
    flt_1042EC68[LODWORD(flt_1042EC68[604])++ + 3] = 1.0 / (v0 - flt_1042EC68[605]);
    if ( LODWORD(flt_1042EC68[604]) == 600 )
    {
      flt_1042EC68[604] = 0.0;
      LOBYTE(flt_1042EC68[603]) = 1;
    }
    flt_1042EC68[606] = v0;
  }
  flt_1042EC68[605] = v0;
}
