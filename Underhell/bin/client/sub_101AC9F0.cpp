int __thiscall sub_101AC9F0(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  const char *v6; // [esp-4h] [ebp-Ch]

  v4 = this[109];
  if ( a2 != v4 )
  {
    if ( a2 )
    {
      if ( a2 >= v4 )
        v6 = "AmmoIncreased";
      else
        v6 = "AmmoDecreased";
    }
    else
    {
      v6 = "AmmoEmpty";
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
    sub_10248C80(v6);
    this[109] = a2;
  }
  return sub_100D0E20(this, a2);
}
