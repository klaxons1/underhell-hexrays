char __thiscall sub_10044900(_DWORD *this, char a2, float a3, float a4)
{
  _DWORD *v5; // edi
  int v6; // eax
  char result; // al
  int v8; // ecx
  unsigned int v9; // eax
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  _DWORD v14[12]; // [esp+18h] [ebp-48h] BYREF
  _BYTE v15[12]; // [esp+48h] [ebp-18h] BYREF
  int v16; // [esp+54h] [ebp-Ch] BYREF
  float v17; // [esp+58h] [ebp-8h]
  float v18; // [esp+5Ch] [ebp-4h]

  v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
  if ( !v5 )
    v5 = this;
  v17 = flt_10689734;
  v16 = LODWORD(flt_10689730);
  v18 = flt_10689738;
  sub_10044830(this, 0.0);
  if ( a2 )
  {
    if ( 3.4028235e38 == a4 )
      a4 = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*this + 1948))(this);
    if ( (v5[63] & 0x800) != 0 )
      sub_100DAE60(v5);
    v6 = (*(int (__thiscall **)(_DWORD *, _BYTE *))(*v5 + 504))(v5, v15);
    if ( !(unsigned __int8)sub_100B3FD0((int)(v5 + 145), v6, a3, a4, (int)&v16) )
      return 0;
  }
  else
  {
    result = (*(int (__thiscall **)(_DWORD *, _DWORD *, int *))(*this + 1924))(this, v5, &v16);
    if ( !result )
      return result;
  }
  *(float *)&v14[8] = -2.0;
  v14[1] = v16;
  *(float *)&v14[9] = -1.0;
  *(float *)&v14[2] = v17;
  v8 = this[647];
  *(float *)&v14[3] = v18;
  *(float *)&v14[11] = flt_10601D4C;
  v14[0] = 7;
  v14[4] = -1;
  v14[5] = 11;
  v14[6] = -1;
  v14[7] = -1;
  v14[10] = 0;
  if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)v8 + 20))(v8, v14, 0) )
    return 0;
  v9 = this[722];
  if ( v9 != -1 && off_1061BE18[4 * (this[722] & 0xFFF) + 2] == v9 >> 12 )
  {
    if ( off_1061BE18[4 * (this[722] & 0xFFF) + 1] )
    {
      v10 = *this;
      v11 = sub_1002A5B0(this);
      v12 = (*(int (__thiscall **)(_DWORD *, int))(v10 + 2068))(this, v11);
      sub_1007DE40(v12);
      sub_1002A5B0(this);
      v13 = sub_100713E0(v15);
      sub_1007DF40(v13);
    }
  }
  return 1;
}
