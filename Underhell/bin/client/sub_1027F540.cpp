char __thiscall sub_1027F540(_BYTE *this, int a2, int a3)
{
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v9; // eax
  int v10; // edi

  if ( sub_10237C80((_DWORD *)this + 26) )
  {
    if ( this[40] )
    {
      v9 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 36))(this);
      v10 = a3;
      if ( a3 != v9 )
      {
        (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA68 + 28))(dword_1047CA68, &a2, &a3);
        (*(void (__thiscall **)(_BYTE *, int, int, int))(*(_DWORD *)this + 76))(this, a2, a3, v10);
      }
    }
    return 1;
  }
  else
  {
    v4 = a3;
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 144))(a3) )
    {
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 144))(v4);
      v6 = __RTDynamicCast(
             v5,
             0,
             (struct _s_RTTICompleteObjectLocator *)&vgui::Panel `RTTI Type Descriptor',
             (int)&vgui::EditablePanel `RTTI Type Descriptor',
             0);
      if ( v6 )
      {
        v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 788))(v6);
        if ( v7 )
        {
          if ( (_BYTE *)v7 != this )
            (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v7 + 84))(v7, a2, v4);
        }
      }
    }
    return 0;
  }
}
