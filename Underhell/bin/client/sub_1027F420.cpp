char __thiscall sub_1027F420(int this, int a2, int a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax

  if ( sub_10237C80((_DWORD *)(this + 104)) )
  {
    *(_BYTE *)(this + 40) = 0;
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA68 + 8))(dword_1047CA68, 0);
    return 1;
  }
  else
  {
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
          if ( v6 != this )
            (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v6 + 52))(v6, a2, a3);
        }
      }
    }
    return 0;
  }
}
