int __userpurge sub_10268F20@<eax>(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4, int a5, int a6)
{
  int result; // eax
  int v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // ebx
  int v13; // eax
  _DWORD *v14; // edx
  int v15; // eax
  int v16; // [esp+Ch] [ebp-4h] BYREF
  int retaddr; // [esp+10h] [ebp+0h]

  result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 208) + 128))(*(_DWORD *)(a1 + 208));
  if ( (_BYTE)result )
  {
    v8 = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(a1 + 208) + 772))(*(_DWORD *)(a1 + 208), a3, a2);
    sub_102361D0((int (__thiscall ***)(void *, int, int))a1, (int)&v16, (int)&a4);
    v9 = sub_10268A80((_DWORD *)a1);
    retaddr = v16 / v9;
    v10 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 848))(a1);
    v11 = *(_DWORD *)(a1 + 260);
    v12 = v10;
    v13 = 0;
    if ( v11 <= 0 )
    {
LABEL_6:
      v13 = -1;
    }
    else
    {
      v14 = *(_DWORD **)(a1 + 248);
      while ( *v14 != a6 )
      {
        ++v13;
        ++v14;
        if ( v13 >= v11 )
          goto LABEL_6;
      }
    }
    v15 = v13 / v12;
    if ( v15 < v8 || v15 >= v8 + retaddr )
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 208) + 768))(*(_DWORD *)(a1 + 208), v15);
    return (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a1 + 244))(a1, 0, 0);
  }
  return result;
}
