int __thiscall sub_101ACEE0(_DWORD *this, int a2)
{
  int v3; // eax
  const char *v5; // [esp-4h] [ebp-Ch]

  v3 = this[109];
  if ( a2 != v3 )
  {
    if ( a2 )
    {
      if ( a2 >= v3 )
        v5 = "AmmoSecondaryIncreased";
      else
        v5 = "AmmoSecondaryDecreased";
    }
    else
    {
      v5 = "AmmoSecondaryEmpty";
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
    sub_10248C80(v5);
    this[109] = a2;
  }
  return sub_100D0E20(this, a2);
}
