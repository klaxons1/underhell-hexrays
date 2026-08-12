int __thiscall sub_1007F3E0(int this, int a2, int a3)
{
  int v4; // edi
  int v5; // ebx
  int v6; // eax
  _WORD *v7; // eax
  int v8; // ecx
  _WORD *v9; // esi
  int result; // eax
  int *v11; // [esp+Ch] [ebp-4h]
  _WORD *v12; // [esp+18h] [ebp+8h]

  v4 = sub_1007DD70((int *)this, 1);
  v11 = (int *)(this + 36);
  v5 = sub_1007DC70((int *)(this + 36), 1);
  *(_WORD *)(*(_DWORD *)this + 8 * v4) = a3;
  *(_WORD *)(*(_DWORD *)this + 8 * v4 + 2) = v5;
  v6 = 12 * v5;
  *(_DWORD *)(v6 + *v11) = a2;
  *(_WORD *)(v6 + *v11 + 4) = v4;
  v7 = (_WORD *)(*(int (__cdecl **)(int))(this + 76))(a2);
  v8 = (unsigned __int16)*v7;
  v12 = v7;
  if ( (_WORD)v8 != 0xFFFF )
  {
    sub_1007EE20(this, v8, v4);
    v7 = v12;
  }
  *v7 = v4;
  v9 = (_WORD *)(*(int (__cdecl **)(int))(this + 72))(a3);
  result = (unsigned __int16)*v9;
  if ( (_WORD)result != 0xFFFF )
    result = sub_1007EE90(v11, result, v5);
  *v9 = v5;
  return result;
}
