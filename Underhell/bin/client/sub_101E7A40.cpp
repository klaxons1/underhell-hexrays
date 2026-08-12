void __thiscall sub_101E7A40(_DWORD *this, int *a2)
{
  int v3; // ecx
  int v4; // eax
  int **v5; // edx
  int v6; // ecx

  v3 = this[29];
  v4 = 0;
  if ( v3 > 0 )
  {
    v5 = (int **)this[26];
    while ( *v5 != a2 )
    {
      ++v4;
      ++v5;
      if ( v4 >= v3 )
        goto LABEL_10;
    }
    if ( v4 != -1 )
    {
      v6 = v3 - v4 - 1;
      if ( v6 > 0 )
        memcpy((void *)(this[26] + 4 * v4), (const void *)(this[26] + 4 * v4 + 4), 4 * v6);
      --this[29];
    }
  }
LABEL_10:
  sub_101E7010(this, a2);
}
