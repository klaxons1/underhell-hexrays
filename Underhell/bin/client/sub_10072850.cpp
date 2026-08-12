int __thiscall sub_10072850(int *this, int a2)
{
  _DWORD *v3; // eax
  int v4; // eax
  int v5; // edi
  _DWORD *v6; // esi

  v3 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  v4 = sub_1007A770(*v3);
  if ( v4 )
  {
    v5 = __RTDynamicCast(
           v4,
           0,
           (struct _s_RTTICompleteObjectLocator *)&C_BaseEntity `RTTI Type Descriptor',
           (int)&C_VGuiScreen `RTTI Type Descriptor',
           0);
    if ( v5 )
    {
      v6 = (_DWORD *)(this[1] + 4 * sub_10072200(this + 1, this[4]));
      *v6 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
    }
  }
  return 0;
}
