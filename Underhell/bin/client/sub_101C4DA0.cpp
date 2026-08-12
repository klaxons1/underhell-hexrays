int __usercall sub_101C4DA0@<eax>(
        int a1@<ebx>,
        int a2@<ebp>,
        int a3@<esi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  int v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // eax
  int v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // eax
  int v17; // ebx
  int v18; // eax
  int v19; // edx
  int v20; // ecx
  int v21; // ebp
  size_t v22; // eax
  int v23; // eax
  int v24; // ebp
  void (__thiscall ***v25)(_DWORD, int); // edi
  int v26; // esi
  unsigned int v27; // ebx
  int v28; // ebx
  int v29; // eax
  void (__thiscall ***v30)(_DWORD, int); // edi
  void (__thiscall ***v31)(_DWORD, int); // eax
  void (__thiscall ***v32)(_DWORD, int); // esi
  unsigned int v33; // ebp
  void (__thiscall ***v34)(int, int); // ebx
  int v35; // eax
  void (__thiscall **v36)(int, int); // edx
  void (__thiscall ***v37)(_DWORD, int); // edi
  void (__thiscall ***v38)(_DWORD, int); // ebp
  int v39; // eax
  int v40; // edi
  unsigned int NewValue; // [esp+3Ch] [ebp-4h]
  unsigned int retaddr; // [esp+40h] [ebp+0h]
  int v46; // [esp+44h] [ebp+4h]

  if ( !a4 )
    return 2;
  if ( *(_DWORD *)a4 != 28 )
    return 2;
  v10 = *(_DWORD *)(a4 + 4);
  if ( !v10 || !*(_DWORD *)(a4 + 8) )
    return 2;
  v11 = *(_DWORD *)(a4 + 16);
  if ( v11 > 0x11 )
    return 4;
  if ( v11 <= 1 )
  {
    v12 = *(_DWORD *)(a4 + 12);
    if ( v12 )
    {
      if ( v12 < 4 * v10 )
        return 4;
    }
  }
  if ( !*(_DWORD *)(a4 + 24) || *(_DWORD *)(a4 + 20) < (unsigned int)sub_101C4CE0((_DWORD *)a4) )
    return 2;
  if ( !a5 )
    return 3;
  if ( *(_DWORD *)a5 != 28 )
    return 3;
  v14 = *(_DWORD *)(a5 + 4);
  if ( !v14 || !*(_DWORD *)(a5 + 8) )
    return 3;
  v15 = *(_DWORD *)(a5 + 16);
  if ( v15 > 0x11 )
    return 5;
  if ( v15 <= 1 )
  {
    v16 = *(_DWORD *)(a5 + 12);
    if ( v16 )
    {
      if ( v16 < 4 * v14 )
        return 5;
    }
  }
  if ( !*(_DWORD *)(a5 + 24) || *(_DWORD *)(a5 + 20) < (unsigned int)sub_101C4CE0((_DWORD *)a5) )
    return 3;
  if ( *(_DWORD *)(a4 + 4) != *(_DWORD *)(a5 + 4) || *(_DWORD *)(a4 + 8) != *(_DWORD *)(a5 + 8) )
    return 6;
  if ( !sub_101C43A0(*(_DWORD *)(a4 + 16)) )
    return 4;
  v17 = *(_DWORD *)(a5 + 16);
  v18 = sub_101C43A0(v17);
  v21 = v18;
  if ( !v18 )
    return 4;
  if ( v19 == v18 )
  {
    if ( v20 == v17 && *(_DWORD *)(a4 + 12) == *(_DWORD *)(a5 + 12) )
    {
      v22 = sub_101C4CE0((_DWORD *)a4);
      memcpy_0(*(void **)(a5 + 24), *(const void **)(a4 + 24), v22);
      return 0;
    }
    switch ( v20 )
    {
      case 4:
        v23 = 5;
        goto LABEL_44;
      case 3:
        v23 = 4;
        goto LABEL_44;
      case 2:
        v23 = 3;
        goto LABEL_44;
      case 0:
        v23 = 1;
        goto LABEL_44;
      case 1:
        v23 = 2;
LABEL_44:
        switch ( v17 )
        {
          case 4:
            v24 = 5;
            break;
          case 3:
            v24 = 4;
            break;
          case 2:
            v24 = 3;
            break;
          default:
            if ( v17 )
            {
              if ( v17 != 1 )
                return 5;
              v24 = 2;
            }
            else
            {
              v24 = 1;
            }
            break;
        }
        v25 = (void (__thiscall ***)(_DWORD, int))sub_101C69B0(
                                                    v23,
                                                    *(_DWORD *)(a4 + 4),
                                                    *(_DWORD *)(a4 + 8),
                                                    *(_DWORD *)(a4 + 12),
                                                    *(_DWORD *)(a4 + 24));
        if ( v25 )
        {
          v26 = sub_101C69B0(v24, *(_DWORD *)(a5 + 4), *(_DWORD *)(a5 + 8), *(_DWORD *)(a5 + 12), *(_DWORD *)(a5 + 24));
          if ( v26 )
          {
            v27 = _controlfp(0, 0);
            _controlfp(0x8001Fu, 0x8001Fu);
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v26 + 4))(v26, v25);
            _controlfp(v27, 0x8001Fu);
            (**v25)(v25, 1);
            (**(void (__thiscall ***)(int, int))v26)(v26, 1);
            return 0;
          }
          else
          {
            (**v25)(v25, 1);
            return 8;
          }
        }
        return 8;
    }
    return 4;
  }
  if ( v19 == 1 )
  {
    if ( v18 != 1 )
    {
      if ( (unsigned int)dword_1044FA10 <= 1 )
        return sub_101C4510(v17, a4, (_DWORD *)a4, (_DWORD *)a5, a6, a7, a8, a9, v18);
      else
        return sub_101C4860((_DWORD *)a4, (_DWORD *)a5, a6, a7, a8, a9, v18);
    }
  }
  else if ( v18 == 1 )
  {
    v28 = sub_101C63E0(v19);
    if ( v28 )
    {
      v29 = *(_DWORD *)(a5 + 16);
      switch ( v29 )
      {
        case 4:
          v21 = 5;
          break;
        case 3:
          v21 = 4;
          break;
        case 2:
          v21 = 3;
          break;
        case 1:
          v21 = 2;
          break;
      }
      v30 = (void (__thiscall ***)(_DWORD, int))(*(int (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v28 + 28))(
                                                  v28,
                                                  *(_DWORD *)(a4 + 4),
                                                  *(_DWORD *)(a4 + 8),
                                                  *(_DWORD *)(a4 + 12),
                                                  *(_DWORD *)(a4 + 24),
                                                  a2);
      v31 = (void (__thiscall ***)(_DWORD, int))sub_101C69B0(
                                                  v21,
                                                  *(_DWORD *)(a5 + 4),
                                                  *(_DWORD *)(a5 + 8),
                                                  *(_DWORD *)(a5 + 12),
                                                  *(_DWORD *)(a5 + 24));
      v32 = v31;
      if ( v30 && v31 )
      {
        v33 = _controlfp(0, 0);
        _controlfp(0x8001Fu, 0x8001Fu);
        (*(void (__thiscall **)(int, void (__thiscall ***)(_DWORD, int), void (__thiscall ***)(_DWORD, int), int, int))(*(_DWORD *)v28 + 36))(
          v28,
          v30,
          v32,
          a1,
          a3);
        _controlfp(v33, 0x8001Fu);
        (**(void (__thiscall ***)(int, int))v28)(v28, 1);
        (**v30)(v30, 1);
        (**v32)(v32, 1);
        return sub_101C4450(a4);
      }
      (**(void (__thiscall ***)(int, int))v28)(v28, 1);
      if ( v30 )
        (**v30)(v30, 1);
      goto LABEL_80;
    }
    return 7;
  }
  v34 = (void (__thiscall ***)(int, int))sub_101C63E0(v19);
  v35 = sub_101C63E0(v21);
  v46 = v35;
  if ( !v34 )
  {
LABEL_96:
    if ( v46 )
      (**(void (__thiscall ***)(int, int))v46)(v46, 1);
    return 7;
  }
  v36 = *v34;
  if ( v35 )
  {
    (*v36)((int)v34, 1);
    goto LABEL_96;
  }
  v37 = (void (__thiscall ***)(_DWORD, int))((int (__thiscall *)(void (__thiscall ***)(int, int), _DWORD, _DWORD, _DWORD, _DWORD, int))v36[7])(
                                              v34,
                                              *(_DWORD *)(a4 + 4),
                                              *(_DWORD *)(a4 + 8),
                                              *(_DWORD *)(a4 + 12),
                                              *(_DWORD *)(a4 + 24),
                                              a2);
  v38 = (void (__thiscall ***)(_DWORD, int))sub_101C69B0(5, *(_DWORD *)(a5 + 4), *(_DWORD *)(a5 + 8), 0, 0);
  v39 = (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a5 + 28))(
          0,
          *(_DWORD *)(a5 + 4),
          *(_DWORD *)(a5 + 8),
          *(_DWORD *)(a5 + 12),
          *(_DWORD *)(a5 + 24));
  v32 = (void (__thiscall ***)(_DWORD, int))v39;
  if ( !v37 || !v38 || !v39 )
  {
    (**v34)((int)v34, 1);
    if ( v37 )
      (**v37)(v37, 1);
    if ( v38 )
      (**v38)(v38, 1);
LABEL_80:
    if ( v32 )
      (**v32)(v32, 1);
    return 8;
  }
  retaddr = _controlfp(0, 0);
  _controlfp(0x8001Fu, 0x8001Fu);
  v40 = ((int (__thiscall *)(int, _DWORD))(*v34)[9])((int)v34, v37);
  if ( !v40 )
    v40 = (*(int (__thiscall **)(_DWORD, void (__thiscall ***)(_DWORD, int), void (__thiscall ***)(_DWORD, int), int, int, int))(*(_DWORD *)v46 + 32))(
            0,
            v38,
            v32,
            a7,
            a8,
            a9);
  _controlfp(NewValue, 0x8001Fu);
  return sub_101C4450(v40);
}
