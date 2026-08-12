void __thiscall sub_10252FD0(int this)
{
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
}
