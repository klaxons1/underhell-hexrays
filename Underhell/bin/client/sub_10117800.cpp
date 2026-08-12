int __thiscall sub_10117800(_DWORD *this, int a2, int a3, int a4)
{
  int v4; // ebx
  int result; // eax
  int i; // ecx
  int v7; // edx

  v4 = (int)((*(float *)(this[7] + 1320) + 0.1) / *((float *)off_103DC81C + 7) + 0.5);
  result = (*(int (__thiscall **)(_DWORD *, int, int, int))(*this + 60))(this, a2, a3, a4);
  for ( i = result - 1; i >= 0; --i )
  {
    v7 = *(_DWORD *)(a2 + 4 * i);
    if ( v7 == 2147483644 )
      *(_DWORD *)(a2 + 4 * i) = -1;
    else
      *(_DWORD *)(a2 + 4 * i) = v4 + v7;
  }
  return result;
}
