char *__thiscall sub_10337C80(_DWORD *this)
{
  const char *v2; // eax
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx
  _DWORD *v6; // eax
  char *result; // eax
  int v8; // [esp+8h] [ebp-8h] BYREF
  char v9; // [esp+Ch] [ebp-4h]

  sub_100577F0((int)(this + 1127), 0, 0);
  v8 = 0;
  v9 = 0;
  sub_10057630((int)(this + 1127), &v8);
  (*(void (__thiscall **)(_DWORD *))(*this + 1548))(this);
  v2 = (const char *)this[1433];
  if ( !v2 || !strcmp(v2, "player_squad") )
    sub_1004AFC0(this);
  else
    sub_1004AF40(this, (char *)this[1433]);
  v3 = this[1492];
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (this[1492] & 0xFFF) + 1];
    v5 = v3 >> 12;
    if ( off_1061BE18[4 * (this[1492] & 0xFFF) + 2] == v5 )
    {
      if ( *v4 )
      {
        if ( off_1061BE18[4 * (this[1492] & 0xFFF) + 2] == v5 )
          v6 = (_DWORD *)*v4;
        else
          v6 = 0;
        sub_10057960((int)(this + 1127), v6, 0);
      }
    }
  }
  result = sub_10023CB0((char *)this, 66);
  flt_1066E9A4 = *(float *)(dword_106B31C8 + 12) + 2.0;
  return result;
}
