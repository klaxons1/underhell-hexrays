_WORD *__thiscall sub_1007F790(int this, int a2)
{
  int i; // ebx
  int v4; // edi
  int v5; // edi
  _WORD *result; // eax
  __int16 v7; // [esp+8h] [ebp-8h]
  int v8; // [esp+Ch] [ebp-4h]

  for ( i = *(unsigned __int16 *)(*(int (__cdecl **)(int))(this + 76))(a2); i != 0xFFFF; *(_DWORD *)(this + 20) = v5 )
  {
    v4 = *(unsigned __int16 *)(*(_DWORD *)this + 8 * i + 2);
    v8 = *(unsigned __int16 *)(*(_DWORD *)this + 8 * i);
    if ( v4 == *(unsigned __int16 *)(*(int (__cdecl **)(int))(this + 72))(v8) )
    {
      v7 = *(_WORD *)(*(_DWORD *)(this + 36) + 8 * v4 + 6);
      *(_WORD *)(*(int (__cdecl **)(int))(this + 72))(v8) = v7;
    }
    sub_1007E410((int *)(this + 36), v4);
    *(_WORD *)(*(_DWORD *)(this + 36) + 8 * v4 + 6) = *(_WORD *)(this + 56);
    *(_DWORD *)(this + 56) = v4;
    v5 = i;
    i = *(unsigned __int16 *)(*(_DWORD *)this + 8 * i + 6);
    sub_1007E410((int *)this, v5);
    *(_WORD *)(*(_DWORD *)this + 8 * v5 + 6) = *(_WORD *)(this + 20);
  }
  result = (_WORD *)(*(int (__cdecl **)(int))(this + 76))(a2);
  *result = -1;
  return result;
}
