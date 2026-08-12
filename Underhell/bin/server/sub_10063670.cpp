int __cdecl sub_10063670(int a1)
{
  int result; // eax

  result = *(_DWORD *)a1;
  if ( *(int *)a1 > 1 )
  {
    result = atoi(*(const char **)(a1 + 1036));
    if ( result >= 0 && result < *(_DWORD *)(dword_106935D8 + 4) )
    {
      result = *(_DWORD *)(*(_DWORD *)(dword_106935D8 + 8) + 4 * result);
      if ( result )
        return sub_1011C120(result + 4, 1024.0, 255, 255, 255, 1, 5.0);
    }
  }
  return result;
}
