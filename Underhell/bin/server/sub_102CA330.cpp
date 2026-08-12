int __thiscall sub_102CA330(_DWORD *this)
{
  int result; // eax
  char *v3; // eax
  _DWORD *v4; // esi
  char *v5; // eax

  result = this[349];
  if ( !result )
  {
    v3 = (char *)this[351];
    if ( !v3 )
      v3 = (char *)String;
    v4 = sub_1012BF20(&dword_1069E3E0, 0, v3, 0, 0, 0, 0);
    if ( v4 )
    {
      while ( (char *)v4[23] != "env_laser" && !sub_100D6240(v4, "env_laser") )
      {
        v5 = (char *)this[351];
        if ( !v5 )
          v5 = (char *)String;
        v4 = sub_1012BF20(&dword_1069E3E0, (int)v4, v5, 0, 0, 0, 0);
        if ( !v4 )
          return this[349];
      }
      this[349] = v4;
    }
    return this[349];
  }
  return result;
}
