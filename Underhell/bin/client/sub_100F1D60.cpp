int __thiscall sub_100F1D60(_DWORD *this)
{
  bool v2; // zf
  int v3; // edi
  unsigned int v4; // ecx
  int *v5; // eax
  unsigned int v6; // ecx
  int v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // ecx
  int result; // eax

  v2 = this[1681] == -1;
  *this = &CNewParticleEffect::`vftable';
  this[1] = &CNewParticleEffect::`vftable';
  this[2] = &CNewParticleEffect::`vftable';
  if ( !v2 && (*(unsigned __int8 (__thiscall **)(int *))(*off_103ED578 + 120))(off_103ED578) )
  {
    dword_10435D20 = (int)*((float *)off_103DC81C + 3);
    flt_10435D24 = *((float *)off_103DC81C + 3);
    if ( sub_10229D00(32) )
      v3 = sub_10229D20("ParticleSystem_Destroy");
    else
      v3 = 0;
    sub_1022ACE0("state", (int)&dword_10435D20);
    sub_101BC9C0(0, v3);
    this[1681] = -1;
  }
  *((_BYTE *)this + 6720) &= ~0x40u;
  v4 = this[1685];
  if ( v4 != -1 )
  {
    v5 = (int *)((char *)off_103DCD74 + 16 * (this[1685] & 0xFFF) + 4);
    v6 = v4 >> 12;
    if ( *((_DWORD *)off_103DCD74 + 4 * (this[1685] & 0xFFF) + 2) == v6 )
    {
      if ( *v5 )
      {
        if ( *((_DWORD *)off_103DCD74 + 4 * (this[1685] & 0xFFF) + 2) == v6 )
          v7 = *v5;
        else
          v7 = 0;
        sub_100EA770((_DWORD *)(v7 + 444), (int)this);
      }
    }
  }
  v8 = (_DWORD *)this[1676];
  if ( v8 )
  {
    do
    {
      v9 = (_DWORD *)*v8;
      *v8 = 0;
      v8[1] = 0;
      v8[2] = 0;
      v8 = v9;
    }
    while ( v9 );
  }
  this[1676] = 0;
  this[1] = &IHandleEntity::`vftable';
  result = sub_101FB2F0(this + 4);
  *this = &IParticleEffect::`vftable';
  return result;
}
