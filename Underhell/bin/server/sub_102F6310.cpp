int __thiscall sub_102F6310(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // esi
  int v5; // eax
  int v7; // eax

  v3 = sub_10398300(a2);
  v4 = v3;
  if ( v3 == 11 )
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*this + 368))(this) )
    {
      v5 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 220))(v5) == 10 && sub_10022CA0(this, 15) )
        return 15;
    }
    return v4;
  }
  if ( v3 <= 309 )
  {
    switch ( v3 )
    {
      case 309:
        return 306;
      case 72:
        if ( this[1458] == 3 )
          return 73;
        break;
      case 75:
        return dword_106E278C;
      case 273:
        return 270;
    }
    return v4;
  }
  v7 = v3 - 352;
  if ( !v7 )
    return 344;
  if ( v7 != 1 )
    return v4;
  return 348;
}
