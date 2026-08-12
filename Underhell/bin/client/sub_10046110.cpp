int __thiscall sub_10046110(_DWORD *this)
{
  if ( (*(int (__thiscall **)(int *))(*off_103ED0D8 + 132))(off_103ED0D8)
    || byte_10407398
    || (unsigned __int8)sub_101BC880() && (unsigned __int8)sub_101BC9A0()
    || (_DWORD *)dword_10407394 != this )
  {
    return (*(int (__thiscall **)(_DWORD *))(*this + 788))(this);
  }
  else
  {
    return sub_10045780(this, 0);
  }
}
