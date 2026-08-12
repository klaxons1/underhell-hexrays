int __thiscall sub_10126D70(_DWORD *this)
{
  int v1; // eax

  v1 = this[1];
  if ( v1 )
    return *(_DWORD *)(v1 + 20);
  else
    return *(_DWORD *)(*this + 188);
}
