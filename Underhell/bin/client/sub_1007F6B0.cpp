_WORD *__thiscall sub_1007F6B0(int this, int a2)
{
  int v3; // eax
  int v4; // edx
  int v5; // edi
  int v6; // ecx
  int v7; // edi
  _WORD *result; // eax
  int v9; // [esp-Ch] [ebp-1Ch]
  __int16 v10; // [esp+4h] [ebp-Ch]
  int v11; // [esp+8h] [ebp-8h]
  int v12; // [esp+Ch] [ebp-4h]

  v3 = *(unsigned __int16 *)(*(int (__cdecl **)(int))(this + 72))(a2);
  v12 = v3;
  if ( v3 != 0xFFFF )
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)(this + 36);
      v5 = *(unsigned __int16 *)(v4 + 8 * v3 + 2);
      v11 = *(unsigned __int16 *)(v4 + 8 * v3);
      if ( v5 == *(unsigned __int16 *)(*(int (__cdecl **)(int))(this + 76))(v11) )
      {
        v10 = *(_WORD *)(*(_DWORD *)this + 8 * v5 + 6);
        *(_WORD *)(*(int (__cdecl **)(int))(this + 76))(v11) = v10;
      }
      sub_1007E410((int *)this, v5);
      *(_WORD *)(*(_DWORD *)this + 8 * v5 + 6) = *(_WORD *)(this + 20);
      v6 = *(_DWORD *)(this + 36);
      *(_DWORD *)(this + 20) = v5;
      v7 = v12;
      v9 = v12;
      v12 = *(unsigned __int16 *)(v6 + 8 * v12 + 6);
      sub_1007E410((int *)(this + 36), v9);
      *(_WORD *)(*(_DWORD *)(this + 36) + 8 * v7 + 6) = *(_WORD *)(this + 56);
      *(_DWORD *)(this + 56) = v7;
      if ( v12 == 0xFFFF )
        break;
      v3 = v12;
    }
  }
  result = (_WORD *)(*(int (__cdecl **)(int))(this + 72))(a2);
  *result = -1;
  return result;
}
