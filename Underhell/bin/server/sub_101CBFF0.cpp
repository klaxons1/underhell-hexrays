int __thiscall sub_101CBFF0(_DWORD *this)
{
  int v2; // eax
  int result; // eax
  int v4; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // [esp-8h] [ebp-10h]

  v2 = this[106];
  *((_BYTE *)this + 1128) = 1;
  this[289] = v2;
  this[291] = -1;
  *((float *)this + 286) = 0.0;
  *((float *)this + 287) = 0.0;
  *((float *)this + 288) = 0.0;
  result = sub_100C1080((int)this);
  if ( this[283] )
  {
    v4 = *(_DWORD *)dword_106B31F0;
    v5 = (*(int (__thiscall **)(_DWORD *))(*this + 24))(this);
    v7 = (*(int (__thiscall **)(_DWORD *, int))(*this + 24))(this, v5);
    v6 = (*(int (__thiscall **)(int))(v4 + 16))(dword_106B31F0);
    sub_10217DF0(this + 283, v6, v7);
    result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 596))(this, this[106]);
    if ( *((_BYTE *)this + 1866) )
      return sub_101CB850((int)this);
  }
  return result;
}
