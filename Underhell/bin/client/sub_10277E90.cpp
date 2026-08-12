int __userpurge sub_10277E90@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<ebp>, _DWORD *a4, _DWORD *a5)
{
  int v6; // eax
  _DWORD *v7; // esi
  int v8; // eax
  _DWORD *v9; // ebp
  _DWORD *v10; // ebx
  _DWORD *v11; // eax
  double v12; // st7
  _DWORD *v14; // edi
  int v15; // eax
  float v16; // [esp+Ch] [ebp-14h]
  _DWORD *v17; // [esp+10h] [ebp-10h]
  _UNKNOWN *retaddr; // [esp+20h] [ebp+0h] BYREF

  v6 = sub_100DDA40(280);
  if ( v6 )
    v7 = (_DWORD *)sub_10277520(v6, *(int (__thiscall ****)(_DWORD))(a1 + 296), a1);
  else
    v7 = 0;
  (*(void (__thiscall **)(_DWORD *, bool, int))(*v7 + 552))(v7, (*(_BYTE *)(a1 + 208) & 2) != 0, a3);
  v8 = sub_10269ED0((_DWORD *)(a1 + 212), &retaddr);
  v9 = a5;
  v17 = a5;
  v7[52] = v8;
  sub_10273490(v7, v17);
  if ( *(_DWORD *)(a1 + 272) )
    sub_10273B90((_DWORD **)v7, *(_DWORD *)(a1 + 272));
  v10 = (_DWORD *)*v7;
  v11 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD **, int))(*(_DWORD *)a1 + 224))(a1, &a5, a2);
  ((void (__thiscall *)(_DWORD *, _DWORD))v10[54])(v7, *v11);
  if ( sub_1022A800(v9, "droppable", 0) )
  {
    v12 = sub_1022A940(v9, "drophoverdelay", 0.0);
    if ( 0.0 == v12 )
      v12 = 0.0;
    v16 = v12;
    (*(void (__stdcall **)(int, _DWORD))(*v7 + 580))(1, LODWORD(v16));
  }
  if ( a5 == (_DWORD *)-1 )
  {
    *(_DWORD *)(a1 + 264) = v7;
    v7[53] = -1;
  }
  else
  {
    v7[53] = a5;
    a4 = v7;
    v14 = (_DWORD *)sub_10273C00(v7);
    v15 = sub_10273C50(v14, (int)v7);
    sub_10258C50(v14 + 55, v15 + 1, &a4);
  }
  sub_10236050((int (__thiscall ***)(void *, int))v7);
  return v7[52];
}
