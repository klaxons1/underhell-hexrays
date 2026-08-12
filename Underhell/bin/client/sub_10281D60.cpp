void __thiscall sub_10281D60(_DWORD *this)
{
  char v2; // al
  void *v3; // ecx

  v2 = sub_100E1B90();
  v3 = (void *)this[127];
  if ( v2 )
  {
    if ( v3 )
    {
      sub_1022AF00(v3);
      this[127] = 0;
    }
    this[127] = (*(int (__thiscall **)(_DWORD *))(*this + 1036))(this);
  }
  else
  {
    if ( v3 )
      sub_1022AF00(v3);
    this[127] = 0;
  }
}
