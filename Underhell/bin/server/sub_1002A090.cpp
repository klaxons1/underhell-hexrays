bool __thiscall sub_1002A090(void *this, int a2)
{
  int v2; // esi
  bool result; // al

  result = 1;
  if ( *(_BYTE *)(a2 + 306) == 6 )
  {
    if ( *(_DWORD *)(dword_10690844 + 48) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 1676))(this) )
      {
        v2 = *(_DWORD *)(a2 + 424);
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 40))(v2) )
        {
          if ( ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v2 + 116))(v2) < 40.0 )
            return 0;
        }
      }
    }
  }
  return result;
}
