int __thiscall sub_101011A0(unsigned __int16 *this, void *a2, int a3)
{
  int v4; // ecx
  int v5; // edx
  int result; // eax

  memset(a2, 0, 4 * a3);
  v4 = (int)this + this[7] + 20;
  v5 = (int)this + this[8] + 20;
  result = 0;
  if ( this[6] )
  {
    do
    {
      *((_DWORD *)a2 + *(__int16 *)(v5 + 2 * result++)) = v4;
      v4 += 48;
    }
    while ( result < this[6] );
  }
  return result;
}
