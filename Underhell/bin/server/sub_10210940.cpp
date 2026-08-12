int __thiscall sub_10210940(float *this, int a2)
{
  int v3; // edi
  unsigned int v4; // eax
  int (__thiscall ***v5)(_DWORD); // eax
  unsigned int v6; // eax
  int v7; // ecx
  float v9; // [esp+14h] [ebp-14h]

  v3 = *((_DWORD *)this + 106);
  if ( v3 && !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v3 + 40))(*((_DWORD *)this + 106)) )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 60))(v3, 1);
    (*(void (__thiscall **)(float *, int))(*(_DWORD *)this + 600))(this, a2);
  }
  v4 = *(_DWORD *)(a2 + 40);
  if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 2] != v4 >> 12 )
    v5 = 0;
  else
    v5 = (int (__thiscall ***)(_DWORD))off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 1];
  sub_1020BA60((unsigned int)this, v5, a2);
  sub_101B54B0((int)this);
  (*(void (__thiscall **)(float *))(*(_DWORD *)this + 592))(this);
  sub_101C5BF0(this);
  sub_101C5EA0((int)this);
  sub_101C47B0(this);
  sub_100EAB80(this, 32);
  if ( ((_DWORD)this[64] & 0x8000000) != 0 || ((_DWORD)this[64] & 0x10000000) != 0 )
  {
    v6 = *((_DWORD *)this + 104);
    if ( v6 == -1 || off_1061BE18[4 * ((_DWORD)this[104] & 0xFFF) + 2] != v6 >> 12 )
      v7 = 0;
    else
      v7 = off_1061BE18[4 * ((_DWORD)this[104] & 0xFFF) + 1];
    sub_1025FAC0(v7);
  }
  (*(void (__thiscall **)(float *, _DWORD *, _DWORD *, _DWORD))(*(_DWORD *)this + 416))(
    this,
    (_DWORD *)this + 422,
    (_DWORD *)this + 425,
    0);
  sub_100EC3F0(this, 0, 0.0, (int)"PROP_CLEARFLAGS");
  sub_100EC3F0(this, (int)sub_1020EBA0, 0.0, 0);
  v9 = this[434] + *(float *)(dword_106B31C8 + 12);
  return sub_100EC4A0((int *)this, v9, 0);
}
