void __thiscall sub_102ACCC0(_DWORD *this)
{
  int i; // ebx
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // eax
  int v6; // eax

  for ( i = 0; i < this[254]; ++i )
  {
    v3 = *(_DWORD *)(this[251] + 4 * i);
    if ( v3 != -1
      && (v4 = &off_1061BE18[4 * (*(_DWORD *)(this[251] + 4 * i) & 0xFFF) + 1],
          off_1061BE18[4 * (*(_DWORD *)(this[251] + 4 * i) & 0xFFF) + 2] == v3 >> 12)
      && *v4 )
    {
      if ( !*(_BYTE *)(*v4 + 224) )
      {
        v5 = sub_102AC800(this);
        sub_102FC1D0(v5);
        v6 = sub_102AC070(this);
        sub_102FC860(v6);
        sub_102FC900(this[247]);
      }
    }
    else
    {
      if ( this[254] - i - 1 > 0 )
        memcpy((void *)(4 * i + this[251]), (const void *)(4 * i + this[251] + 4), 4 * (this[254] - i - 1));
      --this[254];
      --i;
    }
  }
  this[227] = i;
}
