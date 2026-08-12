int __thiscall sub_101679C0(int *this, int a2)
{
  int result; // eax
  _DWORD *v4; // esi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // [esp+8h] [ebp-4h]

  result = sub_1007A6A0(off_103DCD78, this[6]);
  v4 = (_DWORD *)result;
  if ( !result )
    return DevMsg(1, "Decal: entity = %i", this[6]);
  if ( *(_DWORD *)(dword_1042D3B4 + 48) )
  {
    v8 = *(_DWORD *)dword_10413164;
    v5 = (*(int (__thiscall **)(int, int *, _DWORD, int))(*(_DWORD *)result + 40))(result, this + 3, 0, 1);
    v6 = (*(int (__thiscall **)(_DWORD *, int))(*v4 + 36))(v4, v5);
    v7 = (*(int (__thiscall **)(_DWORD *, int))(v4[1] + 36))(v4 + 1, v6);
    return (*(int (__thiscall **)(int, int, int, int))(v8 + 4))(dword_10413164, this[7], this[6], v7);
  }
  return result;
}
