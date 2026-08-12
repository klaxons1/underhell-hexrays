// Microsoft VisualC 2-14/net runtime
int __thiscall unknown_libname_11(int this)
{
  int result; // eax
  _DWORD *v3; // [esp-4h] [ebp-8h]

  if ( *(_DWORD *)(this + 4) )
  {
    while ( 1 )
    {
      result = *(_DWORD *)(this + 8);
      *(_DWORD *)(this + 12) = result;
      if ( !result )
        break;
      v3 = *(_DWORD **)(this + 12);
      *(_DWORD *)(this + 8) = *v3;
      (*(void (__cdecl **)(_DWORD *))(this + 4))(v3);
    }
  }
  return result;
}
