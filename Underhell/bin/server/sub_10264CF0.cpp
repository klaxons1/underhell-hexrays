_DWORD *__cdecl sub_10264CF0()
{
  if ( (dword_106CE618 & 1) == 0 )
  {
    dword_106CE618 |= 1u;
    sub_10264C10(&dword_106CE5F8);
    atexit(sub_10474960);
  }
  return &dword_106CE5F8;
}
