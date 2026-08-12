char *__thiscall sub_1022CF40(char **this, char *Src, int a3)
{
  int v4; // edi
  char *v5; // eax
  int v6; // eax
  char *result; // eax
  char *v8; // esi

  if ( Src )
    v4 = a3;
  else
    v4 = 0;
  v5 = this[1];
  this[3] = (char *)v4;
  if ( v4 > (int)v5 )
  {
    sub_1001A460(this, v4 - (_DWORD)v5);
    v6 = (int)this[1];
    if ( v4 > v6 )
      this[3] = (char *)v6;
  }
  result = this[3];
  if ( result )
  {
    v8 = *this;
    if ( v8 >= &Src[v4] || &result[(int)v8] <= Src )
      return (char *)memcpy_0(v8, Src, (size_t)result);
    else
      return (char *)memcpy(v8, Src, (size_t)result);
  }
  return result;
}
