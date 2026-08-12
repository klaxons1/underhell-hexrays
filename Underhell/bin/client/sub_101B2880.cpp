bool __thiscall sub_101B2880(int this)
{
  int v2; // eax

  v2 = sub_100422D0();
  if ( !v2 )
    return 0;
  return (*(_BYTE *)(v2 + 3682) != *(_BYTE *)(this + 284) || sub_10236700(this + 44) > 0) && sub_100B68D0((int *)this);
}
