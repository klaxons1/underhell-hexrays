_DWORD *__thiscall sub_1024E370(int this, _DWORD *a2, int *a3, int a4, _DWORD *a5)
{
  _DWORD *v6; // edi
  int v7; // edi
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  _DWORD *result; // eax

  v6 = (_DWORD *)a4;
  *a2 = *(_DWORD *)(this + 372);
  sub_102361D0((int (__thiscall ***)(void *, int, int))this, a4, (int)a5);
  if ( *(_BYTE *)(this + 357) )
  {
    v7 = dword_1047CA6C;
    v8 = *(_DWORD *)dword_1047CA6C;
    v9 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 288) + 132))(*(_DWORD *)(this + 288));
    v10 = (*(int (__thiscall **)(int, int))(v8 + 268))(v7, v9);
    if ( *(_BYTE *)(this + 393) )
      v11 = 0;
    else
      v11 = *(_DWORD *)(this + 376);
    v12 = *(_DWORD *)(this + 424) + v11;
    v6 = (_DWORD *)a4;
    v13 = v12 + (*(_BYTE *)(this + 393) != 0 ? 0 : 7) + v10 + 1;
    *a3 = v13;
    *a5 -= v12 + v13;
  }
  if ( *(_BYTE *)(this + 393) )
    *a5 -= 5;
  result = a2;
  *v6 -= *(_DWORD *)(this + 372) + *a2;
  return result;
}
