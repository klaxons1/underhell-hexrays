char __thiscall sub_102A3390(_DWORD *this, int a2, char a3)
{
  int v4; // eax

  sub_102A12B0((int)this, a2, 0);
  v4 = __RTDynamicCast(
         this[1],
         0,
         (struct _s_RTTICompleteObjectLocator *)&CAI_BaseNPC `RTTI Type Descriptor',
         (int)&CNPC_PlayerCompanion `RTTI Type Descriptor',
         0);
  if ( v4 )
  {
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
    this[54] = *(_DWORD *)v4;
  }
  else
  {
    this[54] = -1;
  }
  if ( a3 )
  {
    LOBYTE(v4) = sub_1029F4E0(this, 0);
    if ( (_BYTE)v4 )
    {
      sub_1029FAF0(this);
      (*(void (__thiscall **)(_DWORD *))(*this + 316))(this);
      sub_100EAB80((_DWORD *)this[1], 8);
      LOBYTE(v4) = (*(int (__thiscall **)(_DWORD *, const char *))(*this + 284))(this, "Immediate entry to vehicle");
    }
  }
  return v4;
}
