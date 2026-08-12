int __userpurge sub_10236550@<eax>(int *a1@<ecx>, int a2@<ebp>, int a3)
{
  int v3; // edi
  int v4; // ebx
  int v6; // eax
  int result; // eax
  int v8; // ebx
  int v9; // edi
  int v10; // ebp
  int v11; // eax
  int v12; // eax
  int v13; // edi
  int v14; // ebx
  int v15; // eax
  int v16; // ebx
  int v17; // edi
  int v18; // ebp
  int v19; // eax
  int v20; // eax
  int v21; // edi
  int v22; // ebx
  int v23; // eax
  int v24; // ebx
  int v25; // edi
  int v26; // ebp
  int v27; // eax
  int v28; // eax

  v3 = dword_1047CA70;
  v4 = *(_DWORD *)dword_1047CA70;
  if ( a3 )
    v6 = (*(int (__thiscall **)(int *, int))*a1)(a1, a3);
  else
    v6 = (*(int (__thiscall **)(int *, _DWORD))*a1)(a1, 0);
  (*(void (__thiscall **)(int, int))(v4 + 64))(v3, v6);
  result = (*(int (__thiscall **)(int *))(*a1 + 148))(a1);
  if ( result )
  {
    result = (*(int (__thiscall **)(int *))(*a1 + 208))(a1);
    if ( !(_BYTE)result )
    {
      v8 = *a1;
      v9 = dword_1047CA70;
      v10 = *(_DWORD *)dword_1047CA70;
      v11 = (*(int (__thiscall **)(int *, int))(*a1 + 148))(a1, a2);
      v12 = (*(int (__thiscall **)(int, int))(v10 + 108))(v9, v11);
      (*(void (__thiscall **)(int *, int))(v8 + 516))(a1, v12);
      v13 = dword_1047CA70;
      v14 = *(_DWORD *)dword_1047CA70;
      v15 = (*(int (__thiscall **)(int *))(*a1 + 148))(a1);
      LOBYTE(v14) = (*(int (__thiscall **)(int, int))(v14 + 128))(v13, v15);
      if ( (_BYTE)v14 != (*(unsigned __int8 (__thiscall **)(int *))(*a1 + 532))(a1) )
      {
        v16 = *a1;
        v17 = dword_1047CA70;
        v18 = *(_DWORD *)dword_1047CA70;
        v19 = (*(int (__thiscall **)(int *))(*a1 + 148))(a1);
        v20 = (*(int (__thiscall **)(int, int))(v18 + 128))(v17, v19);
        (*(void (__thiscall **)(int *, int))(v16 + 524))(a1, v20);
      }
      v21 = dword_1047CA70;
      v22 = *(_DWORD *)dword_1047CA70;
      v23 = (*(int (__thiscall **)(int *))(*a1 + 148))(a1);
      LOBYTE(v22) = (*(int (__thiscall **)(int, int))(v22 + 132))(v21, v23);
      result = (*(int (__thiscall **)(int *))(*a1 + 528))(a1);
      if ( (_BYTE)v22 != (_BYTE)result )
      {
        v24 = *a1;
        v25 = dword_1047CA70;
        v26 = *(_DWORD *)dword_1047CA70;
        v27 = (*(int (__thiscall **)(int *))(*a1 + 148))(a1);
        v28 = (*(int (__thiscall **)(int, int))(v26 + 132))(v25, v27);
        return (*(int (__thiscall **)(int *, int))(v24 + 520))(a1, v28);
      }
    }
  }
  return result;
}
