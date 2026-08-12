int __thiscall sub_100B8BF0(void *this)
{
  int v1; // eax

  v1 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 144))(this);
  return __RTDynamicCast(
           v1,
           0,
           (struct _s_RTTICompleteObjectLocator *)&vgui::Panel `RTTI Type Descriptor',
           (int)&CBaseHudChat `RTTI Type Descriptor',
           0);
}
