int __userpurge sub_1027A200@<eax>(_DWORD *a1@<ecx>, int a2@<esi>, int a3)
{
  int result; // eax
  int v4; // esi

  result = a3;
  if ( a3 >= 0 && a3 < a1[59] && a3 <= a1[65] )
  {
    v4 = 12 * a3 + a1[58];
    if ( *(_DWORD *)(v4 + 4) != a3 || *(_DWORD *)(v4 + 8) == a3 )
      return sub_10279CE0(a1, a2, *(int (__thiscall ****)(_DWORD))(12 * a3 + a1[58]));
  }
  return result;
}
