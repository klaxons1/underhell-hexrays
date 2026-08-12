int __thiscall sub_10036170(int this)
{
  int result; // eax
  int v3; // ecx

  result = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 4) + 124))(this + 4);
  if ( result )
  {
    if ( *(_WORD *)(this + 302) == 0xFFFF )
    {
      v3 = 2;
      if ( result != 1 )
        v3 = 6;
      if ( result == 3 )
        v3 |= 8u;
      result = (*(int (__thiscall **)(void *, _DWORD, int))(*(_DWORD *)off_103DD080 + 64))(
                 off_103DD080,
                 *(_DWORD *)(this + 164),
                 v3);
      *(_WORD *)(this + 302) = result;
    }
  }
  else
  {
    result = *(unsigned __int16 *)(this + 302);
    if ( (_WORD)result != 0xFFFF )
    {
      result = (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)off_103DD080 + 68))(
                 off_103DD080,
                 *(unsigned __int16 *)(this + 302));
      *(_WORD *)(this + 302) = -1;
    }
  }
  return result;
}
