int __thiscall sub_1026C040(_DWORD **this, int a2)
{
  int v3; // eax
  int v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // ebp
  int v7; // ebx
  void (__thiscall **v8)(int, int); // edi
  int v9; // eax
  int v10; // eax
  _DWORD *v11; // edi
  _DWORD *v12; // eax
  _DWORD *v13; // edx
  _DWORD *v14; // eax
  int v15; // edi
  int result; // eax
  _DWORD *v17; // eax
  _DWORD *v18; // ebp
  int v19; // ebx
  int (__thiscall **v20)(int, int); // edi
  int v21; // eax
  int v22; // eax
  int (__thiscall ***retaddr)(_DWORD, _DWORD *, int); // [esp+30h] [ebp+0h]

  ((void (__thiscall *)(_DWORD **, _DWORD))(*this)[31])(this, 0);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this[57] + 124))(this[57], 0);
  v3 = ((int (__thiscall *)(_DWORD **))(*this)[36])(this);
  v4 = __RTDynamicCast(
         v3,
         0,
         (struct _s_RTTICompleteObjectLocator *)&vgui::Panel `RTTI Type Descriptor',
         (int)&vgui::MenuItem `RTTI Type Descriptor',
         0);
  if ( v4 && sub_1026ECD0(v4) )
  {
    v5 = (_DWORD *)sub_10229D00(32);
    if ( v5 )
      v6 = sub_10229D20(v5, (int)"MenuItemSelected");
    else
      v6 = 0;
    sub_1022ACE0(v6, "panel", a2);
    v7 = dword_1047CA74;
    v8 = (void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA74 + 80);
    v9 = ((int (__thiscall *)(_DWORD **, _DWORD))**this)(this, 0.0);
    v10 = (**retaddr)(retaddr, v6, v9);
    (*v8)(v7, v10);
  }
  v11 = this[61];
  v12 = v11;
  if ( v11 == (_DWORD *)-1 )
  {
LABEL_11:
    if ( v11 != (_DWORD *)-1 )
    {
      v14 = this[58];
      do
      {
        v15 = 3 * (_DWORD)v11;
        sub_1026EFD0(v14[v15]);
        v14 = this[58];
        v11 = (_DWORD *)v14[v15 + 2];
      }
      while ( v11 != (_DWORD *)-1 );
    }
  }
  else
  {
    v13 = this[58];
    while ( v13[3 * (_DWORD)v12] != a2 )
    {
      v12 = (_DWORD *)v13[3 * (_DWORD)v12 + 2];
      if ( v12 == (_DWORD *)-1 )
        goto LABEL_11;
    }
    this[95] = v12;
  }
  result = ((int (__thiscall *)(_DWORD **))(*this)[37])(this);
  if ( result )
  {
    v17 = (_DWORD *)sub_10229D00(32);
    if ( v17 )
      v18 = sub_10229D20(v17, (int)"MenuItemSelected");
    else
      v18 = 0;
    sub_1022ACE0(v18, "panel", a2);
    v19 = dword_1047CA74;
    v20 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA74 + 80);
    v21 = ((int (__thiscall *)(_DWORD **, _DWORD))**this)(this, 0.0);
    v22 = ((int (__thiscall *)(_DWORD **, _DWORD *, int))(*this)[37])(this, v18, v21);
    return (*v20)(v19, v22);
  }
  return result;
}
