void __thiscall sub_10239F80(char *this, _DWORD *a2, int a3)
{
  char v4; // bl
  int *v5; // eax
  int *v6; // esi
  int v7; // edx
  int v8; // eax
  int v9; // esi
  _DWORD *v10; // ecx
  int v11; // esi
  int v12; // eax
  int v13; // esi
  int v14; // eax
  int v15; // eax
  void (__thiscall *v16)(char *, int, int); // ebx
  int v17; // eax
  void (__thiscall *v18)(char *, int, int); // ebx
  int v19; // eax
  void (__thiscall *v20)(char *, int, int); // ebx
  int v21; // eax
  void (__thiscall *v22)(char *, int, int); // ebx
  int v23; // eax
  void (__thiscall *v24)(char *, int, int); // ebx
  int v25; // eax
  void (__thiscall *v26)(char *, int, int); // ebx
  int v27; // eax
  void (__thiscall *v28)(char *, int, int); // ebx
  int v29; // eax
  int (__thiscall **v30)(int, int); // ebx
  int v31; // eax
  int v32; // ebx
  int v33; // eax
  int (__thiscall **v34)(int, int); // ebx
  int v35; // eax
  int v36; // ebx
  int v37; // eax
  int v38; // ebx
  void (__cdecl **v39)(int, const char *, int, int); // esi
  void (__thiscall *v40)(char *, int); // ebx
  int v41; // edx
  void (__thiscall *v42)(char *, int); // ebx
  int v43; // eax
  void (__thiscall *v44)(char *, int); // ebx
  int v45; // eax
  void (__thiscall *v46)(char *, int); // ebx
  int v47; // eax
  void (__thiscall *v48)(char *, _DWORD); // ebx
  void (__thiscall *v49)(char *, int); // ebx
  int v50; // eax
  int (__thiscall **v51)(int, int); // ebx
  int v52; // eax
  int (__thiscall **v53)(int, int, int); // ebx
  int v54; // eax
  int v55; // eax
  char *v56; // eax
  void (__thiscall *v57)(char *, int); // ebx
  int v58; // eax
  int v59; // ebx
  void (__cdecl **v60)(int, const char *, int, int); // esi
  int *v61; // ecx
  int v62; // eax
  int v63; // eax
  int v64; // ebx
  void (**v65)(int, const char *, ...); // esi
  int v66; // eax
  int v67; // [esp-4h] [ebp-13Ch]
  int v68; // [esp-4h] [ebp-13Ch]
  int v69; // [esp+0h] [ebp-138h]
  int v70; // [esp+0h] [ebp-138h]
  int v71; // [esp+0h] [ebp-138h]
  int v72; // [esp+0h] [ebp-138h]
  int v73; // [esp+0h] [ebp-138h]
  int v74; // [esp+0h] [ebp-138h]
  int v75; // [esp+0h] [ebp-138h]
  int v76; // [esp+0h] [ebp-138h]
  float v77; // [esp+0h] [ebp-138h]
  int v78; // [esp+0h] [ebp-138h]
  int v79; // [esp+0h] [ebp-138h]
  char v80; // [esp+17h] [ebp-121h]
  int v81; // [esp+18h] [ebp-120h]
  int v82; // [esp+18h] [ebp-120h]
  int v83; // [esp+18h] [ebp-120h]
  int v84; // [esp+18h] [ebp-120h]
  int *v85; // [esp+1Ch] [ebp-11Ch]
  int v86; // [esp+20h] [ebp-118h]
  int v87; // [esp+24h] [ebp-114h]
  void (__thiscall *v88)(char *, int, int); // [esp+28h] [ebp-110h]
  int v89; // [esp+2Ch] [ebp-10Ch]
  void (__thiscall *v90)(char *, int, int); // [esp+38h] [ebp-100h]
  int v91; // [esp+3Ch] [ebp-FCh]
  int v92; // [esp+4Ch] [ebp-ECh]
  int v93; // [esp+5Ch] [ebp-DCh]
  int v94; // [esp+6Ch] [ebp-CCh]
  int v95; // [esp+7Ch] [ebp-BCh]
  int v96; // [esp+8Ch] [ebp-ACh]
  int v97; // [esp+9Ch] [ebp-9Ch]
  int v98; // [esp+ACh] [ebp-8Ch]
  int v99; // [esp+BCh] [ebp-7Ch]
  int v100; // [esp+CCh] [ebp-6Ch]
  int v101; // [esp+DCh] [ebp-5Ch]
  int v102; // [esp+ECh] [ebp-4Ch]
  int v103; // [esp+FCh] [ebp-3Ch]
  int v104; // [esp+10Ch] [ebp-2Ch]
  int v105; // [esp+11Ch] [ebp-1Ch]

  v4 = 0;
  v80 = 0;
  v87 = sub_10229A20(a2);
  v5 = (int *)(*(int (__thiscall **)(char *))(*(_DWORD *)this + 512))(this);
  v6 = v5;
  v85 = v5;
  if ( !v5[4] )
    sub_10237B90(v5);
  while ( !v4 )
  {
    v7 = *v6;
    v8 = v85[1];
    v9 = 0;
    if ( v8 <= 0 )
      goto LABEL_51;
    v10 = (_DWORD *)(v7 + 52);
    while ( v87 != *v10 )
    {
      ++v9;
      v10 += 16;
      if ( v9 >= v8 )
      {
        v4 = v80;
        goto LABEL_51;
      }
    }
    v11 = v9 << 6;
    v12 = *(_DWORD *)(v11 + v7 + 32);
    v13 = v7 + v11;
    v14 = v12 - 1;
    if ( !v14 )
    {
      switch ( *(_DWORD *)(v13 + 36) )
      {
        case 1:
          v42 = *(void (__thiscall **)(char *, int))(v13 + 16);
          v94 = *(_DWORD *)(v13 + 20);
          v43 = sub_1022B4C0(a2, *(char **)(v13 + 40), (int)Locale);
          v42(&this[v94], v43);
          break;
        case 2:
          v46 = *(void (__thiscall **)(char *, int))(v13 + 16);
          v98 = *(_DWORD *)(v13 + 20);
          v47 = sub_1022A800(a2, *(char **)(v13 + 40), 0);
          v46(&this[v98], v47);
          break;
        case 3:
          v48 = *(void (__thiscall **)(char *, _DWORD))(v13 + 16);
          v100 = *(_DWORD *)(v13 + 20);
          v77 = sub_1022A940(a2, (char *)*(_DWORD *)(v13 + 40), 0.0);
          v48(&this[v100], LODWORD(v77));
          break;
        case 4:
          v49 = *(void (__thiscall **)(char *, int))(v13 + 16);
          v102 = *(_DWORD *)(v13 + 20);
          v50 = sub_1022A910(a2, *(char **)(v13 + 40), 0);
          v49(&this[v102], v50);
          break;
        case 5:
          v40 = *(void (__thiscall **)(char *, int))(v13 + 16);
          v93 = *(_DWORD *)(v13 + 20);
          LOBYTE(v41) = sub_1022A800(a2, *(char **)(v13 + 40), 0) != 0;
          v40(&this[v93], v41);
          break;
        case 6:
          v56 = *(char **)(v13 + 40);
          if ( v56 )
          {
            v57 = *(void (__thiscall **)(char *, int))(v13 + 16);
            v104 = *(_DWORD *)(v13 + 20);
            v58 = sub_1022A910(a2, v56, 0);
            v57(&this[v104], v58);
          }
          else
          {
            (*(void (__thiscall **)(char *, _DWORD *))(v13 + 16))(&this[*(_DWORD *)(v13 + 20)], a2);
          }
          break;
        case 7:
          v44 = *(void (__thiscall **)(char *, int))(v13 + 16);
          v96 = *(_DWORD *)(v13 + 20);
          v45 = sub_1022B600(a2, *(char **)(v13 + 40), (int)&unk_10302674);
          v44(&this[v96], v45);
          break;
        case 9:
          v83 = dword_1047CA74;
          v51 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA74 + 64);
          v52 = sub_1022A800(a2, *(char **)(v13 + 40), 0);
          v84 = (*v51)(v83, v52);
          v86 = dword_1047CA70;
          v53 = (int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA70 + 216);
          v54 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 104))(this);
          v55 = (*v53)(v86, v84, v54);
          (*(void (__thiscall **)(char *, int))(v13 + 16))(&this[*(_DWORD *)(v13 + 20)], v55);
          break;
        default:
          v59 = dword_1047CA74;
          v60 = (void (__cdecl **)(int, const char *, int, int))(*(_DWORD *)dword_1047CA74 + 48);
          v78 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 72))(this);
          v68 = sub_10229A00(a2);
          (*v60)(v59, "Message '%s', sent to '%s', has an invalid parameter type\n", v68, v78);
          break;
      }
      goto LABEL_50;
    }
    if ( v14 == 1 )
    {
      v15 = *(_DWORD *)(v13 + 36);
      if ( v15 == 2 && *(_DWORD *)(v13 + 44) == 2 )
      {
        v16 = *(void (__thiscall **)(char *, int, int))(v13 + 16);
        v101 = *(_DWORD *)(v13 + 20);
        v69 = sub_1022A800(a2, *(char **)(v13 + 48), 0);
        v17 = sub_1022A800(a2, *(char **)(v13 + 40), 0);
        v16(&this[v101], v17, v69);
      }
      else if ( v15 == 4 && *(_DWORD *)(v13 + 44) == 2 )
      {
        v18 = *(void (__thiscall **)(char *, int, int))(v13 + 16);
        v103 = *(_DWORD *)(v13 + 20);
        v70 = sub_1022A800(a2, *(char **)(v13 + 48), 0);
        v19 = sub_1022A910(a2, *(char **)(v13 + 40), 0);
        v18(&this[v103], v19, v70);
      }
      else
      {
        if ( v15 == 1 )
        {
          if ( *(_DWORD *)(v13 + 44) == 2 )
          {
            v20 = *(void (__thiscall **)(char *, int, int))(v13 + 16);
            v95 = *(_DWORD *)(v13 + 20);
            v71 = sub_1022A800(a2, *(char **)(v13 + 48), 0);
            v21 = sub_1022B4C0(a2, *(char **)(v13 + 40), (int)Locale);
            v20(&this[v95], v21, v71);
            goto LABEL_50;
          }
          if ( *(_DWORD *)(v13 + 44) == 1 )
          {
            v22 = *(void (__thiscall **)(char *, int, int))(v13 + 16);
            v92 = *(_DWORD *)(v13 + 20);
            v72 = sub_1022B4C0(a2, *(char **)(v13 + 48), (int)Locale);
            v23 = sub_1022B4C0(a2, *(char **)(v13 + 40), (int)Locale);
            v22(&this[v92], v23, v72);
            goto LABEL_50;
          }
        }
        if ( v15 == 2 && *(_DWORD *)(v13 + 44) == 1 )
        {
          v24 = *(void (__thiscall **)(char *, int, int))(v13 + 16);
          v97 = *(_DWORD *)(v13 + 20);
          v73 = sub_1022B4C0(a2, *(char **)(v13 + 48), (int)Locale);
          v25 = sub_1022A800(a2, *(char **)(v13 + 40), 0);
          v24(&this[v97], v25, v73);
        }
        else
        {
          if ( v15 == 4 )
          {
            if ( *(_DWORD *)(v13 + 44) == 1 )
            {
              v26 = *(void (__thiscall **)(char *, int, int))(v13 + 16);
              v105 = *(_DWORD *)(v13 + 20);
              v74 = sub_1022B4C0(a2, *(char **)(v13 + 48), (int)Locale);
              v27 = sub_1022A910(a2, *(char **)(v13 + 40), 0);
              v26(&this[v105], v27, v74);
              goto LABEL_50;
            }
            if ( *(_DWORD *)(v13 + 44) == 7 )
            {
              v28 = *(void (__thiscall **)(char *, int, int))(v13 + 16);
              v99 = *(_DWORD *)(v13 + 20);
              v75 = sub_1022B600(a2, *(char **)(v13 + 48), (int)&unk_10302674);
              v29 = sub_1022A910(a2, *(char **)(v13 + 40), 0);
              v28(&this[v99], v29, v75);
              goto LABEL_50;
            }
          }
          if ( v15 != 9 )
            goto LABEL_37;
          if ( *(_DWORD *)(v13 + 44) == 1 )
          {
            v81 = dword_1047CA74;
            v30 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA74 + 64);
            v31 = sub_1022A800(a2, *(char **)(v13 + 40), 0);
            v32 = (*v30)(v81, v31);
            v89 = *(_DWORD *)(v13 + 20);
            v88 = *(void (__thiscall **)(char *, int, int))(v13 + 16);
            v33 = sub_1022B4C0(a2, *(char **)(v13 + 48), (int)Locale);
            v88(&this[v89], v32, v33);
          }
          else
          {
            if ( *(_DWORD *)(v13 + 44) != 7 )
            {
LABEL_37:
              v38 = dword_1047CA74;
              v39 = (void (__cdecl **)(int, const char *, int, int))(*(_DWORD *)dword_1047CA74 + 48);
              v76 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 72))(this);
              v67 = sub_10229A00(a2);
              (*v39)(v38, "Message '%s', sent to '%s', has invalid parameter types\n", v67, v76);
              goto LABEL_50;
            }
            v82 = dword_1047CA74;
            v34 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA74 + 64);
            v35 = sub_1022A800(a2, *(char **)(v13 + 40), 0);
            v36 = (*v34)(v82, v35);
            v91 = *(_DWORD *)(v13 + 20);
            v90 = *(void (__thiscall **)(char *, int, int))(v13 + 16);
            v37 = sub_1022B600(a2, *(char **)(v13 + 48), (int)&unk_10302674);
            v90(&this[v91], v36, v37);
          }
        }
      }
    }
    else
    {
      (*(void (__thiscall **)(char *))(v13 + 16))(&this[*(_DWORD *)(v13 + 20)]);
    }
LABEL_50:
    v4 = 1;
    v80 = 1;
LABEL_51:
    v61 = v85;
    v85 = (int *)v85[3];
    if ( !v85 )
    {
      if ( !v4 )
      {
        v62 = dword_103FD0F4;
        if ( dword_103FD0F4 == -1 )
        {
          v63 = CommandLine_Tier0(v61);
          v62 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v63 + 40))(v63, "-vguimessages") != 0;
          dword_103FD0F4 = v62;
        }
        if ( v62 == 1 )
        {
          v64 = dword_1047CA74;
          v65 = (void (**)(int, const char *, ...))(*(_DWORD *)dword_1047CA74 + 48);
          v79 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 72))(this);
          v66 = sub_10229A00(a2);
          (*v65)(v64, "Message '%s' not handled by panel '%s'\n", v66, v79);
        }
      }
      return;
    }
    v6 = v85;
  }
}
