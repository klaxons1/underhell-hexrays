const char *__thiscall sub_10127CB0(char *this, int a2)
{
  int v3; // eax
  int v5; // eax

  v3 = *((_DWORD *)this + 1);
  if ( !v3 )
    return (const char *)(*(_DWORD *)this + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 256) + 4 * a2 + *(_DWORD *)this));
  if ( *(_DWORD *)(v3 + 120) <= a2 - 1 )
    return "Invalid node";
  v5 = sub_10127760(this, *(_DWORD *)(*(_DWORD *)(v3 + 108) + 8 * a2 - 8));
  return (const char *)(v5
                      + *(_DWORD *)(*(_DWORD *)(v5 + 256)
                                  + 4 * *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 108) + 8 * a2 - 4)
                                  + v5));
}
