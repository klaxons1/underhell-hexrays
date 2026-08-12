int __userpurge sub_10269860@<eax>(int *a1@<ecx>, int a2@<ebx>, int a3, int a4)
{
  int result; // eax
  int v6; // edx
  int v7; // edi
  int v8; // ebx
  int v9; // edx
  int v10; // eax
  _DWORD *v11; // ecx
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  int v14; // eax
  _UNKNOWN *retaddr; // [esp+10h] [ebp+0h] BYREF

  result = a1[56];
  if ( result == -1 )
  {
LABEL_5:
    v7 = -1;
  }
  else
  {
    v6 = a1[53];
    while ( *(_DWORD *)(v6 + 12 * result) != a3 )
    {
      result = *(_DWORD *)(v6 + 12 * result + 8);
      if ( result == -1 )
        goto LABEL_5;
    }
    v7 = result;
  }
  if ( v7 >= 0 && v7 < a1[54] && v7 <= a1[60] )
  {
    v8 = 12 * v7;
    result = 12 * v7 + a1[53];
    if ( *(_DWORD *)(result + 4) != v7 || *(_DWORD *)(result + 8) == v7 )
    {
      if ( a4 == 108 )
      {
        v9 = a1[75];
        v10 = 0;
        if ( v9 <= 0 )
          goto LABEL_19;
        v11 = (_DWORD *)a1[72];
        while ( *v11 != v7 )
        {
          ++v10;
          ++v11;
          if ( v10 >= v9 )
            goto LABEL_19;
        }
        if ( v10 == -1 )
        {
LABEL_19:
          (*(void (__thiscall **)(int *))(*a1 + 832))(a1);
          (*(void (__thiscall **)(int *, int))(*a1 + 836))(a1, v7);
        }
        v12 = (_DWORD *)sub_10229D00(32);
        if ( v12 )
        {
          v13 = sub_1022B1A0(v12, (int)"OpenContextMenu", "itemID", v7);
          return (*(int (__thiscall **)(int *, _DWORD *))(*a1 + 180))(a1, v13);
        }
        else
        {
          return (*(int (__thiscall **)(int *, _DWORD))(*a1 + 180))(a1, 0);
        }
      }
      else if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 79)
             || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 80) )
      {
        return sub_10269640(a1, v7);
      }
      else if ( (*(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA68 + 60))(
                  dword_1047CA68,
                  83,
                  a2)
             || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 84) )
      {
        if ( sub_100B41A0(a1 + 72, &retaddr) == -1 )
        {
          return (*(int (__thiscall **)(int *, int))(*a1 + 836))(a1, v7);
        }
        else
        {
          sub_1012D820(a1 + 72, &retaddr);
          if ( *(_BYTE *)(a4 + 320) )
          {
            *(_BYTE *)(a4 + 320) = 0;
            sub_10267E30((int *)a4, v8, v7);
            (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a4 + 244))(a4, 0, 0);
            (*(void (__thiscall **)(int))(*(_DWORD *)a4 + 16))(a4);
          }
          v14 = a1[53];
          a1[78] = v7;
          a1[77] = v7;
          return (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v8 + v14) + 48))(*(_DWORD *)(v8 + v14), 0);
        }
      }
      else
      {
        (*(void (__thiscall **)(int *))(*a1 + 832))(a1);
        return (*(int (__thiscall **)(int *, int))(*a1 + 836))(a1, v7);
      }
    }
  }
  return result;
}
