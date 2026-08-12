int __thiscall sub_1007C870(_DWORD *this, char a2)
{
  int result; // eax
  int v3; // esi
  float v4; // [esp+0h] [ebp-Ch]

  result = sub_1007DE30(*(_DWORD *)(this[1] + 2588));
  if ( a2 )
  {
    if ( result == 6 )
    {
      v3 = 7;
    }
    else
    {
      if ( result != 11 )
        return result;
      v3 = 12;
    }
  }
  else if ( result == 7 )
  {
    v3 = 6;
  }
  else
  {
    if ( result != 12 )
      return result;
    v3 = 11;
  }
  v4 = *(float *)(dword_106B31C8 + 12) + 0.30000001;
  sub_100B8D50(v4);
  return sub_1007DD70(v3);
}
