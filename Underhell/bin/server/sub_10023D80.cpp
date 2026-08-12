bool __thiscall sub_10023D80(_DWORD *this, int a2, char a3)
{
  bool result; // al
  int v5; // eax
  int v6; // eax

  if ( a3 )
    return sub_10023D10(this, a2);
  if ( a2 >= 1000000000 )
  {
    v5 = a2;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *))(*this + 2160))(this);
    v5 = sub_1007DB30(a2);
  }
  result = v5 != -1 && (v6 = v5 - 1000000000, v6 != -1) && ((1 << (v6 & 0x1F)) & this[(v6 >> 5) + 564]) != 0;
  return result;
}
