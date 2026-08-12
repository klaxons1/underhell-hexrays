int __thiscall sub_103817B0(int this, int a2)
{
  int *v3; // ecx

  if ( *(_DWORD *)(this + 1672) != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 1672);
    }
    *(float *)(this + 1672) = 0.0;
  }
  if ( *(_DWORD *)(this + 3652) )
    return sub_10381320((char *)this, 0);
  else
    return sub_103816A0((float *)this);
}
