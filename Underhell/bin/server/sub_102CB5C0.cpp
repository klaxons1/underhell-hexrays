int __thiscall sub_102CB5C0(int this)
{
  sub_102CA800(this);
  if ( sub_102CA330((_DWORD *)this) )
    return sub_10137DF0(*(int **)(this + 1396));
  sub_1025FAC0(this);
  return Warning("Laser tank with no env_laser!\n");
}
