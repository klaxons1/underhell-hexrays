int __thiscall sub_10092B40(_DWORD *this)
{
  char *v1; // esi
  int result; // eax

  v1 = (char *)(this - 913);
  (*(void (__thiscall **)(_DWORD *))(*(this - 913) + 1656))(this - 913);
  result = sub_100AFBB0("TLK_HELLO");
  if ( !(_BYTE)result )
  {
    (*(void (__thiscall **)(char *))(*(_DWORD *)v1 + 1656))(v1);
    return sub_100B0060("TLK_HELLO", 0, 1);
  }
  return result;
}
