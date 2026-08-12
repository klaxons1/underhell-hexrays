int __thiscall sub_1014B480(int *this, float a2, int a3, float a4)
{
  int *v5; // edx
  int v6; // eax
  int v7; // ebx
  int v8; // edx
  int v9; // eax
  int v10; // edi
  int v11; // eax
  void (__thiscall ***v12)(_DWORD); // eax
  void (__thiscall ***v13)(_DWORD); // edi
  int v15; // [esp+2Ch] [ebp-4h]
  int v16; // [esp+38h] [ebp+8h]
  void (__thiscall **v17)(int, int, _DWORD); // [esp+3Ch] [ebp+Ch]

  if ( this )
    v5 = this + 2;
  else
    v5 = 0;
  (*(void (__thiscall **)(void *, int *, _DWORD, _DWORD))(*(_DWORD *)off_103DD080 + 104))(
    off_103DD080,
    v5,
    *(_DWORD *)(this[37] + 12),
    *(_DWORD *)(this[37] + 16));
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 136))(dword_1041315C);
  v6 = dword_103E7E94;
  dword_103E7E94 = a3;
  v7 = this[33];
  v15 = v6;
  v8 = *this;
  this[33] = v7 | *(_DWORD *)(this[32] + 444);
  (*(void (__thiscall **)(int *, _DWORD))(v8 + 20))(this, LODWORD(a2));
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  v10 = v9;
  if ( v9 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9);
  v16 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v10 + 76))(v10, 0);
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 188))(dword_1041315C) >= 80 )
  {
    v17 = (void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v10 + 72);
    v11 = sub_10116510();
    (*v17)(v10, v11, 0);
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 12))(v10);
  (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 4))(v10);
  if ( (this[33] & 0x2000) != 0 )
  {
    sub_101438D0(this, a4);
    sub_1014AA40((int)this, v10, 0);
    sub_10146330((int)this, v7, 0, 0);
  }
  else
  {
    sub_101438D0(this, a4);
    sub_10142590(this, 0);
  }
  if ( dword_103E7E94 && dword_103E7E94 != 6 )
    sub_1005B2D0();
  v12 = (void (__thiscall ***)(_DWORD))(*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  v13 = v12;
  if ( v12 )
    (**v12)(v12);
  (*v13)[2](v13);
  ((void (__thiscall *)(void (__thiscall ***)(_DWORD), int, _DWORD))(*v13)[18])(v13, v16, 0);
  (*(void (__thiscall **)(int *))(*this + 24))(this);
  this[33] = v7;
  dword_103E7E94 = v15;
  (*v13)[3](v13);
  return ((int (__thiscall *)(_DWORD))(*v13)[1])(v13);
}
