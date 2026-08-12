int __thiscall sub_101291E0(_DWORD *this, int a2)
{
  int v2; // eax

  sub_1003CD40(this, a2);
  v2 = __RTDynamicCast(
         dword_10412D50,
         0,
         (struct _s_RTTICompleteObjectLocator *)&C_GameRules `RTTI Type Descriptor',
         (int)&C_TeamplayRoundBasedRules `RTTI Type Descriptor',
         0);
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 208))(v2, a2);
}
