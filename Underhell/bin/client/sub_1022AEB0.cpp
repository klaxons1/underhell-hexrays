bool __thiscall sub_1022AEB0(_DWORD *this, char *Str)
{
  _DWORD *v2; // eax

  v2 = sub_1022A6A0(this, Str, 0);
  return !v2 || !*((_BYTE *)v2 + 16) && !v2[6];
}
