char __userpurge sub_10280AA0@<al>(
        int a1@<ecx>,
        int a2@<ebx>,
        int a3@<edi>,
        int a4,
        int (__thiscall ***a5)(void *, int, int),
        int a6,
        int (__thiscall ***a7)(void *, int, int))
{
  _DWORD *v8; // esi
  int (__thiscall ***v9)(void *, int, int); // esi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v14; // eax
  int (__thiscall ***v15)(void *, int, int); // ebx
  _DWORD *v16; // eax
  _DWORD *v17; // ebx
  int v18; // edi
  _DWORD *v19; // eax
  int (__thiscall ***v20)(_DWORD, _DWORD *, _DWORD, _DWORD); // eax
  int v21; // edi
  void (__thiscall **v22)(int, int); // esi
  int v23; // eax
  int v24; // eax
  int (__thiscall ****v25)(void *, int, int); // ecx
  _DWORD *v26; // eax
  int (__thiscall ***v27)(_DWORD, _DWORD *, _DWORD, _DWORD, int, int); // eax
  int v28; // edi
  void (__thiscall **v29)(int, int); // esi
  int v30; // eax
  int v31; // edx
  int v32; // edi
  void (__thiscall **v33)(int, int); // esi
  int v34; // eax
  int *v35; // esi
  int *v36; // edi
  bool v37; // cc
  int v38; // eax
  int (__thiscall ***v39)(void *, int, int); // eax
  int v40; // ebx
  char *v41; // ecx
  int v42; // eax
  int v43; // edx
  int v44; // eax
  bool v45; // zf
  char **v46; // ebx
  int v47; // ebx
  char *v48; // edx
  int v49; // eax
  int v50; // ecx
  int v51; // eax
  char **v52; // ebx
  _DWORD *v53; // esi
  _DWORD *v54; // ecx
  _DWORD *v55; // eax
  _DWORD *v56; // edi
  int v57; // eax
  int (__thiscall ***v58)(_DWORD, _DWORD *, _DWORD, _DWORD); // eax
  int v59; // ebp
  void (__thiscall **v60)(int, int); // esi
  int v61; // eax
  _DWORD *v62; // eax
  _DWORD *v63; // ebp
  int (__thiscall ***v64)(_DWORD, _DWORD *); // eax
  int v65; // edi
  void (__thiscall **v66)(int, int); // esi
  int v67; // eax
  _DWORD *v70; // [esp+4Ch] [ebp-14h]
  int v71; // [esp+50h] [ebp-10h] BYREF
  int v72; // [esp+54h] [ebp-Ch] BYREF
  char *v73; // [esp+58h] [ebp-8h]
  _DWORD *v74; // [esp+5Ch] [ebp-4h]
  char *retaddr; // [esp+60h] [ebp+0h] BYREF

  v8 = (_DWORD *)(a1 + 104);
  v72 = a1 + 104;
  if ( sub_10237C80((_DWORD *)(a1 + 104)) )
  {
    v14 = sub_10237C80(v8);
    v15 = a5;
    if ( a5 == (int (__thiscall ***)(void *, int, int))v14 )
    {
      v16 = (_DWORD *)sub_10229D00(32);
      if ( v16 )
      {
        v17 = sub_10229D20(v16, (int)"HideNewControlMenu");
LABEL_20:
        v20 = (int (__thiscall ***)(_DWORD, _DWORD *, _DWORD, _DWORD))sub_10237C80(v8);
        v21 = dword_1047CA74;
        v22 = (void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA74 + 80);
        v23 = (**v20)(v20, v17, 0, 0.0);
        (*v22)(v21, v23);
        return 1;
      }
      goto LABEL_19;
    }
    if ( strlen((const char *)((int (__thiscall *)(int (__thiscall ***)(void *, int, int)))(*a5)[18])(a5)) )
    {
      if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 79)
        && !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 80) )
      {
        *(_DWORD *)(a1 + 128) = 0;
      }
      v18 = a4;
      if ( a4 == 108
        && v15 == (int (__thiscall ***)(void *, int, int))(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 36))(a1) )
      {
        v19 = (_DWORD *)sub_10229D00(32);
        if ( v19 )
        {
          v17 = sub_10229D20(v19, (int)"ShowNewControlMenu");
          goto LABEL_20;
        }
LABEL_19:
        v17 = 0;
        goto LABEL_20;
      }
      if ( *(_BYTE *)(a1 + 192) )
      {
        v24 = 0;
        v25 = (int (__thiscall ****)(void *, int, int))(a1 + 176);
        while ( v15 != *v25 )
        {
          ++v24;
          ++v25;
          if ( v24 >= 4 )
            goto LABEL_25;
        }
      }
      else
      {
LABEL_25:
        *(_BYTE *)(a1 + 40) = 1;
        *(_DWORD *)(a1 + 44) = v18;
        v26 = (_DWORD *)sub_10229D00(32);
        if ( v26 )
          v70 = sub_10229D20(v26, (int)"HideNewControlMenu");
        else
          v70 = 0;
        v27 = (int (__thiscall ***)(_DWORD, _DWORD *, _DWORD, _DWORD, int, int))sub_10237C80(v8);
        v28 = dword_1047CA74;
        v29 = (void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA74 + 80);
        v30 = (**v27)(v27, v70, 0, 0.0, a3, a2);
        (*v29)(v28, v30);
        (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA68 + 28))(dword_1047CA68, &a6, &v71);
        v31 = v71;
        *(_DWORD *)(a1 + 56) = a6;
        *(_DWORD *)(a1 + 60) = v31;
        v32 = dword_1047CA68;
        v33 = (void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 8);
        v34 = ((int (__thiscall *)(int (__thiscall ***)(void *, int, int)))**v15)(v15);
        (*v33)(v32, v34);
        v35 = (int *)(a1 + 136);
        *(_DWORD *)(a1 + 148) = 0;
        v36 = (int *)(a1 + 156);
        *(_DWORD *)(a1 + 168) = 0;
        v37 = *(_DWORD *)(a1 + 128) <= 0;
        v72 = 0;
        if ( v37 )
        {
LABEL_31:
          v72 = -1;
          sub_102393F0(&v72, (int (__thiscall ***)(_DWORD))v15);
          sub_10258C50((int *)(a1 + 116), *(_DWORD *)(a1 + 128), &v72);
        }
        else
        {
          while ( v15 != (int (__thiscall ***)(void *, int, int))sub_10237C80((_DWORD *)(*(_DWORD *)(a1 + 116) + 4 * v72)) )
          {
            v37 = ++v72 < *(_DWORD *)(a1 + 128);
            if ( !v37 )
              goto LABEL_31;
          }
        }
        sub_10236170(v15, (int)&a6, (int)&v71);
        v38 = v71;
        *(_DWORD *)(a1 + 48) = a6;
        *(_DWORD *)(a1 + 52) = v38;
        sub_102361D0(v15, a1 + 64, a1 + 68);
        v37 = *(_DWORD *)(a1 + 128) <= 0;
        v72 = 0;
        if ( !v37 )
        {
          do
          {
            v39 = (int (__thiscall ***)(void *, int, int))sub_10237C80((_DWORD *)(*(_DWORD *)(a1 + 116) + 4 * v72));
            sub_10236170(v39, (int)&retaddr, (int)&a4);
            v40 = *(_DWORD *)(a1 + 148);
            v41 = &retaddr[-a6];
            v42 = *(_DWORD *)(a1 + 140);
            v73 = &retaddr[-a6];
            if ( v40 + 1 > v42 )
            {
              sub_1010AFF0((_DWORD *)(a1 + 136), v40 - v42 + 1);
              v41 = v73;
            }
            ++*(_DWORD *)(a1 + 148);
            v43 = *v35;
            v44 = *(_DWORD *)(a1 + 148) - v40 - 1;
            v45 = *(_DWORD *)(a1 + 148) - v40 == 1;
            *(_DWORD *)(a1 + 152) = *(_DWORD *)(a1 + 136);
            if ( v44 >= 0 && !v45 )
            {
              memcpy((void *)(v43 + 4 * v40 + 4), (const void *)(v43 + 4 * v40), 4 * v44);
              v41 = v73;
            }
            v46 = (char **)(*v35 + 4 * v40);
            if ( v46 )
              *v46 = v41;
            v47 = *(_DWORD *)(a1 + 168);
            v48 = (char *)(a4 - v71);
            v49 = *(_DWORD *)(a1 + 160);
            v73 = (char *)(a4 - v71);
            if ( v47 + 1 > v49 )
            {
              sub_1010AFF0((_DWORD *)(a1 + 156), v47 - v49 + 1);
              v48 = v73;
            }
            ++*(_DWORD *)(a1 + 168);
            v50 = *v36;
            v51 = *(_DWORD *)(a1 + 168) - v47 - 1;
            v45 = *(_DWORD *)(a1 + 168) - v47 == 1;
            *(_DWORD *)(a1 + 172) = *(_DWORD *)(a1 + 156);
            if ( v51 >= 0 && !v45 )
            {
              memcpy((void *)(v50 + 4 * v47 + 4), (const void *)(v50 + 4 * v47), 4 * v51);
              v48 = v73;
            }
            v52 = (char **)(*v36 + 4 * v47);
            if ( v52 )
              *v52 = v48;
            v37 = ++v72 < *(_DWORD *)(a1 + 128);
          }
          while ( v37 );
          v15 = a7;
        }
        if ( *(int (__thiscall ****)(void *, int, int))(a1 + 72) != v15 )
        {
          v53 = v74;
          v54 = v74;
          *(_DWORD *)(a1 + 72) = v15;
          if ( sub_10237C80(v54) )
          {
            v55 = (_DWORD *)sub_10229D00(32);
            if ( v55 )
              v56 = sub_10229D20(v55, (int)"SetActiveControl");
            else
              v56 = 0;
            v57 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1);
            sub_1022ACE0(v56, "PanelPtr", v57);
            v58 = (int (__thiscall ***)(_DWORD, _DWORD *, _DWORD, _DWORD))sub_10237C80(v53);
            v59 = dword_1047CA74;
            v60 = (void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA74 + 80);
            v61 = (**v58)(v58, v56, 0, 0.0);
            (*v60)(v59, v61);
          }
        }
        v62 = (_DWORD *)sub_10229D00(32);
        if ( v62 )
          v63 = sub_10229D20(v62, (int)"StoreUndo");
        else
          v63 = 0;
        v64 = (int (__thiscall ***)(_DWORD, _DWORD *))sub_10237C80(v74);
        v65 = dword_1047CA74;
        v66 = (void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA74 + 80);
        v67 = (**v64)(v64, v63);
        (*v66)(v65, v67);
        ((void (__thiscall *)(int (__thiscall ***)(void *, int, int), _DWORD))(*v15)[12])(v15, 0);
      }
    }
    return 1;
  }
  v9 = a5;
  if ( ((int (__thiscall *)(int (__thiscall ***)(void *, int, int)))(*a5)[36])(a5) )
  {
    v10 = ((int (__thiscall *)(int (__thiscall ***)(void *, int, int)))(*v9)[36])(v9);
    v11 = __RTDynamicCast(
            v10,
            0,
            (struct _s_RTTICompleteObjectLocator *)&vgui::Panel `RTTI Type Descriptor',
            (int)&vgui::EditablePanel `RTTI Type Descriptor',
            0);
    if ( v11 )
    {
      v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 788))(v11);
      if ( v12 )
      {
        if ( v12 != a1 )
          (*(void (__thiscall **)(int, int, int (__thiscall ***)(void *, int, int)))(*(_DWORD *)v12 + 48))(v12, a4, v9);
      }
    }
  }
  return 0;
}
