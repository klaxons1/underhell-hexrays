int __thiscall sub_10188A70(_DWORD **this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int result; // eax
  int *v7; // ebx
  int v8; // edi
  _DWORD *v9; // eax
  int *v10; // ebx
  int v11; // edi
  _DWORD *v12; // eax
  int *v13; // edi
  int v14; // esi
  _DWORD *v15; // eax

  sub_1024E7E0((int)this, a2);
  v3 = (*(int (__thiscall **)(_DWORD *))(*this[113] + 1120))(this[113]);
  sub_10236050(v3);
  v4 = (*(int (__thiscall **)(_DWORD *))(*this[112] + 1120))(this[112]);
  sub_10236050(v4);
  v5 = (*(int (__thiscall **)(_DWORD *))(*this[111] + 1120))(this[111]);
  result = sub_10236050(v5);
  if ( dword_10445708 )
  {
    v7 = (int *)(*(int (__thiscall **)(_DWORD *))(*this[113] + 1120))(this[113]);
    v8 = *v7;
    v9 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)dword_10445708 + 876))(dword_10445708, &a2);
    (*(void (__thiscall **)(int *, _DWORD))(v8 + 216))(v7, *v9);
    v10 = (int *)(*(int (__thiscall **)(_DWORD *))(*this[112] + 1120))(this[112]);
    v11 = *v10;
    v12 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)dword_10445708 + 876))(dword_10445708, &a2);
    (*(void (__thiscall **)(int *, _DWORD))(v11 + 216))(v10, *v12);
    v13 = (int *)(*(int (__thiscall **)(_DWORD *))(*this[111] + 1120))(this[111]);
    v14 = *v13;
    v15 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)dword_10445708 + 876))(dword_10445708, &a2);
    return (*(int (__thiscall **)(int *, _DWORD))(v14 + 216))(v13, *v15);
  }
  return result;
}
