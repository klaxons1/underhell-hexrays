int __thiscall sub_1004DA40(_DWORD *this)
{
  int v2; // eax
  float v3; // edi
  int result; // eax
  unsigned int v5; // ecx
  int v6; // eax
  int v7; // eax

  v2 = this[298];
  v3 = 0.0;
  if ( v2 )
  {
    sub_100EA4D0(v2, 1, 0);
    sub_100F1F50(0, 0);
    sub_100F1F50(1, 0);
    this[298] = 0;
  }
  result = sub_100EA350("burning_character", 1, -1, SLODWORD(flt_10459240), qword_10459244, SHIDWORD(qword_10459244));
  this[298] = result;
  if ( result )
  {
    v5 = this[299];
    if ( v5 != -1 )
    {
      if ( *((_DWORD *)off_103DCD74 + 4 * (this[299] & 0xFFF) + 2) == v5 >> 12 )
        v3 = *((float *)off_103DCD74 + 4 * (this[299] & 0xFFF) + 1);
      else
        v3 = 0.0;
    }
    this[300] = this[299];
    sub_100EA130(result, 1, v3, 1, 0.0, SLODWORD(flt_10459240), qword_10459244, SHIDWORD(qword_10459244));
    v6 = (*(int (__thiscall **)(_DWORD *))(*this + 36))(this);
    sub_100F2080(0, v6);
    v7 = (*(int (__thiscall **)(_DWORD *))(*this + 36))(this);
    sub_100F2080(1, v7);
    sub_100F1F50(0, LODWORD(v3));
    return sub_100F1F50(1, LODWORD(v3));
  }
  return result;
}
