bool __thiscall sub_1029BEA0(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  bool result; // al

  v2 = *(_DWORD *)(this + 20);
  result = v2 != -1
        && (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 1], v3[1] == v2 >> 12)
        && *v3
        && (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 1268))(*(_DWORD *)(this + 4))
        && !sub_10023D10(*(_DWORD **)(this + 4), 64);
  return result;
}
