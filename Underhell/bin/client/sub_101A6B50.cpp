int *sub_101A6B50()
{
  if ( (dword_1044C348 & 1) == 0 )
  {
    dword_1044C348 |= 1u;
    sub_101A6AF0(&dword_1044C324);
    atexit(sub_102CDD10);
  }
  return &dword_1044C324;
}
