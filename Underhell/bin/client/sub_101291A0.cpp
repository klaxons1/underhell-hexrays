int __thiscall sub_101291A0(void *this, int a2)
{
  int v2; // eax

  sub_100347D0((int)this, a2);
  v2 = __RTDynamicCast(
         dword_10412D50,
         0,
         (struct _s_RTTICompleteObjectLocator *)&C_GameRules `RTTI Type Descriptor',
         (int)&C_TeamplayRoundBasedRules `RTTI Type Descriptor',
         0);
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 204))(v2, a2);
}
