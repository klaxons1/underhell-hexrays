char __thiscall sub_1005F960(_DWORD **this, int a2, int a3, int a4)
{
  _DWORD *v6; // eax
  _DWORD *v7; // ebx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // [esp+4h] [ebp-4h]

  if ( !this[46] )
    return 0;
  if ( !this[485] && ((int (__thiscall *)(_DWORD **))this[1][9])(this + 1) )
    sub_10026520((int)this);
  v6 = this[485];
  if ( !v6 || !*v6 )
    return 0;
  v7 = this[46];
  v11 = *(_DWORD *)dword_10436250;
  v8 = ((int (__thiscall *)(_DWORD **, int))(*this)[10])(this, a4);
  v9 = ((int (__thiscall *)(_DWORD **, int))(*this)[9])(this, v8);
  v10 = (*(int (__thiscall **)(_DWORD *, int))(*v7 + 292))(v7, v9);
  (*(void (__thiscall **)(int, int, int))(v11 + 128))(dword_10436250, a2, v10);
  if ( *(float *)(a4 + 44) >= 1.0 && !*(_BYTE *)(a4 + 54) && !*(_BYTE *)(a4 + 55) )
    return 0;
  *(_WORD *)(a4 + 64) = (*(int (__thiscall **)(_DWORD *))(*this[46] + 152))(this[46]);
  return 1;
}
