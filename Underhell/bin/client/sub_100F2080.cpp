int __thiscall sub_100F2080(_DWORD *this, int a2, float *a3)
{
  int v4; // ebx

  if ( this[1681] != -1 && (*(unsigned __int8 (__thiscall **)(int *))(*off_103ED578 + 120))(off_103ED578) )
  {
    if ( (dword_10435D84 & 1) == 0 )
      dword_10435D84 |= 1u;
    dword_10435D6C = this[1681];
    flt_10435D70 = *((float *)off_103DC81C + 3);
    dword_10435D74 = a2;
    flt_10435D78 = *a3;
    flt_10435D7C = a3[1];
    flt_10435D80 = a3[2];
    if ( sub_10229D00(32) )
      v4 = sub_10229D20("ParticleSystem_SetControlPointPosition");
    else
      v4 = 0;
    sub_1022ACE0("state", (int)&dword_10435D6C);
    sub_101BC9C0(0, v4);
  }
  return sub_100F16D0(this + 4, a2, a3);
}
