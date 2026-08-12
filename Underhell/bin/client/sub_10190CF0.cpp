int __thiscall sub_10190CF0(unsigned __int16 *this, int a2)
{
  int result; // eax
  double v4; // st7
  float v5; // [esp+0h] [ebp-Ch]

  result = sub_1003C500(this, a2);
  if ( a2 == 1 )
  {
    v4 = -1.0;
  }
  else
  {
    if ( a2 )
      return result;
    v4 = -1293.0;
  }
  v5 = v4;
  return (*(int (__stdcall **)(_DWORD))(*((_DWORD *)this - 2) + 408))(LODWORD(v5));
}
