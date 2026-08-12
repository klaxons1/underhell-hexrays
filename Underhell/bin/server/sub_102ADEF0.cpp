void __thiscall sub_102ADEF0(_DWORD *this, int a2)
{
  int v3; // eax
  __int64 v4; // [esp-8h] [ebp-10h]
  __int64 v5; // [esp-8h] [ebp-10h]

  v3 = __RTDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CNPC_Antlion `RTTI Type Descriptor',
         0);
  if ( v3 )
  {
    sub_102AD440(this, v3);
    if ( (int)this[227] <= 0 )
    {
      if ( (HIDWORD(v4) = this, LODWORD(v4) = this, sub_1010DD80(this + 221, v4, 0.0), this[257]) && !this[256]
        || (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 740))(this) )
      {
        HIDWORD(v5) = this;
        LODWORD(v5) = this;
        sub_1010DD80(this + 215, v5, 0.0);
      }
    }
  }
}
