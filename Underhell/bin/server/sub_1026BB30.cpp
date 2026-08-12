int __thiscall sub_1026BB30(_DWORD *this, int a2, char *String1)
{
  int result; // eax
  int v5; // eax
  int v6; // eax
  char *v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // ebx
  _DWORD *i; // edx

  if ( a2 < 0 )
    return -1;
  if ( a2 >= this[9] )
    return -1;
  v5 = (*(int (__thiscall **)(_DWORD *))(*this + 32))(this);
  v6 = __RTDynamicCast(
         v5,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CBaseAnimating `RTTI Type Descriptor',
         0);
  if ( !v6 )
    return -1;
  v7 = String1;
  if ( !String1 )
    v7 = (char *)String;
  v8 = sub_100BEF30(v6, v7);
  v9 = this[6] + 24 * a2;
  v10 = *(_DWORD *)(v9 + 16);
  v11 = v8;
  result = 0;
  if ( v10 <= 0 )
    return -1;
  for ( i = (_DWORD *)(*(_DWORD *)(v9 + 4) + 4); *i != v11; i += 12 )
  {
    if ( ++result >= v10 )
      return -1;
  }
  return result;
}
