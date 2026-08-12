_DWORD *__thiscall sub_10129C90(_DWORD *this)
{
  _DWORD *v2; // edi
  int i; // ebx

  *this = &CBaseClientRenderTargets::`vftable';
  unknown_libname_2(this + 1);
  unknown_libname_2(this + 2);
  *this = &CTNERenderTargets::`vftable';
  unknown_libname_2(this + 3);
  unknown_libname_2(this + 4);
  unknown_libname_2(this + 5);
  unknown_libname_2(this + 6);
  v2 = this + 7;
  for ( i = 3; i >= 0; --i )
    unknown_libname_2(v2++);
  return this;
}
