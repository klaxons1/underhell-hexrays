int __thiscall sub_101ACA50(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  const char *v6; // [esp-4h] [ebp-Ch]

  v4 = this[110];
  if ( a2 != v4 )
  {
    if ( a2 )
    {
      if ( a2 >= v4 )
        v6 = "Ammo2Increased";
      else
        v6 = "Ammo2Decreased";
    }
    else
    {
      v6 = "Ammo2Empty";
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
    sub_10248C80(v6);
    this[110] = a2;
  }
  return sub_100D0E30(this, a2);
}
