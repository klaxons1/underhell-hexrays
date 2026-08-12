char __thiscall sub_1027F4C0(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax

  if ( sub_10237C80(this + 26) )
    return 1;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 144))(a3) )
  {
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 144))(a3);
    v5 = __RTDynamicCast(
           v4,
           0,
           (struct _s_RTTICompleteObjectLocator *)&vgui::Panel `RTTI Type Descriptor',
           (int)&vgui::EditablePanel `RTTI Type Descriptor',
           0);
    if ( v5 )
    {
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 788))(v5);
      if ( v6 )
      {
        if ( (_DWORD *)v6 != this )
          (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v6 + 96))(v6, a2, a3);
      }
    }
  }
  return 0;
}
