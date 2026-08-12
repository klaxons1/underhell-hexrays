int __thiscall sub_10273420(int this, _DWORD *a2)
{
  int v3; // ebx
  int v4; // edi
  int result; // eax

  v3 = sub_1022B4C0(a2, "original", (int)Locale);
  v4 = sub_1022B4C0(a2, "changed", (int)Locale);
  result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 268) + 920))(*(_DWORD *)(this + 268));
  if ( (_BYTE)result )
    return (*(int (__thiscall **)(_DWORD, _DWORD, int, int))(**(_DWORD **)(this + 268) + 916))(
             *(_DWORD *)(this + 268),
             *(_DWORD *)(this + 208),
             v3,
             v4);
  return result;
}
