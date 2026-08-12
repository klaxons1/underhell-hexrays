int __thiscall sub_10181A80(_DWORD *this)
{
  int result; // eax
  int v3; // edi
  int v4; // esi
  int i; // [esp+8h] [ebp-4h]

  result = this[9];
  v3 = 0;
  for ( i = result; v3 < i; ++v3 )
  {
    v4 = *(_DWORD *)(this[6] + 4 * v3);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 36))(v4);
    if ( (_BYTE)result )
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 16))(v4);
  }
  return result;
}
