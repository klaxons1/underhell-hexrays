int __thiscall sub_10273A70(int this)
{
  char v2; // al
  _DWORD *v3; // ecx
  int v4; // eax
  int v5; // eax

  if ( *(int *)(this + 232) > 0 || *(_BYTE *)(this + 264) )
    (***(void (__thiscall ****)(_DWORD))(this + 256))(*(_DWORD *)(this + 256));
  v2 = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 268) + 832))(
         *(_DWORD *)(this + 268),
         *(_DWORD *)(this + 208));
  v3 = *(_DWORD **)(this + 216);
  if ( v2 )
    v4 = sub_1022A800(v3, "SelectedImage", 0);
  else
    v4 = sub_1022A800(v3, "Image", 0);
  if ( v4 )
  {
    v5 = sub_10279020(v4);
    if ( v5 )
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 260) + 772))(*(_DWORD *)(this + 260), v5);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 260) + 492))(*(_DWORD *)(this + 260));
  }
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 252) + 492))(*(_DWORD *)(this + 252));
}
