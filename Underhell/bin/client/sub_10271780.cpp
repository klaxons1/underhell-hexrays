int __thiscall sub_10271780(_DWORD *this, int a2)
{
  int v3; // edi
  int (__thiscall ***v4)(void *, int, int); // eax
  int (__thiscall ***v5)(void *, int, int); // ebx
  int v6; // eax
  int v7; // eax
  int v8; // esi
  int v10; // [esp+Ch] [ebp-8h]
  int v11; // [esp+10h] [ebp-4h]

  v3 = 0;
  v11 = 0;
  v4 = (int (__thiscall ***)(void *, int, int))(*(int (__thiscall **)(_DWORD *))(*this + 144))(this);
  v5 = v4;
  if ( !v4 )
    return v3;
  v10 = 0;
  if ( sub_10237130((int (__thiscall ***)(_DWORD))v4) <= 0 )
    goto LABEL_18;
  while ( 1 )
  {
    v6 = sub_10237150(v5, v10);
    v7 = __RTDynamicCast(
           v6,
           0,
           (struct _s_RTTICompleteObjectLocator *)&vgui::Panel `RTTI Type Descriptor',
           (int)&vgui::RadioButton `RTTI Type Descriptor',
           0);
    v8 = v7;
    if ( !v7 || (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 1060))(v7) != this[95] )
      goto LABEL_13;
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 1052))(v8) == a2 + this[97] )
      break;
    if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 1052))(v8) && a2 == 1 )
    {
LABEL_12:
      v3 = v8;
      goto LABEL_13;
    }
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 1052))(v8) > v11 && a2 == -1 )
    {
      v3 = v8;
      v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 1052))(v8);
    }
    else if ( !v3 )
    {
      goto LABEL_12;
    }
LABEL_13:
    if ( ++v10 >= sub_10237130((int (__thiscall ***)(_DWORD))v5) )
      goto LABEL_16;
  }
  v3 = v8;
LABEL_16:
  if ( v3 )
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 48))(v3, 0);
LABEL_18:
  (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 244))(this, 0, 0);
  (*(void (__thiscall **)(_DWORD *))(*this + 16))(this);
  return v3;
}
