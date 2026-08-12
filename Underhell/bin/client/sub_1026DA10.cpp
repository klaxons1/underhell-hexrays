int __thiscall sub_1026DA10(int *this, int a2)
{
  int v2; // edi
  int v4; // ebx
  int v6; // [esp-8h] [ebp-14h]

  v2 = a2;
  (*(void (__thiscall **)(int, int *))(*(_DWORD *)a2 + 156))(a2, this);
  v4 = sub_10269ED0(this + 58, &a2);
  v6 = this[75];
  a2 = v4;
  sub_100C2010(this + 72, v6, &a2);
  (*(void (__thiscall **)(int *, _DWORD, _DWORD))(*this + 244))(this, 0, 0);
  *((_BYTE *)this + 348) |= 4u;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 788))(v2, this[93]);
  if ( this[96] )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 816))(v2, this[96]);
  if ( (this[87] & 2) != 0 && this[97] && (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 864))(v2) )
    sub_1027D090((this[87] & 2) != 0, this[97]);
  return v4;
}
