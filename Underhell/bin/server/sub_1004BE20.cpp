bool __thiscall sub_1004BE20(int this)
{
  return *(_DWORD *)(this + 28) == 3
      && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 1364))(*(_DWORD *)(this + 4)) == this
      && *(_BYTE *)(this + 36)
      || *(_DWORD *)(this + 32) == *(_DWORD *)(this + 28);
}
