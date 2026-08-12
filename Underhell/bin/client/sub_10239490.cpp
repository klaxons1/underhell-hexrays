int __thiscall sub_10239490(int this, int a2, int a3)
{
  int v3; // ebx
  int v5; // ebp
  int (__thiscall **v6)(int, int); // edi
  int v7; // eax
  int v8; // ebx
  int (__thiscall **v9)(int, int); // edi
  int v10; // eax
  int v11; // edi
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  int v14; // ebx
  int (__thiscall **v15)(int, int); // edi
  int v16; // eax
  int v17; // ebx
  void (__thiscall **v18)(int, int); // edi
  int v19; // eax
  int v20; // ebx
  void (__thiscall **v21)(int, int); // edi
  int v22; // eax
  int v24; // [esp+44h] [ebp-18h] BYREF
  int v25; // [esp+48h] [ebp-14h] BYREF
  int v26; // [esp+4Ch] [ebp-10h] BYREF
  int v27; // [esp+50h] [ebp-Ch] BYREF
  int v28; // [esp+54h] [ebp-8h] BYREF
  int v29; // [esp+58h] [ebp-4h] BYREF

  v3 = dword_1047CA70;
  v5 = 0;
  v6 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 68);
  v7 = (**(int (__thiscall ***)(int))this)(this);
  if ( (*v6)(v3, v7) > 0 )
  {
    do
    {
      v8 = dword_1047CA70;
      v9 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 72);
      v10 = (**(int (__thiscall ***)(int, int))this)(this, v5);
      v11 = (*v9)(v8, v10);
      v12 = (_DWORD *)sub_10229D00(32);
      if ( v12 )
        v13 = sub_1022B270(v12, (int)"OnScreenSizeChanged", "oldwide", a2, "oldtall", a3);
      else
        v13 = 0;
      (*(void (__thiscall **)(int, int, _DWORD *, _DWORD))(*(_DWORD *)this + 136))(this, v11, v13, 0.0);
      v14 = dword_1047CA70;
      ++v5;
      v15 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 68);
      v16 = (**(int (__thiscall ***)(int))this)(this);
    }
    while ( v5 < (*v15)(v14, v16) );
  }
  v17 = dword_1047CA70;
  v18 = (void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 12);
  v19 = (**(int (__thiscall ***)(int, int *, int *))this)(this, &v26, &v27);
  (*v18)(v17, v19);
  v20 = dword_1047CA70;
  v21 = (void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 20);
  v22 = (**(int (__thiscall ***)(int, int *, int *))this)(this, &v25, &v24);
  (*v21)(v20, v22);
  (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA6C + 148))(dword_1047CA6C, &v29, &v28);
  if ( !v26 && !v27 && a2 == v25 && v24 == a3 )
  {
    (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA6C + 148))(dword_1047CA6C, &v25, &v24);
    sub_10236200((int (__thiscall ***)(void *, int, int))this, 0, 0, v25, v24);
  }
  *(_WORD *)(this + 80) |= 0x100u;
  return (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)this + 244))(this, 0, 0);
}
