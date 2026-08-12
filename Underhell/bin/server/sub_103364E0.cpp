bool __thiscall sub_103364E0(_DWORD *this)
{
  return ((*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 1532))(this) || (this[62] & 0x80000) != 0)
      && (*(_DWORD *)(dword_10698344 + 48)
       || !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 1532))(this)
       || sub_100CF460(this))
      && !*((_BYTE *)this + 2680)
      && this[581] != 4;
}
