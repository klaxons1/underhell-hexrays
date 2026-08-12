int __thiscall sub_103FCEB0(int this)
{
  int *v2; // ecx
  int result; // eax
  int *v4; // ecx

  sub_100D2FF0((int *)this);
  sub_10112D90((unsigned __int16 *)(this + 320), 0, 0.0);
  *(_BYTE *)(this + 9832) = *(_BYTE *)(dword_106B3CDC + 12) == 1;
  if ( *(_BYTE *)(dword_106B3CDC + 12) == 1 && *(_DWORD *)(this + 848) != 1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 848);
    }
    *(_DWORD *)(this + 848) = 1;
  }
  result = *(_DWORD *)(this + 1416);
  if ( result != COERCE_INT(-1.0) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 1416) = -1.0;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        result = sub_100194B0(v4, 1416);
      *(float *)(this + 1416) = -1.0;
    }
  }
  return result;
}
