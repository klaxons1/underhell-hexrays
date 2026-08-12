char __thiscall sub_101F5C50(_DWORD *this, _DWORD *a2, int *a3)
{
  int v4; // edi
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  int v8; // edi
  int v9; // ebx
  int v11; // ecx
  int v12; // eax
  int v13; // [esp+14h] [ebp-10h] BYREF
  int v14; // [esp+18h] [ebp-Ch] BYREF
  int v15; // [esp+1Ch] [ebp-8h] BYREF
  int v16; // [esp+20h] [ebp-4h] BYREF

  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 244))(dword_1047CA68);
  if ( v4 != (*(int (__thiscall **)(_DWORD *))*this)(this) )
  {
    (*(void (__thiscall **)(int, _DWORD *, _DWORD *))(*(_DWORD *)dword_1047CA68 + 28))(
      dword_1047CA68,
      this + 65,
      this + 66);
    (*(void (__thiscall **)(_DWORD *, int))(*this + 232))(this, 1);
    v5 = dword_1047CA68;
    v6 = *(_DWORD *)dword_1047CA68;
    v7 = (*(int (__thiscall **)(_DWORD *, _DWORD))*this)(this, this[262]);
    (*(void (__thiscall **)(int, int))(v6 + 208))(v5, v7);
  }
  sub_102361D0(&v15, &v16);
  v8 = v15 / 2;
  v9 = v16 / 2;
  if ( *a2 == v15 / 2 && *a3 == v9 )
    return 0;
  v14 = v15 / 2;
  v13 = v16 / 2;
  sub_10236F10(&v14, &v13);
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA68 + 24))(dword_1047CA68, v14, v13);
  v11 = *a3;
  v12 = *a2 - v8;
  *a2 += this[263];
  *a3 += this[264];
  this[263] += v12;
  this[264] += v11 - v9;
  return 1;
}
