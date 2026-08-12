int __thiscall sub_10275580(int this, char a2)
{
  int v3; // ecx
  int v5; // eax
  _DWORD *v6; // edi

  *(_BYTE *)(this + 240) = a2;
  if ( a2 )
  {
    if ( *(int *)(this + 232) < 1 )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 268) + 964))(
        *(_DWORD *)(this + 268),
        *(_DWORD *)(this + 208));
      if ( *(int *)(this + 232) < 1 )
      {
        v3 = *(_DWORD *)(this + 268);
        *(_BYTE *)(this + 240) = 0;
        *(_BYTE *)(this + 264) = 0;
        return (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v3 + 244))(v3, 0, 0);
      }
    }
    (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(this + 256) + 108))(*(_DWORD *)(this + 256), "-");
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(this + 256) + 108))(*(_DWORD *)(this + 256), "+");
    if ( *(_BYTE *)(this + 264) && *(int *)(this + 232) > 0 )
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 268) + 976))(
        *(_DWORD *)(this + 268),
        *(_DWORD *)(this + 208));
    v5 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 268) + 848))(*(_DWORD *)(this + 268));
    if ( v5 != -1 )
    {
      v6 = *(_DWORD **)(this + 268);
      if ( sub_10273EB0(*(_DWORD **)(v6[53] + 12 * v5), this) )
        (*(void (__thiscall **)(_DWORD *, _DWORD, int, int, int))(*v6 + 820))(v6, *(_DWORD *)(this + 208), 1, 1, 1);
    }
  }
  sub_10275150(this);
  return (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 268) + 244))(
           *(_DWORD *)(this + 268),
           0,
           0);
}
