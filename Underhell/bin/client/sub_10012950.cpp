int __thiscall sub_10012950(_DWORD *this)
{
  _DWORD *v1; // edi
  int v2; // eax
  int v3; // esi
  int result; // eax

  v1 = this;
  if ( (*(int (__thiscall **)(_DWORD *))(*this + 844))(this) == 4 )
  {
    do
    {
      v2 = (*(int (__thiscall **)(_DWORD *))(*v1 + 848))(v1);
      v3 = __RTDynamicCast(
             v2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&C_BaseEntity `RTTI Type Descriptor',
             (int)&C_BasePlayer `RTTI Type Descriptor',
             0);
      if ( !v3 )
        break;
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 844))(v3) )
        break;
      v1 = (_DWORD *)v3;
    }
    while ( (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 844))(v3) == 4 );
  }
  result = v1[998];
  if ( !result )
    return (*(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 116))(dword_10412D50);
  return result;
}
