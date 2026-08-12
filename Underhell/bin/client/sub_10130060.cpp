int __thiscall sub_10130060(int this, unsigned __int8 *a2)
{
  int result; // eax

  result = this;
  *(_DWORD *)(this + 204) = a2;
  *(_BYTE *)(this + 224) = a2 == 0;
  if ( a2 )
    return sub_1012FD50(
             a2,
             (_DWORD *)(this + 208),
             (_DWORD *)(this + 212),
             (_DWORD *)(this + 216),
             (_DWORD *)(this + 220));
  return result;
}
