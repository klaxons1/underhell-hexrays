void __userpurge sub_10264F10(int a1@<ecx>, double a2@<st0>, int a3)
{
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  int v6; // edi
  int v7; // eax
  int v8; // ebp
  int v9; // ebx
  int v10; // ebx
  int v11; // edi
  int v12; // eax
  int v13; // eax
  int v14; // [esp+8h] [ebp-Ch]
  int v15; // [esp+Ch] [ebp-8h]
  int v16; // [esp+10h] [ebp-4h]

  if ( sub_10237C80((_DWORD *)(a1 + 444)) )
  {
    v4 = (_DWORD *)sub_10229D00(32);
    if ( v4 )
    {
      v5 = sub_1022B1A0(v4, (int)"KeyCodeTyped", "code", a3);
      sub_10236860((void *)a1, v5);
    }
    else
    {
      sub_10236860((void *)a1, 0);
    }
  }
  else
  {
    v15 = *(_DWORD *)(a1 + 336);
    v16 = *(_DWORD *)(a1 + 272);
    if ( v15 )
    {
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 1036))(a1);
      (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 1032))(a1);
      v14 = (int)a2;
      v7 = *(_DWORD *)(a1 + 408);
      v8 = 0;
      if ( v7 >= 0 && v7 < *(_DWORD *)(a1 + 292) && v7 <= *(_DWORD *)(a1 + 316) )
      {
        v9 = *(_DWORD *)(a1 + 288);
        if ( *(_DWORD *)(v9 + 12 * v7 + 4) != v7 || *(_DWORD *)(v9 + 12 * v7 + 8) == v7 )
          v8 = sub_100B41A0((_DWORD *)(a1 + 324), (_DWORD *)(a1 + 408));
      }
      v10 = *(_DWORD *)(a1 + 372);
      switch ( a3 )
      {
        case 'J':
          v8 = 0;
          goto LABEL_33;
        case 'K':
          v8 = v15 - 1;
          goto LABEL_33;
        case 'L':
          if ( v8 > v6 )
            v8 = v6;
          else
            v8 += 1 - v14;
          goto LABEL_33;
        case 'M':
          if ( v8 < v14 + v6 - 1 )
            v8 = v14 + v6 - 1;
          else
            v8 = v14 + v8 - 1;
          goto LABEL_33;
        case 'X':
          --v8;
          goto LABEL_33;
        case 'Y':
          if ( (*(_BYTE *)(a1 + 376) & 8) == 0 )
            goto LABEL_45;
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 940))(a1) == 1 && v10 >= 0 )
          {
            if ( --v10 < 0 )
              v10 = 0;
          }
          else
          {
LABEL_28:
            if ( (*(_BYTE *)(a1 + 376) & 8) == 0
              || (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 940))(a1) != 1
              || v10 < 0 )
            {
LABEL_45:
              sub_10236CD0((void *)a1, a3);
              return;
            }
            if ( ++v10 >= v16 )
              v10 = v16 - 1;
          }
LABEL_33:
          v11 = v15 - 1;
          if ( v8 <= v15 - 1 )
            v11 = v8 < 0 ? 0 : v8;
          v12 = *(_DWORD *)(*(_DWORD *)(a1 + 324) + 4 * v11);
          if ( v12 != *(_DWORD *)(a1 + 408) || v10 != *(_DWORD *)(a1 + 372) || *(int *)(a1 + 400) > 1 )
            (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 972))(a1, v12, v10);
          if ( v14 < v15 )
          {
            v13 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 368) + 772))(*(_DWORD *)(a1 + 368));
            if ( v11 >= v13 )
            {
              if ( v11 >= v14 + v13 )
                (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 368) + 768))(
                  *(_DWORD *)(a1 + 368),
                  v11 - v14 + 1);
            }
            else
            {
              (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 368) + 768))(*(_DWORD *)(a1 + 368), v11);
            }
          }
          (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a1 + 244))(a1, 0, 0);
          break;
        case 'Z':
          ++v8;
          goto LABEL_33;
        case '[':
          goto LABEL_28;
        default:
          goto LABEL_45;
      }
    }
  }
}
