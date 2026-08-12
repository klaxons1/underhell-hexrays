_DWORD *__thiscall sub_1024EBA0(int this, _DWORD *a2)
{
  _DWORD *result; // eax
  char Src[256]; // [esp+8h] [ebp-100h] BYREF

  sub_1023B220((_DWORD *)this, a2);
  result = sub_1022ACA0(a2, "settitlebarvisible", *(unsigned __int8 *)(this + 357));
  if ( *(_DWORD *)(this + 288) )
  {
    result = (_DWORD *)(*(int (__thiscall **)(_DWORD, char *, int))(**(_DWORD **)(this + 288) + 120))(
                         *(_DWORD *)(this + 288),
                         Src,
                         255);
    if ( Src[0] )
      result = sub_1022ABA0(a2, "title", Src);
  }
  if ( *(_BYTE *)(this + 380) )
    return sub_1022ACA0(a2, "clientinsetx_override", *(_DWORD *)(this + 372));
  return result;
}
