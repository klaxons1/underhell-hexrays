int __thiscall sub_100BA960(int this, int a2)
{
  _DWORD **v3; // edi
  void (__stdcall *v4)(const wchar_t *); // eax
  int v5; // ecx
  int v6; // ecx
  int v8; // [esp+28h] [ebp-Ch] BYREF
  int v9; // [esp+2Ch] [ebp-8h] BYREF
  int v10; // [esp+30h] [ebp-4h] BYREF

  *(_DWORD *)(this + 332) = a2;
  (*(void (__thiscall **)(_DWORD, void *))(**(_DWORD **)(*(_DWORD *)(this + 308) + 208) + 772))(
    *(_DWORD *)(*(_DWORD *)(this + 308) + 208),
    &unk_10302674);
  v3 = *(_DWORD ***)(this + 308);
  v4 = *(void (__stdcall **)(const wchar_t *))(*v3[51] + 768);
  if ( *(_DWORD *)(this + 332) == 1 )
    v4(L"Say :");
  else
    v4(L"Say (TEAM) :");
  ((void (__thiscall *)(_DWORD **, _DWORD, _DWORD))(*v3)[61])(v3, 0, 0);
  v5 = *(_DWORD *)(this + 320);
  if ( v5 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 520))(v5, 1);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 320) + 524))(*(_DWORD *)(this + 320), 0);
    sub_1025A5B0(1);
    sub_10258220(1, 0, -1.0);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 320) + 260))(*(_DWORD *)(this + 320), 1);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 320) + 124))(*(_DWORD *)(this + 320), 1);
  }
  sub_10236050(this + 44, 0);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 44) + 524))(this + 44, 1);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 44) + 520))(this + 44, 1);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 308) + 124))(*(_DWORD *)(this + 308), 1);
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA6C + 360))(dword_1047CA6C);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 308) + 48))(*(_DWORD *)(this + 308), 0);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 308) + 260))(*(_DWORD *)(this + 308), 1);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 308) + 520))(*(_DWORD *)(this + 308), 1);
  sub_10236250(&v8, &v10, &v9, &a2);
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA68 + 24))(dword_1047CA68, v8 + v9 / 2, v10 + a2 / 2);
  v6 = *(_DWORD *)(this + 328);
  *(float *)(this + 300) = *((float *)off_103DC81C + 3) + 0.25;
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 124))(v6, 0);
  return (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_1041315C + 396))(
           dword_1041315C,
           "gameui_preventescapetoshow\n");
}
