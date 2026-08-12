int __userpurge sub_1027DD20@<eax>(_DWORD **a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4, int a5)
{
  _DWORD *v6; // ecx
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  int v9; // eax
  int (__thiscall ***v10)(void *, int *, _BYTE *); // ecx
  int v11; // eax
  int v12; // eax
  _DWORD *v13; // ecx
  int v14; // eax
  int (__thiscall ***v15)(void *, int *, _BYTE *); // ecx
  int v16; // edi
  int result; // eax
  int v18; // [esp+18h] [ebp-1Ch]
  int v19; // [esp+1Ch] [ebp-18h]
  int v20; // [esp+2Ch] [ebp-8h] BYREF
  int v21; // [esp+30h] [ebp-4h] BYREF
  void *retaddr; // [esp+34h] [ebp+0h]

  if ( !*((_BYTE *)a1 + 265) )
    goto LABEL_22;
  (*(void (__thiscall **)(_DWORD *, int *, int *))(*a1[53] + 24))(a1[53], &v20, &v21);
  if ( v20 < 0 || v21 < 0 )
  {
    a1[64] = 0;
    a1[65] = 0;
LABEL_22:
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1[57] + 124))(a1[57], 0);
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1[56] + 124))(a1[56], 0);
    return ((int (__thiscall *)(_DWORD **))(*a1)[201])(a1);
  }
  v6 = a1[57];
  if ( v21 <= a5 )
  {
    a1[64] = 0;
    (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v6 + 124))(v6, 0, a3);
    ((void (__thiscall *)(_DWORD **))(*a1)[201])(a1);
  }
  else
  {
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, int))(*v6 + 128))(v6, a3, a2) )
    {
      (*(void (__thiscall **)(_DWORD *, int))(*a1[57] + 124))(a1[57], 1);
      v7 = (_DWORD *)sub_10229D00(32);
      if ( v7 )
        v8 = sub_10229D20(v7, (int)"ScrollBarSliderMoved");
      else
        v8 = 0;
      ((void (__thiscall *)(_DWORD **, _DWORD **, _DWORD *, _DWORD))(*a1)[33])(a1, a1, v8, 0.02);
    }
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1[57] + 200))(a1[57], 0);
    (*(void (__thiscall **)(_DWORD *, int))(*a1[57] + 784))(a1[57], a5 / 2 - 5);
    (*(void (__thiscall **)(_DWORD *, _DWORD, void *))(*a1[57] + 776))(a1[57], 0, retaddr);
    (*(void (__thiscall **)(_DWORD *, int))(*a1[57] + 816))(a1[57], 5);
    v9 = sub_102374C0((int (__thiscall ***)(void *, int *, _BYTE *))a1[57]);
    sub_10236140((int (__thiscall ***)(void *, int, int))a1[57], a4 - v9 - 1, 1);
    v10 = (int (__thiscall ***)(void *, int *, _BYTE *))a1[57];
    if ( v21 <= a4 )
    {
      v19 = a5 - 2;
    }
    else
    {
      v11 = sub_102374C0(v10);
      v10 = (int (__thiscall ***)(void *, int *, _BYTE *))a1[57];
      v19 = a5 - v11 - 2;
    }
    v12 = sub_102374C0(v10);
    sub_102361A0((int (__thiscall ***)(void *, int, int))a1[57], v12, v19);
    a1[64] = (_DWORD *)(sub_102374C0((int (__thiscall ***)(void *, int *, _BYTE *))a1[57]) + 1);
  }
  v13 = a1[56];
  if ( v21 <= a4 )
  {
    a1[65] = 0;
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*v13 + 124))(v13, 0);
    return ((int (__thiscall *)(_DWORD **))(*a1)[201])(a1);
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *, int))(*v13 + 124))(v13, 1);
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1[56] + 200))(a1[56], 0);
    (*(void (__thiscall **)(_DWORD *, int))(*a1[56] + 784))(a1[56], a4 / 2 - 5);
    (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*a1[56] + 776))(a1[56], 0, v20);
    (*(void (__thiscall **)(_DWORD *, int))(*a1[56] + 816))(a1[56], 5);
    v14 = sub_102374C0((int (__thiscall ***)(void *, int *, _BYTE *))a1[57]);
    sub_10236140((int (__thiscall ***)(void *, int, int))a1[56], 1, a5 - v14 - 1);
    v15 = (int (__thiscall ***)(void *, int *, _BYTE *))a1[57];
    if ( v21 <= a5 )
    {
      v18 = sub_102374C0(v15);
      v16 = a4 - 1;
    }
    else
    {
      v18 = sub_102374C0(v15);
      v16 = a4 - sub_102374C0((int (__thiscall ***)(void *, int *, _BYTE *))a1[57]) - 1;
    }
    sub_102361A0((int (__thiscall ***)(void *, int, int))a1[56], v16, v18);
    result = sub_102374C0((int (__thiscall ***)(void *, int *, _BYTE *))a1[57]) + 2;
    a1[65] = (_DWORD *)result;
  }
  return result;
}
