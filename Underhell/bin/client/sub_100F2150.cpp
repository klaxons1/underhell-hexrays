void __thiscall sub_100F2150(_DWORD *this, int a2)
{
  int v3; // esi
  _BYTE v4[12]; // [esp+4h] [ebp-Ch] BYREF

  if ( this[1681] != -1 && (*(unsigned __int8 (__thiscall **)(int *))(*off_103ED578 + 120))(off_103ED578) )
  {
    sub_101EE270(&this[17 * a2 + 32], &this[17 * a2 + 35], v4);
    if ( (dword_10435DA4 & 1) == 0 )
      dword_10435DA4 |= 1u;
    dword_10435D88 = this[1681];
    flt_10435D8C = *((float *)off_103DC81C + 3);
    dword_10435D90 = a2;
    sub_101EF050(v4, &unk_10435D94);
    if ( sub_10229D00(32) )
      v3 = sub_10229D20("ParticleSystem_SetControlPointOrientation");
    else
      v3 = 0;
    sub_1022ACE0("state", (int)&dword_10435D88);
    sub_101BC9C0(0, v3);
  }
}
