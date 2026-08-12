int __thiscall sub_10030970(int this, char a2)
{
  int v3; // eax

  sub_1002F0F0((char *)this);
  *(_DWORD *)(this + 1960) = &IPVSNotify::`vftable';
  *(_DWORD *)this = &C_ClientRagdoll::`vftable';
  *(_DWORD *)(this + 4) = &C_ClientRagdoll::`vftable';
  *(_DWORD *)(this + 8) = &C_ClientRagdoll::`vftable';
  *(_DWORD *)(this + 12) = &C_ClientRagdoll::`vftable';
  *(_DWORD *)(this + 1960) = &C_ClientRagdoll::`vftable';
  *(_DWORD *)(this + 1972) = 0;
  *(_DWORD *)(this + 1992) = -1;
  *(_WORD *)(this + 1996) = 0;
  *(_WORD *)(this + 1964) = 0;
  unknown_libname_1("client_ragdoll");
  if ( a2 == 1 )
  {
    v3 = sub_100DDA40(772);
    if ( v3 )
    {
      *(_DWORD *)(this + 1192) = sub_1010F780(v3);
      return this;
    }
    *(_DWORD *)(this + 1192) = 0;
  }
  return this;
}
