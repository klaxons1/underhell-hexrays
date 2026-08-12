void __thiscall sub_102F69A0(_DWORD *this, int a2)
{
  void *v3; // eax

  sub_1023C380(this, (int)"AI_BaseNPC.SentenceStop", 0.0, 0);
  v3 = (void *)(*(int (__thiscall **)(_DWORD *))(*this + 1656))(this);
  if ( !sub_100AFBB0(v3, (int)"TLK_SELF_IN_BARNACLE") )
    sub_1023C380(this, (int)"npc_alyx.die", 0.0, 0);
}
