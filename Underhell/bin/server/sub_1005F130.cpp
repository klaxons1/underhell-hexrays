int __thiscall sub_1005F130(_DWORD *this, int a2)
{
  int v3; // eax

  if ( this[213] >= 6u )
  {
    DevMsg("Invalid aggressiveness value %d\n", this[213]);
    v3 = this[213];
    if ( v3 < 0 )
    {
      this[213] = 0;
      return sub_1006FA60(a2);
    }
    if ( v3 > 4 )
      this[213] = 4;
  }
  return sub_1006FA60(a2);
}
