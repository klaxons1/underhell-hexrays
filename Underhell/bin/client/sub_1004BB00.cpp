int __thiscall sub_1004BB00(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // edi
  void *v5; // esp
  int i; // ecx
  int v7; // edx
  _DWORD v8[3]; // [esp+0h] [ebp-Ch] BYREF
  int v9; // [esp+14h] [ebp+8h]

  result = (*(int (__thiscall **)(_DWORD *, int))(this[1] + 140))(this + 1, a2);
  v9 = result;
  if ( result > 0 )
  {
    v4 = sub_100EB1D0(this + 491);
    v5 = alloca(4 * v4);
    result = sub_100ED200(v4, v8);
    for ( i = 0; i < result; ++i )
    {
      v7 = v8[i];
      if ( *(_DWORD *)(v7 + 24) == v9 )
        *(_DWORD *)(v7 + 24) = -1;
    }
  }
  return result;
}
