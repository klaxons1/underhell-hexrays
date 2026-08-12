void __thiscall sub_10261250(_DWORD *this, int a2, char a3)
{
  _DWORD *v4; // eax
  _DWORD *v5; // ebx
  int (__thiscall **v6)(void *, _DWORD); // edx
  int v7; // edi
  int v8; // ebp
  int v9; // eax
  int v10; // eax

  if ( *((_BYTE *)this + 208) )
  {
    (*(void (__thiscall **)(int, int *, char *))(*(_DWORD *)dword_1047CA68 + 28))(dword_1047CA68, &a2, &a3);
    v4 = (_DWORD *)sub_10229D00(32);
    if ( v4 )
      v5 = sub_10229D20(v4, (int)"ColumnResized");
    else
      v5 = 0;
    sub_1022ACA0(v5, "column", this[51]);
    sub_1022ACA0(v5, "delta", a2 - this[53]);
    v6 = (int (__thiscall **)(void *, _DWORD))*this;
    this[53] = a2;
    if ( ((int (__thiscall *)(_DWORD *))v6[37])(this) )
    {
      v7 = dword_1047CA74;
      v8 = *(_DWORD *)dword_1047CA74;
      v9 = (*(int (__thiscall **)(_DWORD *, _DWORD))*this)(this, 0.0);
      v10 = (*(int (__thiscall **)(_DWORD *, _DWORD *, int))(*this + 148))(this, v5, v9);
      (*(void (__thiscall **)(int, int))(v8 + 80))(v7, v10);
    }
  }
}
