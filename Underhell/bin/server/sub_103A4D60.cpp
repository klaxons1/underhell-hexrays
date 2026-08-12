double __thiscall sub_103A4D60(int this)
{
  int v2; // eax

  if ( 0.0 != *(float *)(this + 3820) )
    return *(float *)(this + 3820);
  v2 = *(_DWORD *)(this + 3764);
  switch ( v2 )
  {
    case 0:
      return 96.0;
    case 4:
      if ( sub_1032A070((void *)this) )
        return 80.0;
      else
        return (float)160.0;
    case 7:
      return 128.0;
    default:
      return sub_1032A0C0(this);
  }
}
