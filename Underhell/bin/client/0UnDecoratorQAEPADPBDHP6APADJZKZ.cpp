UnDecorator *__thiscall UnDecorator::UnDecorator(
        UnDecorator *this,
        char *a2,
        char *a3,
        int a4,
        char *(__cdecl *a5)(int),
        unsigned int a6)
{
  UnDecorator *result; // eax
  _DWORD *v7; // ecx

  result = this;
  *(_DWORD *)this = -1;
  v7 = (_DWORD *)((char *)this + 44);
  *v7 = -1;
  dword_10482864 = a3;
  dword_10482860 = a3;
  if ( a2 )
  {
    dword_1048286C = a4;
    dword_10482868 = a2;
  }
  else
  {
    dword_10482868 = 0;
    dword_1048286C = 0;
  }
  dword_10482858 = (int)v7;
  dword_10482870 = a6;
  dword_10482854 = (int)result;
  dword_10482874 = (int)a5;
  byte_10482878 = 0;
  return result;
}
