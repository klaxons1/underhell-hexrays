int __thiscall sub_1011F730(_DWORD *this, int a2, int a3)
{
  int v4; // ebx
  int v5; // esi
  char *v6; // eax
  int v7; // eax
  int v8; // eax

  v4 = 0;
  v5 = 0;
  if ( this[65] )
  {
    while ( 1 )
    {
      do
      {
        v6 = (char *)this[65];
        if ( !v6 )
          v6 = (char *)String;
        v7 = sub_1012BF20(v5, v6, 0, 0, 0, 0);
        v5 = v7;
      }
      while ( (_DWORD *)v7 == this );
      if ( !v7 )
        break;
      v8 = __RTDynamicCast(
             v7,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CBaseDoor `RTTI Type Descriptor',
             0);
      if ( v8 )
      {
        if ( v4 < a3 )
          *(_DWORD *)(a2 + 4 * v4++) = v8;
      }
    }
  }
  return v4;
}
