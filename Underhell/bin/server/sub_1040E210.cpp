float *__thiscall sub_1040E210(int this, float *a2)
{
  float *result; // eax

  result = a2;
  if ( *(float *)(dword_106B31C8 + 12) - *(float *)(this + 2168) >= *(float *)(this + 2164) )
  {
    if ( *(int *)(this + 2180) <= 0 )
    {
      *a2 = *(float *)(this + 716);
      a2[1] = *(float *)(this + 720);
      a2[2] = *(float *)(this + 724);
    }
    else
    {
      *a2 = *(float *)(this + 2184);
      a2[1] = *(float *)(this + 2188);
      a2[2] = *(float *)(this + 2192);
    }
  }
  else
  {
    *a2 = *(float *)(this + 2144);
    a2[1] = *(float *)(this + 2148);
    a2[2] = *(float *)(this + 2152);
  }
  return result;
}
