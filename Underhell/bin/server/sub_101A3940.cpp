char *__thiscall sub_101A3940(_DWORD *this, int a2)
{
  char **v3; // ecx
  char *v4; // eax
  char *v5; // edi
  char *result; // eax
  int v7; // edi

  v3 = (char **)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v4 = *v3;
    if ( !*v3 )
      v4 = (char *)String;
  }
  else
  {
    v4 = (char *)sub_1010D460((int)v3);
  }
  v5 = (char *)sub_1012C5B0(0, v4, (int)this, 0, 0);
  result = (char *)(*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
  if ( result )
  {
    result = (char *)(*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
    if ( result == v5 )
    {
      v7 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
      if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
        sub_100DAE60(v7);
      if ( (this[63] & 0x800) != 0 )
        sub_100DAE60((int)this);
      if ( sub_101A3230((int)this, (float *)this + 145, (float *)(v7 + 580), 0.0, 1) )
      {
        result = sub_10023CB0((char *)this, 79);
        *((float *)this + 972) = 1.0;
      }
      else
      {
        return sub_10023E00((char *)this, 79);
      }
    }
  }
  return result;
}
