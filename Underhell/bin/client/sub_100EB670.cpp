char __thiscall sub_100EB670(int this, float *a2)
{
  char result; // al
  char v3; // bl

  if ( *(_WORD *)(this + 132) )
  {
    v3 = 0;
    if ( *(float *)(this + 80) > (double)*a2 )
    {
      v3 = 1;
      *(float *)(this + 80) = *a2;
    }
    if ( *(float *)(this + 84) > (double)a2[1] )
    {
      v3 = 1;
      *(float *)(this + 84) = a2[1];
    }
    if ( *(float *)(this + 88) > (double)a2[2] )
    {
      v3 = 1;
      *(float *)(this + 88) = a2[2];
    }
    if ( *(float *)(this + 92) < (double)*a2 )
    {
      v3 = 1;
      *(float *)(this + 92) = *a2;
    }
    if ( *(float *)(this + 96) < (double)a2[1] )
    {
      v3 = 1;
      *(float *)(this + 96) = a2[1];
    }
    if ( *(float *)(this + 100) < (double)a2[2] )
    {
      v3 = 1;
      *(float *)(this + 100) = a2[2];
    }
    return v3;
  }
  else
  {
    *(float *)(this + 92) = *a2;
    *(float *)(this + 96) = a2[1];
    result = 1;
    *(float *)(this + 100) = a2[2];
    *(float *)(this + 80) = *(float *)(this + 92);
    *(float *)(this + 84) = *(float *)(this + 96);
    *(float *)(this + 88) = *(float *)(this + 100);
  }
  return result;
}
