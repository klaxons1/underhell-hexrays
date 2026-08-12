int __thiscall sub_100930C0(_DWORD *this, int a2)
{
  int v3; // eax
  int result; // eax

  v3 = this[581];
  if ( v3 != 1 && v3 != 2
    || !sub_100240F0(this, a2, 2)
    || sub_10023D10(this, 64)
    || (result = (*(int (__thiscall **)(_DWORD *))(*this + 2316))(this)) == 0 )
  {
    if ( a2 == 18 )
    {
      result = sub_102FB410(18);
      if ( result == 18 )
        return 27;
    }
    else
    {
      return sub_102FB410(a2);
    }
  }
  return result;
}
