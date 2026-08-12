int __thiscall sub_102E1AE0(int this)
{
  int v2; // edx
  int result; // eax
  int *v4; // ecx

  if ( *(_BYTE *)(this + 306) == 9 )
  {
    sub_102DECC0((void *)this);
    sub_102DED70((void *)this);
    result = sub_100E0970(this, v2, 2, 0);
    if ( *(_BYTE *)(this + 307) )
    {
      result = this;
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v4 = *(int **)(this + 24);
        if ( v4 )
          result = sub_100194B0(v4, 307);
      }
      *(_BYTE *)(this + 307) = 0;
    }
    if ( *(_DWORD *)(this + 5144) != -1 )
    {
      result = (**(int (__thiscall ***)(int, int))(this + 5080))(this + 5080, this + 5144);
      *(_DWORD *)(this + 5144) = -1;
    }
  }
  return result;
}
