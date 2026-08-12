int __thiscall sub_10254040(int this)
{
  int v2; // eax
  int v3; // edx
  _DWORD *v4; // ecx
  int v5; // eax

  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 1020))(this, 0);
  v2 = 0;
  if ( *(int *)(this + 272) <= 0 )
  {
LABEL_5:
    v5 = *(_DWORD *)(this + 280);
    if ( v5 < *(_DWORD *)(this + 232) )
      *(_DWORD *)(this + 280) = v5 + 1;
    if ( sub_10253F30((_DWORD *)this, *(_DWORD *)(this + 280)) && !*(_BYTE *)(this + 284) )
      *(_BYTE *)(this + 285) = 1;
  }
  else
  {
    v3 = *(_DWORD *)(this + 280);
    v4 = *(_DWORD **)(this + 260);
    while ( v3 != *v4 )
    {
      ++v2;
      ++v4;
      if ( v2 >= *(_DWORD *)(this + 272) )
        goto LABEL_5;
    }
    if ( *(_BYTE *)(this + 284) )
    {
      *(_BYTE *)(this + 285) = 0;
    }
    else if ( v3 < *(_DWORD *)(this + 232) )
    {
      *(_DWORD *)(this + 280) = v3 + 1;
    }
  }
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
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 980))(this);
  return (*(int (__thiscall **)(int))(*(_DWORD *)this + 16))(this);
}
