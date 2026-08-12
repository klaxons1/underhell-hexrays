_WORD *__thiscall sub_1007F490(int this, int a2)
{
  int v3; // eax
  int v4; // edx
  int v5; // eax
  int v6; // edi
  int v7; // ecx
  int v8; // edi
  _WORD *result; // eax
  int v10; // [esp-Ch] [ebp-20h]
  int v11; // [esp+4h] [ebp-10h]
  __int16 v12; // [esp+8h] [ebp-Ch]
  int v13; // [esp+Ch] [ebp-8h]
  int v14; // [esp+10h] [ebp-4h]

  v3 = *(unsigned __int16 *)(*(int (__cdecl **)(int))(this + 72))(a2);
  v14 = v3;
  if ( v3 != 0xFFFF )
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)(this + 36);
      v5 = 12 * v3;
      v6 = *(unsigned __int16 *)(v5 + v4 + 4);
      v11 = v5;
      v13 = *(_DWORD *)(v5 + v4);
      if ( v6 == *(unsigned __int16 *)(*(int (__cdecl **)(int))(this + 76))(v13) )
      {
        v12 = *(_WORD *)(*(_DWORD *)this + 8 * v6 + 6);
        *(_WORD *)(*(int (__cdecl **)(int))(this + 76))(v13) = v12;
      }
      sub_1007E410((int *)this, v6);
      *(_WORD *)(*(_DWORD *)this + 8 * v6 + 6) = *(_WORD *)(this + 20);
      v7 = *(_DWORD *)(this + 36);
      *(_DWORD *)(this + 20) = v6;
      v8 = v14;
      v10 = v14;
      v14 = *(unsigned __int16 *)(v11 + v7 + 10);
      sub_1007E4C0((_DWORD *)(this + 36), v10);
      *(_WORD *)(*(_DWORD *)(this + 36) + 12 * v8 + 10) = *(_WORD *)(this + 56);
      *(_DWORD *)(this + 56) = v8;
      if ( v14 == 0xFFFF )
        break;
      v3 = v14;
    }
  }
  result = (_WORD *)(*(int (__cdecl **)(int))(this + 72))(a2);
  *result = -1;
  return result;
}
