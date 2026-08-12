void __thiscall sub_101E7010(_DWORD *this, int *a2)
{
  int i; // esi

  for ( i = this[4] - 1; i >= 0; --i )
  {
    if ( *(int **)(this[1] + 4 * i) == a2 )
    {
      if ( this[4] - i - 1 > 0 )
        memcpy((void *)(this[1] + 4 * i), (const void *)(this[1] + 4 * i + 4), 4 * (this[4] - i - 1));
      --this[4];
    }
  }
  if ( a2 )
  {
    sub_101E5D80(a2);
    sub_10034930((int)a2);
  }
}
