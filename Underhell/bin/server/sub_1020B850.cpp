int __thiscall sub_1020B850(int this)
{
  int *v2; // ecx

  if ( *(_DWORD *)(this + 1072) != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 1072);
    }
    *(float *)(this + 1072) = 0.0;
  }
  return sub_100EC3F0((_DWORD *)this, 0, *(float *)(dword_106B31C8 + 12), off_10642FA0);
}
