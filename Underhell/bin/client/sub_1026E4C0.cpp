void __usercall sub_1026E4C0(_DWORD **a1@<ecx>, int a2@<ebx>, int a3@<ebp>, int a4@<edi>, char a5, char a6)
{
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  int v9; // ebx
  int v10; // ebp
  _BYTE v11[4]; // [esp+10h] [ebp-10h] BYREF
  _BYTE v12[4]; // [esp+14h] [ebp-Ch] BYREF
  _BYTE v13[4]; // [esp+18h] [ebp-8h] BYREF
  int v14; // [esp+1Ch] [ebp-4h] BYREF

  sub_1025B8C0((int)a1);
  if ( ((_BYTE)a1[96] & 1) != 0 )
  {
    (*(void (__thiscall **)(_DWORD *, _BYTE *, _BYTE *))(*a1[97] + 8))(a1[97], v11, v12);
    if ( ((unsigned __int8 (__thiscall *)(_DWORD **))(*a1)[51])(a1) )
      v7 = (_DWORD *)((int (__thiscall *)(_DWORD **, _BYTE *))(*a1)[252])(a1, v13);
    else
      v7 = (_DWORD *)((int (__thiscall *)(_DWORD **, int *))(*a1)[201])(a1, &v14);
    (*(void (__thiscall **)(_DWORD *, _DWORD, int, int, int))(*a1[97] + 20))(a1[97], *v7, a4, a3, a2);
    sub_102374C0((int (__thiscall ***)(void *, int *, _BYTE *))a1);
    if ( ((unsigned __int8 (__thiscall *)(_DWORD **))(*a1)[51])(a1) )
      v8 = (_DWORD *)((int (__thiscall *)(_DWORD **, char *))(*a1)[252])(a1, &a6);
    else
      v8 = (_DWORD *)((int (__thiscall *)(_DWORD **, char *))(*a1)[201])(a1, &a5);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 40))(dword_1047CA6C, *v8);
    v9 = dword_1047CA6C;
    v10 = *(_DWORD *)dword_1047CA6C;
    sub_102374F0((int (__thiscall ***)(void *, _BYTE *, int *))a1);
    (*(void (__thiscall **)(int))(v10 + 48))(v9);
  }
}
