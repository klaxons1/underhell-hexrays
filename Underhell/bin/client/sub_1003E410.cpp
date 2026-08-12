void __stdcall sub_1003E410(int a1, float a2)
{
  double v2; // st5
  double v3; // st7
  double v4; // st7

  if ( a2 <= 0.60000002 )
  {
    v3 = a2;
    if ( a2 >= 0.40000001 )
    {
      *(float *)(a1 + 164) = v3 + v3;
    }
    else if ( *(_BYTE *)(a1 + 76) )
    {
      v4 = (0.40000001 - v3) * 2.5;
      *(float *)(a1 + 164) = 0.40000001 * (1.0 - v4 + 1.0 - v4);
      *(float *)(a1 + 80) = v4;
    }
    else
    {
      *(float *)(a1 + 164) = 0.80000001;
    }
  }
  else if ( *(_BYTE *)(a1 + 244) )
  {
    v2 = (1.0 - a2) * 2.5000002;
    *(float *)(a1 + 164) = 0.60000002 * (v2 + v2);
    *(float *)(a1 + 248) = 1.0 - v2;
  }
  else
  {
    *(float *)(a1 + 164) = 1.2;
  }
}
