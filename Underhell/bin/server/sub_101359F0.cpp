int __thiscall sub_101359F0(_BYTE *this, int a2)
{
  int result; // eax
  _DWORD *v4; // esi
  int v5; // eax

  result = sub_10261B20();
  v4 = (_DWORD *)result;
  if ( result )
  {
    sub_100F8040(result, (int)this, 0, 0.0, 0);
    result = sub_101E7EA0(1);
    if ( result )
    {
      result = sub_100CF460(v4);
      if ( !result )
      {
        if ( this[808] )
        {
          v5 = sub_101E7EA0(1);
          result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 864))(v5, 32);
          this[808] = 0;
        }
      }
    }
  }
  return result;
}
