int sub_101C4660()
{
  int result; // eax

  result = sub_1042FCC0(20);
  if ( result )
  {
    ++dword_106BA690;
  }
  else
  {
    DevWarning("AllocTouchLink: failed to allocate touchlink_t.\n");
    return 0;
  }
  return result;
}
