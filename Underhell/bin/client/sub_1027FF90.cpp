char __userpurge sub_1027FF90@<al>(
        int a1@<ecx>,
        int a2@<ebx>,
        int a3@<ebp>,
        int a4,
        int a5,
        int (__thiscall ***a6)(void *, int, int))
{
  int (__thiscall ***v7)(void *, int, int); // edi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v12; // ecx
  int v13; // ebp
  int v14; // edi
  bool v15; // bl
  char v16; // al
  int (__thiscall ***v17)(void *, int, int); // edi
  int i; // ebx
  int (__thiscall ***v19)(void *, int, int); // ebp
  _DWORD *v20; // ebp
  _DWORD *v21; // eax
  _DWORD *v22; // ebx
  int v23; // eax
  int (__thiscall ***v24)(_DWORD, _DWORD *, _DWORD, _DWORD); // eax
  int v25; // edi
  void (__thiscall **v26)(int, int); // esi
  int v27; // eax
  _DWORD *v28; // eax
  _DWORD *v29; // ebx
  int (__thiscall ***v30)(_DWORD, _DWORD *); // eax
  int v31; // edi
  void (__thiscall **v32)(int, int); // esi
  int v33; // eax
  _DWORD *v34; // eax
  _DWORD *v35; // eax
  int v36; // [esp+18h] [ebp-14h]
  int v37; // [esp+1Ch] [ebp-10h]

  if ( sub_10237C80((_DWORD *)(a1 + 104)) )
  {
    if ( *(_BYTE *)(a1 + 40) )
    {
      v37 = a3;
      (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA68 + 28))(dword_1047CA68, &a4, &a5);
      if ( *(_DWORD *)(a1 + 44) == 108 )
      {
        v12 = *(_DWORD *)(a1 + 64) - *(_DWORD *)(a1 + 56);
        v13 = 1;
        if ( v12 + a4 >= 1 )
          v13 = v12 + a4;
        v14 = 1;
        if ( a5 + *(_DWORD *)(a1 + 68) - *(_DWORD *)(a1 + 60) >= 1 )
          v14 = a5 + *(_DWORD *)(a1 + 68) - *(_DWORD *)(a1 + 60);
        v15 = (*(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA68 + 60))(
                dword_1047CA68,
                79,
                v37)
           || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 80);
        if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 83)
          || (v16 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 84)) != 0 )
        {
          v16 = 1;
        }
        if ( v15 )
          v13 = *(_DWORD *)(a1 + 64);
        if ( v16 )
          v14 = *(_DWORD *)(a1 + 68);
        v36 = v14;
        v17 = a6;
        sub_102361A0(a6, v13, v36);
        sub_1027F7B0((_DWORD *)a1, (int)v17);
      }
      else
      {
        for ( i = 0; i < *(_DWORD *)(a1 + 128); ++i )
        {
          v19 = (int (__thiscall ***)(void *, int, int))sub_10237C80((_DWORD *)(4 * i + *(_DWORD *)(a1 + 116)));
          sub_10236140(
            v19,
            a4 + *(_DWORD *)(a1 + 48) + *(_DWORD *)(*(_DWORD *)(a1 + 136) + 4 * i) - *(_DWORD *)(a1 + 56),
            a5 + *(_DWORD *)(a1 + 52) + *(_DWORD *)(*(_DWORD *)(a1 + 156) + 4 * i) - *(_DWORD *)(a1 + 60));
          sub_1027F7B0((_DWORD *)a1, (int)v19);
        }
        v17 = a6;
      }
      v20 = (_DWORD *)(a1 + 104);
      if ( sub_10237C80((_DWORD *)(a1 + 104)) )
      {
        v21 = (_DWORD *)sub_10229D00(32);
        if ( v21 )
          v22 = sub_10229D20(v21, (int)"UpdateControlData");
        else
          v22 = 0;
        v23 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 8))(a1, v37, a2);
        sub_1022ACE0(v22, "panel", v23);
        v24 = (int (__thiscall ***)(_DWORD, _DWORD *, _DWORD, _DWORD))sub_10237C80((_DWORD *)(a1 + 104));
        v25 = dword_1047CA74;
        v26 = (void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA74 + 80);
        v27 = (**v24)(v24, v22, 0, 0.0);
        (*v26)(v25, v27);
        v28 = (_DWORD *)sub_10229D00(32);
        if ( v28 )
          v29 = sub_10229D20(v28, (int)"EnableSaveButton");
        else
          v29 = 0;
        v30 = (int (__thiscall ***)(_DWORD, _DWORD *))sub_10237C80(v20);
        v31 = dword_1047CA74;
        v32 = (void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA74 + 80);
        v33 = (**v30)(v30, v29);
        (*v32)(v31, v33);
        v17 = a6;
      }
      ((void (__thiscall *)(int (__thiscall ***)(void *, int, int)))(*v17)[4])(v17);
      v34 = (_DWORD *)sub_10229D00(32);
      if ( v34 )
      {
        v35 = sub_10229D20(v34, (int)"Repaint");
        sub_10236860(v17, v35);
        return 1;
      }
      sub_10236860(v17, 0);
    }
    return 1;
  }
  else
  {
    v7 = a6;
    if ( ((int (__thiscall *)(int (__thiscall ***)(void *, int, int)))(*a6)[36])(a6) )
    {
      v8 = ((int (__thiscall *)(int (__thiscall ***)(void *, int, int)))(*v7)[36])(v7);
      v9 = __RTDynamicCast(
             v8,
             0,
             (struct _s_RTTICompleteObjectLocator *)&vgui::Panel `RTTI Type Descriptor',
             (int)&vgui::EditablePanel `RTTI Type Descriptor',
             0);
      if ( v9 )
      {
        v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 788))(v9);
        if ( v10 )
        {
          if ( v10 != a1 )
            (*(void (__thiscall **)(int, int, int, int (__thiscall ***)(void *, int, int)))(*(_DWORD *)v10 + 76))(
              v10,
              a4,
              a5,
              v7);
        }
      }
    }
    return 0;
  }
}
