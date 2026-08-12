int __thiscall sub_100FC4D0(int this)
{
  int result; // eax
  int *v3; // ecx

  sub_100E33C0((char *)this, 0);
  *(_DWORD *)this = &CFuncConveyor::`vftable';
  result = this;
  if ( *(_DWORD *)(this + 816) != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 816) = 0.0;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 816);
      result = this;
      *(float *)(this + 816) = 0.0;
    }
  }
  return result;
}
