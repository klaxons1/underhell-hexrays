int *__thiscall sub_101F6B90(_DWORD *this)
{
  if ( *this == 15 )
    return (int *)this[2];
  if ( (dword_10465624 & 1) == 0 )
  {
    dword_10465624 |= 1u;
    dword_10465610 = 0;
    dword_10465614 = 0;
    dword_10465618 = 0;
    dword_1046561C = 0;
    dword_10465620 = 0;
    atexit(sub_102CE500);
  }
  return &dword_10465610;
}
