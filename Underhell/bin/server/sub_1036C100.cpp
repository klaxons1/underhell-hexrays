void __thiscall sub_1036C100(int this)
{
  sub_1023C380((_DWORD *)this, (int)"NPC_BlackHeadcrab.Impact", 0.0, 0);
  if ( (*(_BYTE *)(this + 256) & 1) == 0 )
    sub_1023C380((_DWORD *)this, (int)"NPC_BlackHeadcrab.ImpactAngry", 0.0, 0);
}
