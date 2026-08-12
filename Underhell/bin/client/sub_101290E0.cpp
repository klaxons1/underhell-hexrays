int __cdecl sub_101290E0(int a1, int *a2)
{
  int result; // eax

  result = __RTDynamicCast(
             dword_10412D50,
             0,
             (struct _s_RTTICompleteObjectLocator *)&C_GameRules `RTTI Type Descriptor',
             (int)&C_TeamplayRoundBasedRules `RTTI Type Descriptor',
             0);
  *a2 = result;
  return result;
}
