int __thiscall sub_1001E3F0(_DWORD *this)
{
  int v2; // ecx
  int result; // eax

  v2 = this[906];
  if ( v2 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 132))(v2);
  nullsub_4(this);
  result = (*(int (__thiscall **)(_DWORD *))(*this + 1672))(this);
  if ( (result & 0x1000000) != 0 )
  {
    result = sub_100B8D10(this + 690);
    if ( (_BYTE)result )
      return sub_10024290(21);
  }
  return result;
}
