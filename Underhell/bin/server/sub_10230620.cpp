bool __thiscall sub_10230620(_BYTE *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  unsigned int v4; // eax
  int v5; // eax
  bool result; // al

  v2 = a2;
  result = 0;
  if ( a2 )
  {
    if ( (this[248] & 2) == 0
      || (v4 = a2[605], v4 != -1)
      && off_1061BE18[4 * (a2[605] & 0xFFF) + 2] == v4 >> 12
      && off_1061BE18[4 * (a2[605] & 0xFFF) + 1]
      && (v5 = sub_10022C40(a2), (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 320))(v5)) )
    {
      LOBYTE(a2) = (this[248] & 4) != 0;
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD *))(*v2 + 1592))(v2, a2) )
        return 1;
    }
  }
  return result;
}
