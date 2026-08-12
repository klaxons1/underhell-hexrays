int __stdcall sub_1018A590(char *String2, int a2)
{
  int v2; // eax
  int result; // eax

  v2 = sub_10239950(String2, 0);
  result = __RTDynamicCast(
             v2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&vgui::Panel `RTTI Type Descriptor',
             (int)&vgui::Label `RTTI Type Descriptor',
             0);
  if ( result )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)result + 772))(result, a2);
  return result;
}
