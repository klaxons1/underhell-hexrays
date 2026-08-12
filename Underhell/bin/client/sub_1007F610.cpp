int __thiscall sub_1007F610(int this, int a2, int a3)
{
  int v4; // edi
  int v5; // ebx
  _WORD *v6; // eax
  int v7; // ecx
  _WORD *v8; // esi
  int result; // eax
  _DWORD *v10; // [esp+Ch] [ebp-4h]
  _WORD *v11; // [esp+18h] [ebp+8h]

  v4 = sub_1007DD70((int *)this, 1);
  v10 = (_DWORD *)(this + 36);
  v5 = sub_1007DD70((int *)(this + 36), 1);
  *(_WORD *)(*(_DWORD *)this + 8 * v4) = a3;
  *(_WORD *)(*(_DWORD *)this + 8 * v4 + 2) = v5;
  *(_WORD *)(*v10 + 8 * v5) = a2;
  *(_WORD *)(*v10 + 8 * v5 + 2) = v4;
  v6 = (_WORD *)(*(int (__cdecl **)(int))(this + 76))(a2);
  v7 = (unsigned __int16)*v6;
  v11 = v6;
  if ( (_WORD)v7 != 0xFFFF )
  {
    sub_1007EE20(this, v7, v4);
    v6 = v11;
  }
  *v6 = v4;
  v8 = (_WORD *)(*(int (__cdecl **)(int))(this + 72))(a3);
  result = (unsigned __int16)*v8;
  if ( (_WORD)result != 0xFFFF )
    result = sub_1007EE20((int)v10, result, v5);
  *v8 = v5;
  return result;
}
