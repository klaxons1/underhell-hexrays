char __thiscall sub_1031A490(int this, int a2)
{
  double v3; // st7
  char result; // al
  int *v5; // ecx

  if ( *(_DWORD *)(a2 + 24) == 1 )
    v3 = *(float *)(a2 + 8);
  else
    v3 = 0.0;
  *(float *)(this + 4124) = v3 + *(float *)(dword_106B31C8 + 12);
  result = sub_10317800(this);
  if ( result && *(_DWORD *)(this + 1672) != *(_DWORD *)(this + 4124) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 1672) = *(float *)(this + 4124);
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        result = sub_100194B0(v5, 1672);
      *(float *)(this + 1672) = *(float *)(this + 4124);
    }
  }
  return result;
}
