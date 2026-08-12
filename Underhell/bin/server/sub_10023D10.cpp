bool __thiscall sub_10023D10(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // eax
  bool result; // al

  if ( a2 >= 1000000000 )
  {
    v3 = a2;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *))(*this + 2160))(this);
    v3 = sub_1007DB30(a2);
  }
  result = v3 != -1 && (v4 = v3 - 1000000000, v4 != -1) && ((1 << (v4 & 0x1F)) & this[(v4 >> 5) + 548]) != 0;
  return result;
}
