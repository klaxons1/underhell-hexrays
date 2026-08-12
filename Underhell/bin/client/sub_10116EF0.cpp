int __thiscall sub_10116EF0(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int v5; // ebx
  int v6; // esi
  int v7; // eax
  int i; // [esp+Ch] [ebp-4h]

  result = (int)(*(float *)(this[7] + 1320) / *((float *)off_103DC81C + 7) + 0.5);
  v5 = a3;
  v6 = 0;
  for ( i = result; v6 < v5; ++v6 )
  {
    v7 = *(_DWORD *)(a2 + 4 * v6);
    if ( v7 == -1 )
      a3 = 2147483644;
    else
      a3 = v7 - i;
    result = (*(int (__thiscall **)(_DWORD *, int *, int))(*this + 76))(this, &a3, 4);
  }
  return result;
}
