char *__thiscall sub_102B2760(char *this, int a2)
{
  char *result; // eax

  result = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 264))(a2);
  if ( !(_BYTE)result )
  {
    sub_10023CB0(this, 30);
    sub_10023E00(this, 10);
    return sub_10023E00(this, 13);
  }
  return result;
}
