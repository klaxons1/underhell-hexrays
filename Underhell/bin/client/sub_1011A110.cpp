bool __stdcall sub_1011A110(int a1, int a2)
{
  unsigned int v2; // ebx
  int v3; // esi
  int v5; // [esp+Ch] [ebp-4h]

  v5 = dword_1047CA8C;
  (*(void (**)(void))(*(_DWORD *)dword_1047CA8C + 100))();
  if ( a1 )
    v2 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1);
  else
    v2 = -1;
  *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 148))(a2) + 1380) = a1;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 224))(a1, a2);
  *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 148))(a2) + 1380) = 0;
  if ( v2 == -1 || *((_DWORD *)off_103DCD74 + 4 * (v2 & 0xFFF) + 2) != v2 >> 12 )
    v3 = 0;
  else
    v3 = *((_DWORD *)off_103DCD74 + 4 * (v2 & 0xFFF) + 1);
  (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 104))(v5);
  return v3 != 0;
}
