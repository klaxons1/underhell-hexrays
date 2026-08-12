int __thiscall sub_10266100(int (__thiscall ***this)(void *, int, int), int a2, int a3, int a4)
{
  int result; // eax
  int v6; // eax

  result = (**this)(this, a2, 1);
  if ( (_BYTE)result )
  {
    v6 = ((int (__thiscall *)(int (__thiscall ***)(void *, int, int)))(*(this - 372))[85])(this - 372);
    if ( v6 )
      return (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)v6 + 112))(v6, a2, a3, a4);
    else
      return 1;
  }
  return result;
}
