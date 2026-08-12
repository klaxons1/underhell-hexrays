bool __stdcall sub_102208D0(int *a1, int a2)
{
  unsigned int v2; // edi
  bool v3; // zf
  int v4; // eax
  int v5; // esi
  int v7; // [esp+8h] [ebp-4h]

  v7 = dword_10700AC8;
  (*(void (**)(void))(*(_DWORD *)dword_10700AC8 + 100))();
  if ( a1 )
    v2 = *(_DWORD *)(*(int (__thiscall **)(int *))(*a1 + 8))(a1);
  else
    v2 = -1;
  *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 148))(a2) + 1380) = a1;
  (*(void (__thiscall **)(int *, int))(*a1 + 172))(a1, a2);
  *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 148))(a2) + 1380) = 0;
  v3 = ((*(int (__thiscall **)(int *))(*a1 + 144))(a1) & 1) == 0;
  v4 = *a1;
  if ( v3 )
    (*(void (__fastcall **)(int *))(v4 + 100))(a1);
  else
    (*(void (__fastcall **)(int *))(v4 + 96))(a1);
  if ( v2 == -1 || off_1061BE18[4 * (v2 & 0xFFF) + 2] != v2 >> 12 )
    v5 = 0;
  else
    v5 = off_1061BE18[4 * (v2 & 0xFFF) + 1];
  (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 104))(v7);
  return v5 != 0;
}
