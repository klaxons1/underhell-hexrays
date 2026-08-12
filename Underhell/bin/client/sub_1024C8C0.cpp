int __userpurge sub_1024C8C0@<eax>(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4, int a5, int a6, int a7)
{
  int result; // eax
  char *v9; // ebx
  int v10; // ebp
  int v11; // edi
  int (__thiscall ***v12)(void *, int, int); // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // ebp
  int v16; // eax
  int v17; // ebp
  int v20; // [esp+4h] [ebp-14h] BYREF
  int v21; // [esp+8h] [ebp-10h]
  int v22; // [esp+Ch] [ebp-Ch] BYREF
  _DWORD v23[2]; // [esp+10h] [ebp-8h] BYREF
  char *retaddr; // [esp+18h] [ebp+0h] BYREF

  result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 204) + 908))(*(_DWORD *)(a1 + 204));
  if ( (_BYTE)result )
  {
    v9 = *(char **)(a1 + 224);
    v10 = *(_DWORD *)(a1 + 228);
    v11 = *(_DWORD *)(a1 + 220);
    v12 = *(int (__thiscall ****)(void *, int, int))(a1 + 204);
    v21 = *(_DWORD *)(a1 + 232);
    sub_10237070(v12, (int)&v20, (int)&v22);
    v13 = *(_DWORD *)(a1 + 208);
    v14 = a4;
    v15 = a4 * v13 + v10;
    v23[1] = v15;
    if ( v13 == -1 )
    {
      if ( v15 < v20 )
        v14 = *(_DWORD *)(a1 + 228) - v20;
      v11 += v14;
    }
    v16 = a5;
    v17 = a5 * *(_DWORD *)(a1 + 212) + v21;
    if ( *(_DWORD *)(a1 + 212) == -1 )
    {
      if ( v17 < v22 )
        v16 = *(_DWORD *)(a1 + 232) - v22;
      v9 += v16;
    }
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(a1 + 204) + 960))(
           *(_DWORD *)(a1 + 204),
           a3,
           a2) )
    {
      if ( v11 < 0 )
        v11 = 0;
      if ( (int)v9 < 0 )
        v9 = 0;
      (*(void (__thiscall **)(int, int *, char **))(*(_DWORD *)dword_1047CA6C + 148))(dword_1047CA6C, &a7, &retaddr);
      sub_102361D0(*(int (__thiscall ****)(void *, int, int))(a1 + 204), (int)&a6, (int)v23);
      if ( a6 + v11 > a7 )
        v11 = a7 - a6;
      if ( (int)&v9[v23[0]] > (int)retaddr )
        v9 = &retaddr[-v23[0]];
    }
    sub_10236140(*(int (__thiscall ****)(void *, int, int))(a1 + 204), v11, (int)v9);
    sub_102361A0(*(int (__thiscall ****)(void *, int, int))(a1 + 204), a4, v17);
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a1 + 204) + 244))(*(_DWORD *)(a1 + 204), 0, 0);
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 204) + 16))(*(_DWORD *)(a1 + 204));
  }
  return result;
}
