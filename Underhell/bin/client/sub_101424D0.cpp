void __thiscall sub_101424D0(int this, float a2)
{
  double v2; // st7
  double v3; // st7

  v2 = a2;
  if ( 0.0 == a2 )
  {
    *(_BYTE *)(this + 564) = 0;
    *(float *)(this + 568) = 0.0;
  }
  else
  {
    if ( *((float *)off_103DC81C + 3) >= (double)*(float *)(this + 568) )
    {
      v3 = v2 + *((float *)off_103DC81C + 3);
      *(_BYTE *)(this + 564) = 1;
    }
    else
    {
      v3 = v2 + *(float *)(this + 568);
    }
    *(float *)(this + 568) = v3;
  }
}
