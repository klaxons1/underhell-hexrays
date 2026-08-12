int __thiscall sub_10403E50(int *this)
{
  bool v1; // zf
  int result; // eax

  v1 = *((_BYTE *)this + 896) == 0;
  *((_BYTE *)this + 897) = 0;
  if ( !v1 )
    return sub_10242060(this);
  return result;
}
