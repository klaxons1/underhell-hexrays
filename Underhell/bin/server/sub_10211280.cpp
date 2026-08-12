char __thiscall sub_10211280(_BYTE *this, int a2, int a3)
{
  float *v4; // esi
  _BYTE *v5; // eax
  int v6; // ebx
  int v7; // ebx
  int *v8; // ecx
  float v10; // [esp+4h] [ebp-14h]
  float v11; // [esp+24h] [ebp+Ch]

  v4 = (float *)(this - 1124);
  if ( a3 )
  {
    v10 = *(float *)(dword_106B31C8 + 12) + 2.0;
    sub_100EC3F0((_DWORD *)this - 281, (int)sub_1020B8C0, v10, off_10642FA0);
    if ( a3 == 1 )
      (*(void (__thiscall **)(float *))(*(_DWORD *)v4 + 840))(v4);
  }
  else
  {
    sub_1020B850((int)(this - 1124));
  }
  v11 = *(float *)(dword_106B31C8 + 12);
  if ( a2 )
    v4[322] = *(float *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    v4[322] = NAN;
  v4[323] = v11;
  this[174] = sub_100E88D0(v4);
  sub_100E88A0(v4, 0);
  if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int))(*((_DWORD *)this - 1) + 92))(this - 4, 11) )
    sub_1020F790((int)v4, 90.0);
  LOBYTE(v5) = (*(int (__thiscall **)(_BYTE *, int))(*((_DWORD *)this - 1) + 92))(this - 4, 14);
  if ( (_BYTE)v5 )
  {
    v6 = *((_DWORD *)this - 69);
    LOBYTE(v5) = sub_1020FA00(v4, 360.0);
    v7 = v6 + 1;
    if ( *((_DWORD *)this - 69) != v7 )
    {
      v5 = this - 1124;
      if ( *(this - 1040) )
      {
        v5[88] |= 1u;
        *((_DWORD *)this - 69) = v7;
      }
      else
      {
        v8 = (int *)*((_DWORD *)v5 + 6);
        if ( v8 )
          LOBYTE(v5) = sub_100194B0(v8, 848);
        *((_DWORD *)this - 69) = v7;
      }
    }
  }
  return (char)v5;
}
