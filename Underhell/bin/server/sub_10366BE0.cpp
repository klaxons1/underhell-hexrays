char __thiscall sub_10366BE0(int this, int a2)
{
  char *v3; // eax
  char Buffer[256]; // [esp+20h] [ebp-100h] BYREF

  if ( !sub_10029270((_DWORD *)this, a2) )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v3 = sub_1001E280(Buffer, "(%f, %f, %f)", *(float *)(this + 580), *(float *)(this + 584), *(float *)(this + 588));
    DevMsg(2, "Fast zombie in scripted sequence probably hit bad node configuration at %s\n", v3);
    if ( sub_100A6190(*(void **)(*(_DWORD *)(this + 2588) + 36)) == 1 && sub_100846A0(*(_DWORD *)(this + 2588), 0, 0) )
      return 0;
    DevMsg(2, "Fast zombie failed to get to scripted sequence\n");
  }
  return 1;
}
