char __thiscall sub_1011D0A0(_DWORD **this, char *String2)
{
  char result; // al
  int v4; // esi
  int v5; // eax
  int v6; // edi

  result = sub_1011CD30(this);
  if ( result )
  {
    v4 = dword_1047CA8C;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA8C + 100))(dword_1047CA8C);
    v5 = sub_10029D40(this[4], String2);
    v6 = (int)this[4];
    sub_10029860(v6, v5);
    sub_10029AE0(v6);
    return (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 104))(v4);
  }
  return result;
}
