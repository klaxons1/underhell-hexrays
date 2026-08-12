int __userpurge sub_101F5FD0@<eax>(
        _DWORD *a1@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  int result; // eax
  void (__thiscall ***v10)(_DWORD, int, int); // ecx
  int v11; // edi
  void (__thiscall *v12)(_DWORD *, int); // eax
  int v13; // ebx
  int v14; // eax
  int v15; // [esp+10h] [ebp-4h] BYREF
  int retaddr; // [esp+14h] [ebp+0h] BYREF

  result = a4;
  switch ( a4 )
  {
    case 0:
      result = a1[258];
      goto LABEL_6;
    case 1:
      a1[64] = a1[259];
      break;
    case 2:
      a1[64] = a1[260];
      break;
    case 3:
      result = a1[261];
LABEL_6:
      a1[64] = result;
      break;
    default:
      break;
  }
  v10 = (void (__thiscall ***)(_DWORD, int, int))a1[64];
  if ( v10 )
  {
    (**v10)(v10, a3, a2);
    a1[264] = 0;
    a1[263] = 0;
    sub_102361D0(&v15, &retaddr);
    v11 = v15 / 2;
    if ( (_BYTE)a7 )
    {
      (*(void (__thiscall **)(int, _DWORD *, _DWORD *))(*(_DWORD *)dword_1047CA68 + 28))(
        dword_1047CA68,
        a1 + 65,
        a1 + 66);
      v12 = *(void (__thiscall **)(_DWORD *, int))(*a1 + 232);
      a1[262] = a8;
      v12(a1, 1);
      v13 = dword_1047CA68;
      v14 = (*(int (__thiscall **)(_DWORD *, _DWORD))*a1)(a1, a1[262]);
      (*(void (__thiscall **)(int, int))(a5 + 208))(v13, v14);
      a6 = v11;
      a7 = retaddr / 2;
      sub_10236F10(&a6, &a7);
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA68 + 24))(dword_1047CA68, a6, a7);
    }
    return (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)a1[64] + 20))(a1[64], a8);
  }
  return result;
}
