int __cdecl CompareFunction(void *a1, _DWORD *a2, _DWORD *a3)
{
  if ( *a3 <= *a2 )
    return *a3 < *a2;
  else
    return -1;
}
