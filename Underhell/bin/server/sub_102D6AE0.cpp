int __thiscall sub_102D6AE0(float *this, float a2)
{
  int result; // eax
  int (__thiscall *v4)(float *, const char *); // edx

  if ( a2 == 0.0 )
  {
    a2 = 0.25;
    *((_BYTE *)this + 2152) = 0;
    sub_102D66E0(this + 532, &a2);
    return (*(int (__thiscall **)(float *, const char *))(*(_DWORD *)this + 104))(this, "models/spitball_small.mdl");
  }
  else if ( LODWORD(a2) == 1 )
  {
    *((_BYTE *)this + 2152) = 1;
    a2 = 0.5;
    sub_102D66E0(this + 532, &a2);
    return (*(int (__thiscall **)(float *, const char *))(*(_DWORD *)this + 104))(this, "models/spitball_medium.mdl");
  }
  else
  {
    result = LODWORD(a2) - 2;
    if ( LODWORD(a2) == 2 )
    {
      v4 = *(int (__thiscall **)(float *, const char *))(*(_DWORD *)this + 104);
      *((_BYTE *)this + 2152) = 1;
      return v4(this, "models/spitball_large.mdl");
    }
  }
  return result;
}
