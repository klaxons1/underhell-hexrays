int __thiscall sub_1001E570(_DWORD *this, int a2)
{
  _BYTE *v3; // esi
  int (__thiscall *v4)(_BYTE *, int); // edx
  int result; // eax

  if ( ((*(int (__thiscall **)(_DWORD *))(*this + 1672))(this) & 0x1000000) != 0 )
  {
    if ( (unsigned __int8)sub_100B8D10(this + 690) )
    {
      return (*(int (__thiscall **)(_DWORD *, const char *))(*this + 1312))(this, "Shot regulator in rest interval");
    }
    else if ( (unsigned __int8)sub_100B8CF0(this + 690) )
    {
      (*(void (__thiscall **)(_DWORD *))(*this + 1896))(this);
      return sub_10043E90(17);
    }
    else
    {
      return sub_10043E90(76);
    }
  }
  else
  {
    v3 = (_BYTE *)this[906];
    if ( !v3 )
      return sub_10046510((int)this, a2);
    v4 = *(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)v3 + 108);
    v3[8] = 1;
    result = v4(v3, a2);
    if ( !v3[8] )
      return sub_10046510((int)this, a2);
  }
  return result;
}
