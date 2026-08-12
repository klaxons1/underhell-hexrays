int __thiscall sub_100F2AC0(_DWORD *this)
{
  int v2; // edi
  bool v3; // zf
  int result; // eax

  v2 = 0;
  v3 = this[61] == -1;
  *this = &CParticleEffect::`vftable';
  this[59] = 0;
  if ( !v3 && (*(unsigned __int8 (__thiscall **)(int *))(*off_103ED578 + 120))(off_103ED578) )
  {
    if ( sub_10229D00(32) )
      v2 = sub_10229D20("OldParticleSystem_Destroy");
    sub_1022ACA0("id", this[61]);
    sub_1022ACC0("time", *((float *)off_103DC81C + 3));
    sub_101BC9C0(0, v2);
    this[61] = -1;
  }
  result = sub_100EFC20(this + 2);
  *this = &IParticleEffect::`vftable';
  return result;
}
