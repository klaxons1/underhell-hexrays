int __thiscall sub_1024B140(int this)
{
  sub_1018A990((_DWORD *)this);
  *(_DWORD *)this = &CTeamplayRules::`vftable';
  *(_WORD *)(this + 56) = 0;
  *(_WORD *)(this + 571) = 0;
  memset(byte_106C6660, 0, sizeof(byte_106C6660));
  memset(dword_106C65E0, 0, sizeof(dword_106C65E0));
  dword_106C6860 = 0;
  *(_BYTE *)(this + 59) = 0;
  sub_1024AD30((char *)this);
  return this;
}
