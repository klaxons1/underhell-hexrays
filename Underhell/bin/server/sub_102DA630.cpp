int __thiscall sub_102DA630(_BYTE *this)
{
  int result; // eax
  bool v3; // bl
  bool v4; // zf
  int v5; // eax

  sub_10236700(this);
  result = dword_106DEAE4;
  if ( *(_DWORD *)(dword_106DEAE4 + 48) )
  {
    v3 = 1;
    v4 = this[12] == 1;
  }
  else
  {
    v5 = sub_101679A0((int)"super_phys_gun");
    result = sub_10167A00(v5);
    v3 = result == 1;
    v4 = (result == 1) == this[12];
  }
  if ( !v4 )
  {
    result = sub_1015E340();
    this[12] = v3;
  }
  return result;
}
