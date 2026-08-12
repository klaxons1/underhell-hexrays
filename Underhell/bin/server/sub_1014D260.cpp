int __thiscall sub_1014D260(int *this)
{
  int i; // ebx
  int j; // edi
  int result; // eax

  for ( i = 0; i < this[244]; ++i )
  {
    for ( j = 0; j < this[245]; ++j )
    {
      if ( i >= 0 && i < this[244] && j >= 0 && j < this[245] )
      {
        ++this[256];
        sub_1014B7C0((int)this, i, j, -1.0);
        sub_100EC3F0(this, (int)sub_1014C050, 0.0, 0);
        result = sub_100EC4A0(this, *(float *)(dword_106B31C8 + 12), 0);
      }
    }
  }
  this[256] = this[244] * this[245];
  return result;
}
