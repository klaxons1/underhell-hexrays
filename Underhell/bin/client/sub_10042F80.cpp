int __thiscall sub_10042F80(_DWORD *this)
{
  _DWORD *v1; // esi
  int v2; // edi

  v1 = this;
  if ( this == (_DWORD *)dword_10407394 && (*(int (__thiscall **)(_DWORD *))(*this + 844))(this) == 4 )
  {
    v2 = (*(int (__thiscall **)(_DWORD *))(*v1 + 848))(v1);
    if ( v2 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 504))(v2) )
        v1 = (_DWORD *)sub_10008FC0(v2);
    }
  }
  return sub_1000A520(v1);
}
