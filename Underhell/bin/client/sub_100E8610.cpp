int __thiscall sub_100E8610(int *this, int a2, int a3, int a4, int a5)
{
  int result; // eax

  if ( *this )
    sub_100E85C0(this);
  if ( (dword_10435710 & 1) == 0 )
  {
    dword_10435710 |= 1u;
    sub_100E8090(dword_104356B8);
    atexit(sub_102CAF10);
  }
  result = (*(int (__thiscall **)(int *, int, int, int, int, _DWORD))(dword_104356B8[0] + 8))(
             dword_104356B8,
             a2,
             a4,
             a5,
             a3,
             0);
  *this = result;
  return result;
}
