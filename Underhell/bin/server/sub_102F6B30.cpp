char *__thiscall sub_102F6B30(int this, int a2)
{
  char *result; // eax

  if ( a2 )
  {
    result = *(char **)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
    *(_DWORD *)(this + 5692) = result;
  }
  else
  {
    sub_10023E00((char *)this, 79);
    sub_10023E00((char *)this, 81);
    sub_10023CB0((char *)this, 80);
    result = sub_10023CB0((char *)this, 82);
    *(_DWORD *)(this + 5692) = -1;
  }
  return result;
}
