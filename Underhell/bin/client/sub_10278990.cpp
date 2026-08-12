void __thiscall sub_10278990(int this)
{
  bool v2; // sf
  int v3; // eax

  v2 = *(int *)(this + 248) < 0;
  *(_DWORD *)(this + 252) = 0;
  if ( !v2 )
  {
    if ( *(_DWORD *)(this + 240) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 240));
      *(_DWORD *)(this + 240) = 0;
    }
    *(_DWORD *)(this + 244) = 0;
  }
  *(_DWORD *)(this + 256) = *(_DWORD *)(this + 240);
  if ( *(_DWORD *)(this + 208) )
  {
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 208) + 772))(*(_DWORD *)(this + 208)) != -1 )
    {
      v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 208) + 772))(*(_DWORD *)(this + 208));
      sub_102788B0(this, v3);
    }
  }
}
