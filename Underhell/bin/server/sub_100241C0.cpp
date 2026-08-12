bool __thiscall sub_100241C0(_DWORD *this, int a2)
{
  int v3; // eax

  if ( a2 >= 1000000000 )
  {
    v3 = a2;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *))(*this + 2160))(this);
    v3 = sub_1007DB30(a2);
  }
  return v3 != -1 && v3 != 999999999 && (this[((v3 - 1000000000) >> 5) + 556] & (1 << (v3 & 0x1F))) != 0;
}
