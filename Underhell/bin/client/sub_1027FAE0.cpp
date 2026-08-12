char __userpurge sub_1027FAE0@<al>(
        int a1@<ecx>,
        int a2@<ebx>,
        int a3@<ebp>,
        int a4,
        int (__thiscall ***a5)(void *, int, int))
{
  int v5; // edi
  _DWORD *v6; // esi
  int (__thiscall ***v7)(void *, int, int); // esi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  unsigned __int8 (__thiscall *v12)(int, int, int); // edx
  _DWORD *v13; // ebp
  char v14; // al
  int v15; // ebx
  int v16; // eax
  _DWORD *v17; // eax
  int (__thiscall ***v18)(_DWORD, _DWORD *, _DWORD, _DWORD); // eax
  int v19; // esi
  int v20; // edi
  int v21; // eax
  _DWORD *v22; // eax
  _DWORD *v23; // ebp
  _DWORD *v24; // eax
  _DWORD *v25; // eax
  int (__thiscall ***v26)(_DWORD, _DWORD *, _DWORD, _DWORD); // eax
  int v27; // esi
  int v28; // edi
  int v29; // eax
  int (__thiscall ***v30)(void *, int, int); // ebp
  int v31; // ebx
  _DWORD *v32; // eax
  _DWORD *v33; // eax
  int (__thiscall **v34)(void *, int, int); // esi
  int v35; // eax
  _DWORD *v36; // eax
  _DWORD *v37; // edi
  int v38; // eax
  int (__thiscall ***v39)(_DWORD, _DWORD *, _DWORD, _DWORD); // eax
  int v40; // esi
  int v41; // ebx
  int v42; // eax
  _DWORD *v43; // eax
  _DWORD *v44; // ebx
  int (__thiscall ***v45)(_DWORD, _DWORD *); // eax
  int v46; // esi
  int v47; // edi
  int v48; // eax
  int v51; // [esp+5Ch] [ebp-24h]
  char v52; // [esp+6Ah] [ebp-16h]
  char v53; // [esp+6Bh] [ebp-15h]
  int v54; // [esp+6Ch] [ebp-14h]
  _DWORD *v55; // [esp+70h] [ebp-10h]
  int v56; // [esp+74h] [ebp-Ch]
  int v57; // [esp+78h] [ebp-8h] BYREF
  int v58; // [esp+7Ch] [ebp-4h] BYREF

  v5 = a1;
  v6 = (_DWORD *)(a1 + 104);
  LOWORD(v54) = a1;
  v55 = (_DWORD *)(a1 + 104);
  if ( sub_10237C80((_DWORD *)(a1 + 104)) )
  {
    v12 = *(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA68 + 60);
    v13 = 0;
    v56 = 0;
    v57 = 0;
    if ( v12(dword_1047CA68, 79, a3)
      || (HIBYTE(v54) = 0,
          (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 80)) )
    {
      HIBYTE(v54) = 1;
    }
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 83)
      || (BYTE2(v54) = 0,
          (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 84)) )
    {
      BYTE2(v54) = 1;
    }
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 81)
      || (v14 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 82)) != 0 )
    {
      v14 = 1;
    }
    v15 = a4;
    if ( v52 && v53 && v14 && a4 == 12 )
    {
      v16 = __RTDynamicCast(
              (int)a5,
              0,
              (struct _s_RTTICompleteObjectLocator *)&vgui::Panel `RTTI Type Descriptor',
              (int)&vgui::EditablePanel `RTTI Type Descriptor',
              0);
      if ( v16 )
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 784))(v16);
        return 1;
      }
      return 1;
    }
    switch ( a4 )
    {
      case 'I':
        v17 = (_DWORD *)sub_10229D00(32);
        if ( v17 )
          v13 = sub_10229D20(v17, (int)"DeletePanel");
        v18 = (int (__thiscall ***)(_DWORD, _DWORD *, _DWORD, _DWORD))sub_10237C80(v6);
        v19 = dword_1047CA74;
        v20 = *(_DWORD *)dword_1047CA74;
        v21 = (**v18)(v18, v13, 0, 0.0);
        (*(void (__thiscall **)(int, int))(v20 + 80))(v19, v21);
        v5 = v54;
        v6 = v55;
        break;
      case 'X':
        v57 = -*(_DWORD *)(v5 + 16);
        break;
      case 'Y':
        v56 = -*(_DWORD *)(v5 + 12);
        break;
      case 'Z':
        v57 = *(_DWORD *)(v5 + 16);
        break;
      case '[':
        v56 = *(_DWORD *)(v5 + 12);
        break;
      default:
        break;
    }
    if ( !v52 )
    {
LABEL_43:
      v30 = a5;
      v31 = v57;
      if ( v56 || v57 )
      {
        sub_10236250(a5, (int)&v58, (int)&v57, (int)&a4, (int)&a5);
        if ( v53 )
          sub_102361A0(v30, v56 + a4, (int)a5 + v31);
        else
          sub_10236140(v30, v56 + v58, v31 + v57);
        sub_1027F7B0((_DWORD *)v5, (int)v30);
        ((void (__thiscall *)(int (__thiscall ***)(void *, int, int)))(*v30)[4])(v30);
        if ( ((int (__thiscall *)(int (__thiscall ***)(void *, int, int)))(*v30)[37])(v30) )
        {
          v32 = (_DWORD *)sub_10229D00(32);
          if ( v32 )
            v33 = sub_10229D20(v32, (int)"Repaint");
          else
            v33 = 0;
          v34 = *v30;
          v35 = (*v30)[37](v30, (int)v33, COERCE_INT(0.0));
          ((void (__thiscall *)(int (__thiscall ***)(void *, int, int), int))v34[34])(v30, v35);
          v6 = v55;
        }
        if ( sub_10237C80(v6) )
        {
          v36 = (_DWORD *)sub_10229D00(32);
          if ( v36 )
            v37 = sub_10229D20(v36, (int)"SetActiveControl");
          else
            v37 = 0;
          v38 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v54 + 8))(v54, a2, v51);
          sub_1022ACE0(v37, "PanelPtr", v38);
          v39 = (int (__thiscall ***)(_DWORD, _DWORD *, _DWORD, _DWORD))sub_10237C80((_DWORD *)v57);
          v40 = dword_1047CA74;
          v41 = *(_DWORD *)dword_1047CA74;
          v42 = (**v39)(v39, v37, 0, 0.0);
          (*(void (__thiscall **)(int, int))(v41 + 80))(v40, v42);
          v43 = (_DWORD *)sub_10229D00(32);
          if ( v43 )
            v44 = sub_10229D20(v43, (int)"PanelMoved");
          else
            v44 = 0;
          v45 = (int (__thiscall ***)(_DWORD, _DWORD *))sub_10237C80((_DWORD *)(v56 + 104));
          v46 = dword_1047CA74;
          v47 = *(_DWORD *)dword_1047CA74;
          v48 = (**v45)(v45, v44);
          (*(void (__thiscall **)(int, int))(v47 + 80))(v46, v48);
          v5 = v54;
        }
      }
      if ( *(_BYTE *)(v5 + 40)
        && v30 != (int (__thiscall ***)(void *, int, int))(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 36))(v5) )
      {
        (*(void (__thiscall **)(int, int *, int (__thiscall ****)(void *, int, int)))(*(_DWORD *)dword_1047CA68 + 28))(
          dword_1047CA68,
          &a4,
          &a5);
        (*(void (__thiscall **)(int, int, int (__thiscall ***)(void *, int, int), int (__thiscall ***)(void *, int, int)))(*(_DWORD *)v5 + 76))(
          v5,
          a4,
          a5,
          v30);
      }
      return 1;
    }
    switch ( v15 )
    {
      case 13:
        v25 = (_DWORD *)sub_10229D00(32);
        if ( v25 )
        {
          v23 = sub_10229D20(v25, (int)"Copy");
          goto LABEL_42;
        }
        break;
      case 32:
        v24 = (_DWORD *)sub_10229D00(32);
        if ( v24 )
        {
          v23 = sub_10229D20(v24, (int)"Paste");
          goto LABEL_42;
        }
        break;
      case 36:
        v22 = (_DWORD *)sub_10229D00(32);
        if ( v22 )
        {
          v23 = sub_10229D20(v22, (int)"Undo");
LABEL_42:
          v26 = (int (__thiscall ***)(_DWORD, _DWORD *, _DWORD, _DWORD))sub_10237C80(v6);
          v27 = dword_1047CA74;
          v28 = *(_DWORD *)dword_1047CA74;
          v29 = (**v26)(v26, v23, 0, 0.0);
          (*(void (__thiscall **)(int, int))(v28 + 80))(v27, v29);
          v5 = v54;
          v6 = v55;
          goto LABEL_43;
        }
        break;
      default:
        goto LABEL_43;
    }
    v23 = 0;
    goto LABEL_42;
  }
  v7 = a5;
  if ( ((int (__thiscall *)(int (__thiscall ***)(void *, int, int)))(*a5)[36])(a5) )
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
        if ( v10 != v5 )
          (*(void (__thiscall **)(int, int, int (__thiscall ***)(void *, int, int)))(*(_DWORD *)v10 + 84))(v10, a4, v7);
      }
    }
  }
  return 0;
}
