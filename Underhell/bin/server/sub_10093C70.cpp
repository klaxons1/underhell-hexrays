unsigned int __thiscall sub_10093C70(_DWORD *this, int a2)
{
  unsigned int result; // eax
  int *v4; // ecx
  int v5; // ecx
  char *v6; // eax
  unsigned int v7; // eax
  int v8; // ecx
  char *v9; // eax
  char *v10; // eax
  unsigned int v11; // ecx

  sub_10092D80((int)this, a2);
  result = this[1096];
  if ( result != -1 )
  {
    v4 = &off_1061BE18[4 * (this[1096] & 0xFFF) + 1];
    result >>= 12;
    if ( off_1061BE18[4 * (this[1096] & 0xFFF) + 2] == result )
    {
      if ( *v4 )
      {
        if ( off_1061BE18[4 * (this[1096] & 0xFFF) + 2] == result )
          v5 = *v4;
        else
          v5 = 0;
        v6 = *(char **)(v5 + 92);
        if ( !v6 )
          v6 = (char *)String;
        sub_10067DE0(a2, "speechtarget", v6, 1.0);
        v7 = this[1096];
        if ( v7 == -1 || off_1061BE18[4 * (this[1096] & 0xFFF) + 2] != v7 >> 12 )
          v8 = 0;
        else
          v8 = off_1061BE18[4 * (this[1096] & 0xFFF) + 1];
        v9 = *(char **)(v8 + 260);
        if ( !v9 )
          v9 = (char *)String;
        sub_10067DE0(a2, "speechtargetname", v9, 1.0);
        v10 = (char *)sub_1025F440("%d", this[1098]);
        result = (unsigned int)sub_10067DE0(a2, "randomnum", v10, 1.0);
      }
    }
  }
  v11 = this[1102];
  if ( v11 != -1 )
  {
    result = (unsigned int)&off_1061BE18[4 * (this[1102] & 0xFFF) + 1];
    if ( off_1061BE18[4 * (this[1102] & 0xFFF) + 2] == v11 >> 12 )
    {
      if ( *(_DWORD *)result )
        return sub_100E12F0(a2, (char)String);
    }
  }
  return result;
}
