int __thiscall sub_1003CD40(_DWORD *this, int a2)
{
  int v2; // esi
  int result; // eax

  v2 = (int)(this - 2);
  sub_1003CC70(this - 2, (int)"OnDataChanged");
  result = sub_10036170(v2);
  if ( !a2 )
    return sub_10039310(v2);
  return result;
}
