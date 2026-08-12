void __thiscall sub_102EF080(int this)
{
  sub_100E38F0((float *)this);
  if ( (*(_DWORD *)(this + 248) & 2) != 0 )
  {
    if ( dword_10668F04 != -1
      && off_1061BE18[4 * (dword_10668F04 & 0xFFF) + 2] == (unsigned int)dword_10668F04 >> 12
      && off_1061BE18[4 * (dword_10668F04 & 0xFFF) + 1]
      || !*(_BYTE *)(this + 853) && *(int *)(this + 800) >= 1 )
    {
      *(_BYTE *)(this + 853) = 0;
    }
    else
    {
      dword_10668F04 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 8))(this);
    }
  }
  if ( (*(_DWORD *)(this + 248) & 0x10) == 0
    && (*(_BYTE *)(this + 248) & 1) != 0
    && *(float *)(dword_106B31C8 + 12) < 1.0
    && sub_102DC130((unsigned int *)&dword_10668F04) )
  {
    Warning("item_dynamic_resupply set to 'Use Master', but no item_dynamic_resupply master exists.\n");
  }
}
