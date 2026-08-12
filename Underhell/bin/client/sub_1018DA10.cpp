int __thiscall sub_1018DA10(int this)
{
  sub_10024A10((_DWORD *)this);
  *(_DWORD *)this = &C_NPC_Barnacle::`vftable';
  *(_DWORD *)(this + 4) = &C_NPC_Barnacle::`vftable';
  *(_DWORD *)(this + 8) = &C_NPC_Barnacle::`vftable';
  *(_DWORD *)(this + 12) = &C_NPC_Barnacle::`vftable';
  sub_101167C0((float *)(this + 3520), this + 3576, 7, this + 3828, this + 3876);
  *(_DWORD *)(this + 3520) = &CRopePhysics<7>::`vftable';
  *(_DWORD *)(this + 3904) = &C_NPC_Barnacle::CBarnaclePhysicsDelegate::`vftable';
  *(_DWORD *)(this + 3908) = this;
  return this;
}
