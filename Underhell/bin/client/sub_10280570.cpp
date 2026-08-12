int __thiscall sub_10280570(_DWORD *this, int a2)
{
  int v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // ebx
  int v6; // eax
  int (__thiscall ***v7)(_DWORD, _DWORD *, _DWORD, _DWORD); // eax
  int v8; // edi
  int (__thiscall **v9)(int, int); // esi
  int v10; // eax
  int v12; // [esp-4h] [ebp-20h]
  int v13; // [esp+8h] [ebp-14h]

  this[32] = 0;
  v12 = this[28];
  this[18] = v12;
  v3 = __RTDynamicCast(
         v12,
         0,
         (struct _s_RTTICompleteObjectLocator *)&vgui::Panel `RTTI Type Descriptor',
         (int)&vgui::EditablePanel `RTTI Type Descriptor',
         0);
  v13 = this[25];
  if ( v3 )
    (*(void (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)v3 + 768))(v3, a2, v13, 0);
  else
    (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*this + 12))(this, a2, v13, 0);
  v4 = (_DWORD *)sub_10229D00(32);
  if ( v4 )
    v5 = sub_10229D20(v4, (int)"SetActiveControl");
  else
    v5 = 0;
  v6 = (*(int (__thiscall **)(_DWORD *))(*this + 8))(this);
  sub_1022ACE0(v5, "PanelPtr", v6);
  v7 = (int (__thiscall ***)(_DWORD, _DWORD *, _DWORD, _DWORD))sub_10237C80(this + 26);
  v8 = dword_1047CA74;
  v9 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA74 + 80);
  v10 = (**v7)(v7, v5, 0, 0.0);
  return (*v9)(v8, v10);
}
