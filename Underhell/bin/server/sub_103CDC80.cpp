int __thiscall sub_103CDC80(int *this, int a2)
{
  int v3; // edi
  int v4; // eax

  if ( a2 == 12 )
  {
    v3 = *this;
    v4 = (*(int (__thiscall **)(int *))(*this + 368))(this);
    if ( (*(unsigned __int8 (__thiscall **)(int *, int))(v3 + 1768))(this, v4) )
      return 27;
  }
  if ( *((_BYTE *)this + 3776) || a2 != 81 )
    return sub_1032F1C0(this, a2);
  return 103;
}
