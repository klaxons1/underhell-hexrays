int __thiscall sub_10056570(int this, int a2)
{
  int result; // eax
  float *v4; // ecx
  double v5; // st7
  int v6; // eax
  int v7; // edx
  double v8; // st6

  result = sub_1003CD40((_DWORD *)this, a2);
  if ( !a2 )
  {
    v4 = (float *)sub_1000ED40();
    *v4 = *(float *)(this + 364) - *(float *)(this + 352);
    v4[1] = *(float *)(this + 368) - *(float *)(this + 356);
    v5 = *(float *)(this + 372) - *(float *)(this + 360);
    v4[2] = v5;
    if ( v4[1] >= (double)*v4 || v5 >= *v4 )
    {
      if ( v5 >= v4[1] )
      {
        *(_DWORD *)(this + 1184) = 2;
        v7 = 1;
      }
      else
      {
        *(_DWORD *)(this + 1184) = 1;
        v7 = 2;
      }
      v6 = 0;
    }
    else
    {
      *(_DWORD *)(this + 1184) = 0;
      v6 = 1;
      v7 = 2;
    }
    v8 = v4[v6];
    result = *(_DWORD *)(this + 1184);
    *(float *)(this + 1188) = sqrt(v4[v7] * v4[v7] + v8 * v8) * 0.5;
    *(float *)(this + 1192) = v4[result];
  }
  return result;
}
