int __thiscall sub_10038340(_DWORD *this)
{
  if ( *((_BYTE *)this + 323) || (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 428))(this) )
  {
    sub_1008FB60(*((unsigned __int16 *)this + 194) | 4);
    this[78] |= 1u;
    *((_WORD *)this + 158) = 0;
  }
  return (*(int (__thiscall **)(_DWORD *))(this[2] + 4))(this + 2);
}
