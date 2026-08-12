int __thiscall sub_10038460(_DWORD *this)
{
  if ( (int)this[34] > 0 )
  {
    this[34] = 0;
    DevWarning(2, "SUB_Remove called on entity with health > 0\n");
  }
  if ( *((_BYTE *)this + 323) || (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 428))(this) )
  {
    sub_1008FB60(*((unsigned __int16 *)this + 194) | 4);
    this[78] |= 1u;
    *((_WORD *)this + 158) = 0;
  }
  return (*(int (__thiscall **)(_DWORD *))(this[2] + 4))(this + 2);
}
