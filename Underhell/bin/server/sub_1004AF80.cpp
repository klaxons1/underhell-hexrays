void __thiscall sub_1004AF80(_DWORD *this, int a2)
{
  int v3; // eax

  v3 = this[699];
  if ( v3 != a2 )
  {
    if ( v3 )
    {
      if ( this[701] != -1 )
        sub_1004AF00(this);
    }
    this[699] = a2;
  }
}
