char __thiscall sub_10027CD0(_DWORD *this, char a2)
{
  int v3; // eax

  LOBYTE(v3) = sub_10043CE0();
  if ( a2
    || ((*(void (__thiscall **)(_DWORD *))(*this + 2160))(this), v3 = sub_1007DB30(35), v3 == -1)
    || (v3 -= 1000000000, v3 == -1)
    || (LOBYTE(v3) = ((1 << (v3 & 0x1F)) & this[(v3 >> 5) + 548]) != 0, !(_BYTE)v3) )
  {
    this[534] = 4;
  }
  return v3;
}
