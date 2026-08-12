int __thiscall sub_1015E180(_DWORD *this)
{
  int v2; // eax
  int v3; // edi
  _DWORD *v4; // ecx
  int v5; // ecx

  *this = &C_SmokeTrail::`vftable';
  this[1] = &C_SmokeTrail::`vftable';
  this[2] = &C_SmokeTrail::`vftable';
  this[3] = &C_SmokeTrail::`vftable';
  this[298] = &C_SmokeTrail::`vftable';
  this[356] = &C_SmokeTrail::`vftable';
  if ( (unsigned __int8)sub_101BC880() )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int *))(*off_103ED578 + 120))(off_103ED578) )
    {
      v2 = this[384];
      if ( v2 )
      {
        if ( *(_DWORD *)(v2 + 244) != -1 )
        {
          if ( sub_10229D00(32) )
            v3 = sub_10229D20("OldParticleSystem_ActivateEmitter");
          else
            v3 = 0;
          sub_1022ACA0("id", *(_DWORD *)(this[384] + 244));
          sub_1022ACA0("emitter", 0);
          sub_1022ACA0("active", 0);
          sub_1022ACC0("time", *((float *)off_103DC81C + 3));
          sub_101BC9C0(0, v3);
          sub_1022AF00(v3);
        }
      }
    }
  }
  v4 = (_DWORD *)this[383];
  if ( v4 )
    sub_100EF970(v4, (int)(this + 299));
  v5 = this[384];
  if ( v5 )
    sub_100F2FF0(v5);
  this[356] = &IPrototypeAppEffect::`vftable';
  return sub_10011CB0(this);
}
