void __thiscall sub_100AE400(int this)
{
  double v2; // st7
  char v3; // bl
  double v4; // st7
  double v5; // st6
  double v6; // st6

  v2 = 0.0;
  v3 = 0.0 == *((float *)off_103DC81C + 4);
  if ( *(_BYTE *)(this + 2475) )
  {
    if ( *(_BYTE *)(this + 2584) != v3 )
    {
      if ( 0.0 == *((float *)off_103DC81C + 4) )
      {
        v4 = *(float *)off_103DC81C;
        *(_BYTE *)(this + 2584) = v3;
        *(float *)(this + 2588) = v4;
      }
      else if ( 0.0 == *(float *)(this + 2588) )
      {
        *(_BYTE *)(this + 2584) = 0;
      }
      else
      {
        v5 = *(float *)off_103DC81C - *(float *)(this + 2588);
        if ( v5 < 0.0 )
        {
          Warning(
            "Game paused time showing up negative (rt %f pausestart %f)\n",
            *(float *)off_103DC81C,
            *(float *)(this + 2588));
          v2 = 0.0;
          v5 = 0.0;
        }
        v6 = v5 + *(float *)(this + 2488);
        *(_BYTE *)(this + 2584) = 0;
        *(float *)(this + 2488) = v6;
        *(float *)(this + 2588) = v2;
      }
    }
  }
  else
  {
    *(float *)(this + 2588) = 0.0;
  }
}
