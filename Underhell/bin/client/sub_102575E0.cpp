int __thiscall sub_102575E0(int this, int a2)
{
  int result; // eax
  int v4; // eax

  result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 212) + 128))(*(_DWORD *)(this + 212));
  if ( (_BYTE)result )
  {
    v4 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 212) + 772))(*(_DWORD *)(this + 212));
    result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 212) + 768))(*(_DWORD *)(this + 212), v4 - a2);
    *(_BYTE *)(this + 388) = 1;
  }
  return result;
}
