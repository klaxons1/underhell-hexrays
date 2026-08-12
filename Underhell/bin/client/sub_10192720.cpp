char __thiscall sub_10192720(_DWORD *this, int a2, int *a3)
{
  char result; // al
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax

  result = sub_10072D40(this, a2, a3);
  if ( result )
  {
    v5 = dword_1047CA74;
    v6 = *(_DWORD *)dword_1047CA74;
    v7 = (*(int (__thiscall **)(_DWORD *, _DWORD))*this)(this, 0);
    (*(void (__thiscall **)(int, int))(v6 + 72))(v5, v7);
    v8 = sub_10239950("TimeRemainingTitle", 0);
    this[64] = __RTDynamicCast(
                 v8,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&vgui::Panel `RTTI Type Descriptor',
                 (int)&vgui::Label `RTTI Type Descriptor',
                 0);
    v9 = sub_10239950("TimeRemaining", 0);
    this[65] = __RTDynamicCast(
                 v9,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&vgui::Panel `RTTI Type Descriptor',
                 (int)&vgui::Label `RTTI Type Descriptor',
                 0);
    v10 = sub_10239950("MalfunctionLabel", 0);
    this[66] = __RTDynamicCast(
                 v10,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&vgui::Panel `RTTI Type Descriptor',
                 (int)&vgui::Label `RTTI Type Descriptor',
                 0);
    return 1;
  }
  return result;
}
