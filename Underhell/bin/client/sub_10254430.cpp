int __thiscall sub_10254430(int this)
{
  int v2; // eax

  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 1020))(this, 0);
  if ( ++*(_DWORD *)(this + 280) < *(_DWORD *)(this + 232) )
  {
    do
    {
      if ( iswspace(*(_WORD *)(*(_DWORD *)(this + 220) + 2 * *(_DWORD *)(this + 280))) )
        break;
      ++*(_DWORD *)(this + 280);
    }
    while ( *(_DWORD *)(this + 280) < *(_DWORD *)(this + 232) );
  }
  if ( ++*(_DWORD *)(this + 280) < *(_DWORD *)(this + 232) )
  {
    do
    {
      if ( !iswspace(*(_WORD *)(*(_DWORD *)(this + 220) + 2 * *(_DWORD *)(this + 280))) )
        break;
      ++*(_DWORD *)(this + 280);
    }
    while ( *(_DWORD *)(this + 280) < *(_DWORD *)(this + 232) );
  }
  v2 = *(_DWORD *)(this + 232);
  if ( *(_DWORD *)(this + 280) > v2 )
    *(_DWORD *)(this + 280) = v2;
  if ( *(_BYTE *)(this + 380) )
  {
    if ( !*(_BYTE *)(this + 341)
      && sub_10251F10((int (__thiscall ***)(void *, int *, _BYTE *))this, *(_DWORD *)(this + 280)) )
    {
      ++*(_DWORD *)(this + 376);
      sub_10252FD0(this);
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 976))(this);
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 976))(this);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 980))(this);
  return (*(int (__thiscall **)(int))(*(_DWORD *)this + 16))(this);
}
