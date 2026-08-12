int __thiscall sub_100ED810(_DWORD *this, int a2)
{
  int v3; // ebx
  int result; // eax
  int v5; // esi
  int v6; // ecx
  int i; // [esp+Ch] [ebp-4h]

  v3 = this[401];
  result = 0;
  v5 = 0;
  for ( i = 0; v5 < v3; ++v5 )
  {
    v6 = *(_DWORD *)(this[398] + 4 * v5);
    if ( v6 )
    {
      if ( v6 == a2 )
        return result;
      i += sub_1041CB50();
      result = i;
    }
  }
  return result;
}
