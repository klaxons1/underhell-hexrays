int __thiscall sub_100D2610(int this, char a2)
{
  *(_DWORD *)this = &CPDumpPanel::`vftable';
  *(_DWORD *)(this + 44) = &CPDumpPanel::`vftable';
  dword_1043107C = 0;
  sub_1011A810(this + 252);
  sub_10240430(this + 44);
  sub_100B5550((_BYTE *)this);
  if ( (a2 & 1) != 0 )
    (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, this);
  return this;
}
