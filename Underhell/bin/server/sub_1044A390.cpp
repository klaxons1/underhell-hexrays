void __thiscall sub_1044A390(int this)
{
  signed int v2; // eax
  int i; // edi
  const char *v4; // eax
  char v5; // [esp+7h] [ebp-9h] BYREF
  _DWORD Context[2]; // [esp+8h] [ebp-8h] BYREF

  if ( (*(_BYTE *)(this + 47) & 1) != 0 )
  {
    if ( *(_BYTE *)(this + 24) )
    {
      v2 = *(_DWORD *)(this + 12);
      *(_BYTE *)(this + 24) = 0;
      if ( v2 > 1 )
      {
        Context[0] = *(_DWORD *)(this + 20);
        Context[1] = &v5;
        qsort_s(*(void **)this, v2, 4u, sub_1044A190, Context);
      }
    }
    *(_BYTE *)(this + 47) &= ~1u;
    for ( i = *(_DWORD *)(this + 12) - 1; i >= 1; --i )
    {
      if ( *(_WORD *)(*(_DWORD *)(*(_DWORD *)this + 4 * i) + 4) == *(_WORD *)(*(_DWORD *)(*(_DWORD *)this + 4 * i - 4)
                                                                            + 4) )
      {
        v4 = (const char *)sub_1044AAA0(*(_DWORD *)(*(_DWORD *)this + 4 * i));
        Warning("Duplicate attribute name %s encountered!\n", v4);
        if ( *(_DWORD *)(this + 12) - i - 1 > 0 )
          memcpy(
            (void *)(*(_DWORD *)this + 4 * i),
            (const void *)(*(_DWORD *)this + 4 * i + 4),
            4 * (*(_DWORD *)(this + 12) - i - 1));
        --*(_DWORD *)(this + 12);
      }
    }
  }
}
