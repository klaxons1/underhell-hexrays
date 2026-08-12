bool __thiscall sub_10395C40(_DWORD *this)
{
  bool result; // al
  unsigned int v3; // eax

  result = (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 2416))(this)
        && ((*(int (__thiscall **)(_DWORD *))(*this + 368))(this)
         || (v3 = this[1408], v3 != -1)
         && off_1061BE18[4 * (this[1408] & 0xFFF) + 2] == v3 >> 12
         && off_1061BE18[4 * (this[1408] & 0xFFF) + 1])
        && (!(*(int (__thiscall **)(_DWORD *))(*this + 368))(this) || sub_10023D10(this, 10));
  return result;
}
