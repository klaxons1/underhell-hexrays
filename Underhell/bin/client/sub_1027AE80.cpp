void __userpurge sub_1027AE80(int a1@<ecx>, int a2@<ebp>, int a3, int a4)
{
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  int v7; // eax
  int v8; // edi
  _DWORD *v9; // eax
  int v10; // ebp
  int v11; // ebx
  int v12; // eax
  int v13; // edx
  _DWORD *v14; // eax
  int v15; // ebp
  int v16; // ebx
  int v17; // eax
  int v18; // edx
  int v19; // [esp+4h] [ebp-10h] BYREF
  _BYTE v20[4]; // [esp+8h] [ebp-Ch] BYREF
  _BYTE v21[4]; // [esp+Ch] [ebp-8h] BYREF
  _BYTE v22[4]; // [esp+10h] [ebp-4h] BYREF

  if ( sub_10237C80((_DWORD *)(a1 + 324)) )
  {
    v5 = (_DWORD *)sub_10229D00(32);
    if ( v5 )
    {
      v6 = sub_1022B1A0(v5, (int)"KeyCodeTyped", "code", a3);
      sub_10236860((void *)a1, v6);
    }
    else
    {
      sub_10236860((void *)a1, 0);
    }
    return;
  }
  if ( *(_DWORD *)(a1 + 224) )
  {
    v7 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 212) + 8) + 820))(*(_DWORD *)(*(_DWORD *)(a1 + 212) + 8));
    if ( v7 )
      (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 268))(dword_1047CA6C, v7);
  }
  switch ( a3 )
  {
    case 'Z':
      sub_1027A100((_DWORD *)a1);
      return;
    case 'X':
      sub_1027A180((_DWORD *)a1);
      return;
    case 'M':
      sub_10236250((int (__thiscall ***)(void *, int, int))a1, (int)v22, (int)v21, (int)v20, (int)&v19);
      v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 856))(a1, a2);
      v9 = (_DWORD *)(*(_DWORD *)(a1 + 232) + 12 * v8);
      v10 = *(_DWORD *)(*v9 + 296);
      v11 = 0;
      v12 = sub_1027A4C0((_DWORD *)(a1 + 304), v9);
      while ( v11 < a4 )
      {
        if ( ++v12 < 0 || v12 >= *(_DWORD *)(a1 + 316) )
          break;
        v8 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 304) + 4 * v12) + 292);
        v13 = *(_DWORD *)(*(_DWORD *)(a1 + 232) + 12 * v8);
        ++v11;
        if ( *(_DWORD *)(v13 + 296) != v10 )
        {
          v10 = *(_DWORD *)(v13 + 296);
          ++v11;
        }
      }
      goto LABEL_19;
    case 'L':
      sub_10236250((int (__thiscall ***)(void *, int, int))a1, (int)v20, (int)v21, (int)v22, (int)&v19);
      v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 856))(a1, a2);
      v14 = (_DWORD *)(*(_DWORD *)(a1 + 232) + 12 * v8);
      v15 = *(_DWORD *)(*v14 + 296);
      v16 = 0;
      v17 = sub_1027A4C0((_DWORD *)(a1 + 304), v14);
      if ( a4 <= 0 )
      {
LABEL_19:
        sub_10279CE0((_DWORD *)a1, a1, *(int (__thiscall ****)(_DWORD))(*(_DWORD *)(a1 + 232) + 12 * v8));
        (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 928))(a1, v8);
        return;
      }
      while ( --v17 >= 0 && v17 < *(_DWORD *)(a1 + 316) )
      {
        v8 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 304) + 4 * v17) + 292);
        v18 = *(_DWORD *)(*(_DWORD *)(a1 + 232) + 12 * v8);
        ++v16;
        if ( *(_DWORD *)(v18 + 296) != v15 )
        {
          v15 = *(_DWORD *)(v18 + 296);
          ++v16;
        }
        if ( v16 >= a4 )
          goto LABEL_19;
      }
      sub_10279CE0((_DWORD *)a1, a1, *(int (__thiscall ****)(_DWORD))(*(_DWORD *)(a1 + 232) + 12 * v8));
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 344) + 768))(*(_DWORD *)(a1 + 344), 0);
      break;
    default:
      if ( a3 != 89 && a3 != 91 )
        sub_10236CD0((void *)a1, a3);
      break;
  }
}
