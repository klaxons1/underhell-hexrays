bool __thiscall sub_10051BB0(int this)
{
  unsigned int v2; // eax
  bool result; // al

  result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 1364))(*(_DWORD *)(this + 4)) == this
        && (v2 = *(_DWORD *)(this + 20), v2 != -1)
        && off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 2] == v2 >> 12
        && off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 1]
        && sub_10051440((_DWORD *)this);
  return result;
}
