char __thiscall sub_10098560(_DWORD *this, int a2, _DWORD *a3, char a4)
{
  if ( a2 )
    this[1096] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    this[1096] = -1;
  if ( a4 && sub_10098230(this, "TLK_ANSWER_HELLO", 0, a2, a3) )
    return 1;
  else
    return sub_10098230(this, "TLK_ANSWER", 0, a2, a3);
}
