bool __thiscall sub_1013DE20(_BYTE *this, int a2, _DWORD *a3)
{
  if ( !a2 || !a3 )
    return 0;
  if ( (this[248] & 1) != 0 && a3 == (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 368))(a2)
    || !sub_1013D9F0((int)this, a3) )
  {
    return 1;
  }
  return sub_1013DAA0((int)this, a2, (int)a3) && sub_1013D8B0((int)this, a2, (int)a3) != 0;
}
