bool __thiscall sub_10027110(_DWORD *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  bool result; // al

  v2 = *(_DWORD *)(this[647] + 12);
  result = 0;
  if ( v2 != 3 && v2 != 1 )
  {
    (*(void (__thiscall **)(_DWORD *))(*this + 2160))(this);
    v3 = sub_1007DB30(10);
    if ( v3 != -1 )
    {
      v4 = v3 - 1000000000;
      if ( v4 != -1 && ((1 << (v4 & 0x1F)) & this[(v4 >> 5) + 548]) != 0 )
      {
        (*(void (__thiscall **)(_DWORD *))(*this + 2160))(this);
        v5 = sub_1007DB30(27);
        if ( v5 == -1 )
          return 1;
        v6 = v5 - 1000000000;
        if ( v6 == -1 || ((1 << (v6 & 0x1F)) & this[(v6 >> 5) + 548]) == 0 )
          return 1;
      }
    }
  }
  return result;
}
