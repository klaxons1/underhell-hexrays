int __thiscall sub_100F1890(_DWORD *this, int a2, int a3, char a4)
{
  int v5; // esi

  if ( this[1681] != -1 && (*(unsigned __int8 (__thiscall **)(int *))(*off_103ED578 + 120))(off_103ED578) )
  {
    if ( sub_10229D00(32) )
      v5 = sub_10229D20("ParticleSystem_StopEmission");
    else
      v5 = 0;
    dword_10435D04 = this[1681];
    flt_10435D08 = *((float *)off_103DC81C + 3);
    byte_10435D0C = a2;
    sub_1022ACE0("state", (int)&dword_10435D04);
    sub_101BC9C0(0, v5);
  }
  return sub_101FA490(a2, a3, a4);
}
