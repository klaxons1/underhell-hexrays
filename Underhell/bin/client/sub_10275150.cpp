int __thiscall sub_10275150(int this)
{
  int v2; // edx
  int v3; // ecx
  int v4; // edi
  int result; // eax

  while ( 1 )
  {
    if ( *(_BYTE *)(this + 240) )
    {
      v2 = 0;
      if ( *(int *)(this + 232) > 0 )
      {
        v3 = *(_DWORD *)(this + 220);
        v4 = *(_DWORD *)(this + 232);
        do
        {
          if ( *(_DWORD *)(*(_DWORD *)v3 + 248) > v2 )
            v2 = *(_DWORD *)(*(_DWORD *)v3 + 248);
          v3 += 4;
          --v4;
        }
        while ( v4 );
      }
      result = v2 + 20;
      if ( v2 + 20 <= *(_DWORD *)(this + 244) )
        result = *(_DWORD *)(this + 244);
    }
    else
    {
      result = *(_DWORD *)(this + 244);
    }
    if ( result == *(_DWORD *)(this + 248) )
      break;
    *(_DWORD *)(this + 248) = result;
    if ( !sub_10273C00((_DWORD *)this) )
      return (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 268) + 244))(
               *(_DWORD *)(this + 268),
               0,
               0);
    this = sub_10273C00((_DWORD *)this);
  }
  return result;
}
