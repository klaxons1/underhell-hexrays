int __thiscall sub_100D9260(_DWORD *this, char *a2, int a3)
{
  int v4; // eax
  int v5; // edx
  int v6; // ecx
  bool v7; // zf
  int result; // eax

  v4 = sub_100D63D0(a2);
  v5 = this[61];
  v6 = 88 * (a3 % 90);
  v7 = v4 == *(_DWORD *)(v6 + v5 + 84);
  result = v6 + v5;
  if ( !v7 )
    return sub_100B36D0((int)a2, v6 + v5);
  return result;
}
