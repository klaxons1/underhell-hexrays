int __thiscall sub_102A8670(int *this)
{
  int v2; // eax
  const char *v3; // edi
  int result; // eax

  v2 = this[7];
  if ( v2 > 3 )
  {
    v3 = off_1065F654[RandomInt(0, 1)];
    result = __RTDynamicCast(
               this[1],
               0,
               (struct _s_RTTICompleteObjectLocator *)&CAI_BaseNPC `RTTI Type Descriptor',
               (int)&CNPC_MetroPolice `RTTI Type Descriptor',
               0);
  }
  else
  {
    v3 = (const char *)*(&dword_1065F650 + v2);
    result = __RTDynamicCast(
               this[1],
               0,
               (struct _s_RTTICompleteObjectLocator *)&CAI_BaseNPC `RTTI Type Descriptor',
               (int)&CNPC_MetroPolice `RTTI Type Descriptor',
               0);
  }
  if ( result )
    return sub_100AC410(result + 5160, v3, 1, 1);
  return result;
}
