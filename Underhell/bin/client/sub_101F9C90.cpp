int __thiscall sub_101F9C90(_DWORD *this)
{
  int result; // eax
  int v3; // ebx
  int i; // esi
  int j; // edi

  result = this[16];
  v3 = *(_DWORD *)(result + 640);
  for ( i = 0; i < v3; ++i )
    result = (*(int (__thiscall **)(_DWORD, _DWORD *, int))(**(_DWORD **)(*(_DWORD *)(this[16] + 628) + 4 * i) + 64))(
               *(_DWORD *)(*(_DWORD *)(this[16] + 628) + 4 * i),
               this,
               this[1494] + *(_DWORD *)(*(_DWORD *)(this[16] + 768) + 4 * i));
  for ( j = this[1502]; j; j = *(_DWORD *)(j + 5980) )
    result = sub_101F9C90(j);
  return result;
}
