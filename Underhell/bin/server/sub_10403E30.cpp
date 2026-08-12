void __thiscall sub_10403E30(int this)
{
  bool v1; // zf

  v1 = *(_BYTE *)(this + 896) == 0;
  *(_BYTE *)(this + 897) = 1;
  if ( !v1 )
    sub_10242BA0(this);
}
