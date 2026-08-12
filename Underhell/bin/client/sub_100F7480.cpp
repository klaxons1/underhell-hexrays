int sub_100F7480()
{
  int result; // eax

  result = sub_1022FDF0(20);
  if ( result )
  {
    ++dword_10435EF8;
  }
  else
  {
    DevWarning("AllocTouchLink: failed to allocate touchlink_t.\n");
    return 0;
  }
  return result;
}
