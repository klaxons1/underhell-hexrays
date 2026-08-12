void __thiscall sub_10027060(int this, int a2)
{
  if ( *(_DWORD *)(this + 1192) && *(_BYTE *)(this + 84) == 23 )
  {
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 1192) + 28))(*(_DWORD *)(this + 1192), a2);
    sub_10027000((_DWORD **)this);
  }
  else
  {
    sub_1000FE20(this, a2);
  }
}
