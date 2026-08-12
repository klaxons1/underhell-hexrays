int __thiscall sub_1012F180(int this)
{
  int result; // eax
  int v3; // ecx

  result = *(_DWORD *)(this + 48);
  if ( (result & 0xF00000) != 0 && (result & 0xFF000000) != 0 )
  {
    result = (int)off_103DC800;
    v3 = *((_DWORD *)off_103DC800 + 1);
    if ( v3 )
    {
      if ( *((_DWORD *)off_103DC800 + 2) )
      {
        result = (*(int (__thiscall **)(int, _DWORD, _DWORD, int))(*(_DWORD *)v3 + 44))(
                   v3,
                   *(_DWORD *)(this + 44),
                   *(_DWORD *)(this + 48),
                   4);
        *(_BYTE *)(this + 29) = result;
        if ( (_BYTE)result )
        {
          if ( !*(_DWORD *)(this + 32) )
          {
            result = sub_100B66A0((int)&dword_1042FB78, (int)"ico_friend_indicator_avatar");
            *(_DWORD *)(this + 32) = result;
          }
        }
      }
    }
  }
  return result;
}
