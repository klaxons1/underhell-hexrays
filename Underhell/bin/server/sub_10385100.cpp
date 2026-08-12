float *__thiscall sub_10385100(int this, float a2)
{
  float *result; // eax
  int *v4; // ecx
  double v5; // st7
  double v6; // [esp+4h] [ebp-8h] BYREF

  if ( *(_BYTE *)(this + 3854) )
  {
    result = *(float **)(this + 2372);
    if ( result == (float *)26 || result == (float *)1 || result == (float *)11 || result == (float *)6 )
    {
      if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 3804) )
      {
        if ( *(float *)(this + 3856) >= 10.0 )
          v5 = a2 * 80.0 + *(float *)(this + 3856);
        else
          v5 = *(float *)(this + 3856) + *(float *)(this + 3856) + 1.0;
        *(float *)(this + 3856) = v5;
      }
      if ( *(float *)(this + 3856) > 100.0 )
        *(float *)(this + 3856) = 100.0;
      if ( *(float *)(this + 3856) >= 20.0 )
      {
        sub_100C1600(this, 1, *(float *)(this + 3856) < 40.0);
        sub_100C1600(this, 2, 1);
      }
      else
      {
        sub_100C1600(this, 1, 1);
        sub_100C1600(this, 2, 0);
      }
      v6 = *(float *)(this + 3856) * 0.01;
      return sub_10045730((float *)(this + 864), &v6);
    }
    else
    {
      *(float *)(this + 3856) = 0.0;
    }
  }
  else
  {
    sub_100C1600(this, 1, 0);
    sub_100C1600(this, 2, 0);
    *(float *)(this + 3856) = 0.0;
    result = *(float **)(this + 864);
    if ( result != (float *)COERCE_INT(1.0) )
    {
      result = (float *)this;
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *(float *)(this + 864) = 1.0;
      }
      else
      {
        v4 = *(int **)(this + 24);
        if ( v4 )
          result = (float *)sub_100194B0(v4, 864);
        *(float *)(this + 864) = 1.0;
      }
    }
  }
  return result;
}
