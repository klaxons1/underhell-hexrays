bool __thiscall sub_100B68D0(int *this)
{
  bool result; // al
  int v3; // ebx
  int v4; // edi
  bool v5; // [esp+Fh] [ebp-1h]

  result = !sub_100B3C20(this[3]);
  v5 = result;
  if ( result )
  {
    v3 = this[9];
    v4 = 0;
    if ( v3 > 0 )
    {
      while ( !sub_100B6820((int)&dword_1042FB78, (int)this, *(_DWORD *)(this[6] + 4 * v4)) )
      {
        if ( ++v4 >= v3 )
          return v5;
      }
      return 0;
    }
  }
  return result;
}
