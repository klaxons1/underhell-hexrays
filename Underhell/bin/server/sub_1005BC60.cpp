char __thiscall sub_1005BC60(int this)
{
  char result; // al

  result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 1268))(*(_DWORD *)(this + 4));
  if ( result )
    return *(_BYTE *)(this + 17) || *(_BYTE *)(this + 18) == 0;
  return result;
}
