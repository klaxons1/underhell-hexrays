void __thiscall sub_100BD480(_DWORD *this, char *String2)
{
  int v3; // eax
  const char *v4; // esi

  if ( String2 )
  {
    v3 = sub_1012BF20(0, String2, 0, 0, 0, 0);
    if ( v3 )
    {
      (*(void (__thiscall **)(_DWORD *, int))(*this + 832))(this, v3);
      this[263] = String2;
    }
    else
    {
      v4 = (const char *)this[23];
      if ( !v4 )
        v4 = String;
      DevWarning("%s: Could not find lighting origin entity named '%s'!\n", v4, String2);
    }
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 832))(this, 0);
    this[263] = 0;
  }
}
