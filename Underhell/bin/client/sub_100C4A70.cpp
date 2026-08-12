int __thiscall sub_100C4A70(int this)
{
  int *v2; // eax
  int v3; // edi
  int result; // eax

  for ( ; *(int *)(this + 328) > 0; --*(_DWORD *)(this + 328) )
  {
    v2 = *(int **)(this + 316);
    v3 = *v2;
    if ( *v2 )
    {
      sub_100C2BD0(*v2);
      sub_10034930(v3);
    }
    if ( *(_DWORD *)(this + 328) - 1 > 0 )
      memcpy(*(void **)(this + 316), (const void *)(*(_DWORD *)(this + 316) + 4), 4 * (*(_DWORD *)(this + 328) - 1));
  }
  result = sub_100C4100(this);
  *(_BYTE *)(this + 452) = 0;
  return result;
}
