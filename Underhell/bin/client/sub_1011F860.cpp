int __thiscall sub_1011F860(_DWORD *this, float a2, int a3, float a4)
{
  int *v5; // eax
  int v6; // ecx
  int v7; // ebx
  void (__thiscall *v8)(_DWORD *, _DWORD); // eax
  int v9; // eax
  int v10; // edi
  int v11; // ebx
  int v12; // eax
  int v13; // edi
  char v14; // al
  unsigned __int8 (__thiscall *v15)(_DWORD *); // eax
  char v16; // al
  _DWORD *v17; // ecx
  void (__thiscall ***v18)(_DWORD); // eax
  void (__thiscall ***v19)(_DWORD); // edi
  int v21; // [esp+24h] [ebp-4h]
  int v22; // [esp+30h] [ebp+8h]
  int v23; // [esp+34h] [ebp+Ch]

  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 136))(dword_1041315C);
  v5 = (int *)off_103E524C[4];
  v6 = *v5;
  *v5 = a3;
  v7 = this[33];
  v21 = v6;
  v8 = *(void (__thiscall **)(_DWORD *, _DWORD))(*this + 44);
  this[33] = v7 | *(_DWORD *)(this[32] + 444);
  v23 = v7;
  v8(this, LODWORD(a2));
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  v10 = v9;
  if ( v9 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9);
  v22 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v10 + 76))(v10, 0);
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 188))(dword_1041315C) >= 80 )
  {
    v11 = *(_DWORD *)v10;
    v12 = sub_10116510();
    (*(void (__thiscall **)(int, int, _DWORD))(v11 + 72))(v10, v12, 0);
    v7 = v23;
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 12))(v10);
  (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 4))(v10);
  if ( (dword_1043775C & 1) == 0 )
  {
    dword_1043775C |= 1u;
    sub_10229600("r_drawtranslucentworld");
  }
  v13 = *(_DWORD *)(dword_10437758 + 48);
  v14 = (*(int (__thiscall **)(_DWORD *))(*this + 32))(this);
  (**(void (__thiscall ***)(int, bool))dword_10437754)(dword_10437754, v14 == 0);
  v15 = *(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 32);
  if ( (this[33] & 0x2000) != 0 )
  {
    if ( v15(this) )
      sub_101438D0(a4);
    sub_1011ED20(this, (int)this, 0);
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 36))(this)
      && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 40))(this) )
    {
      sub_10146330(0, 0);
      goto LABEL_19;
    }
    v16 = (*(int (__thiscall **)(_DWORD *))(*this + 36))(this);
    v17 = this;
    if ( v16 )
    {
      sub_10146240(0);
      goto LABEL_19;
    }
  }
  else
  {
    if ( !v15(this) )
      goto LABEL_19;
    sub_101438D0(a4);
    v17 = this;
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 40))(v17) )
    sub_10142590(0);
LABEL_19:
  (**(void (__thiscall ***)(int, int))dword_10437754)(dword_10437754, v13);
  if ( sub_10142330() && sub_10142330() != 6 )
    sub_1005B2D0();
  v18 = (void (__thiscall ***)(_DWORD))(*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  v19 = v18;
  if ( v18 )
    (**v18)(v18);
  (*v19)[2](v19);
  ((void (__thiscall *)(void (__thiscall ***)(_DWORD), int, _DWORD))(*v19)[18])(v19, v22, 0);
  (*(void (__thiscall **)(_DWORD *))(*this + 48))(this);
  this[33] = v7;
  *(_DWORD *)off_103E524C[4] = v21;
  (*v19)[3](v19);
  return ((int (__thiscall *)(_DWORD))(*v19)[1])(v19);
}
