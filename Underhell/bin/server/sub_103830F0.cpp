void __thiscall sub_103830F0(char *this, float *a2)
{
  int v3; // eax
  int v4; // eax
  double v6; // st6
  double v7; // st5
  double v8; // st7
  float v9; // [esp+0h] [ebp-1Ch]
  _BYTE v10[12]; // [esp+Ch] [ebp-10h] BYREF
  float v11; // [esp+18h] [ebp-4h]
  int v12; // [esp+24h] [ebp+8h]

  v11 = 12.0;
  v3 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 368))(this);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 320))(v3) )
  {
    v4 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 368))(this);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 1088))(v4) )
      v11 = 24.0;
  }
  if ( ((_DWORD)a2[63] & 0x800) != 0 )
    sub_100DAE60((int)a2);
  if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
    sub_100DAE60((int)this);
  v6 = *((float *)this + 146) - a2[146];
  v7 = *((float *)this + 145) - a2[145];
  v9 = v7 * v7 + v6 * v6;
  v8 = off_10689708(v9);
  if ( v8 > 60.0 )
    goto LABEL_12;
  v12 = *(int *)((*(int (__thiscall **)(float *, _BYTE *))(*(_DWORD *)a2 + 504))(a2, v10) + 8);
  if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
    sub_100DAE60((int)this);
  v8 = fabs(*((float *)this + 147) - *(float *)&v12);
  if ( v8 < v11 )
LABEL_12:
    sub_10023CB0(this, 73);
  sub_1002C160(this, v8, a2);
}
