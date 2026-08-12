int __thiscall sub_103B2480(_DWORD *this)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-4h] BYREF

  sub_1002FB90((int)this);
  sub_103B2310((int)this);
  (*(void (__thiscall **)(_DWORD *))(*this + 584))(this);
  this[907] = *sub_10162C20(&v3, (char)"weapon_striderbuster");
  result = *sub_10162C20(&v3, (char)"npc_grenade_magna");
  this[908] = result;
  return result;
}
