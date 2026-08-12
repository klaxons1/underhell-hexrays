int __thiscall sub_10307D10(int this)
{
  int v2; // edx
  int v3; // eax
  int v4; // eax
  int *v5; // ecx
  double v6; // st7
  int result; // eax
  int v8; // [esp+10h] [ebp-34h]
  _BYTE v9[12]; // [esp+28h] [ebp-1Ch] BYREF
  _BYTE v10[12]; // [esp+34h] [ebp-10h] BYREF
  float v11; // [esp+40h] [ebp-4h]

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  j_nullsub_4((void *)this);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "models/antlion_grub.mdl");
  sub_10307A80(this);
  sub_10112C00(this + 320, 2);
  sub_101129A0((unsigned __int16 *)(this + 320), 8);
  sub_100E0970(this, v2, 0, 0);
  sub_100EBE30(this, 0);
  sub_100EAB80((_DWORD *)this, 16);
  sub_10112D90((unsigned __int16 *)(this + 320), 1, 1.0);
  *(_DWORD *)(this + 196) = sub_10307160;
  if ( *(_DWORD *)(this + 220) != 1 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *(_DWORD *)(this + 220) = 1;
  }
  if ( *(_BYTE *)(this + 225) != 2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
    *(_BYTE *)(this + 225) = 2;
  }
  if ( (*(_BYTE *)(this + 248) & 1) == 0 )
    sub_10306680(this);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 320) + 8))(this + 320);
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 320) + 4))(this + 320);
  sub_10425450(this + 500, v3, v8, v9, v10);
  sub_1025F360((_DWORD *)this, (int)v9, (int)v10);
  v4 = sub_100BDCE0(this, 1);
  sub_100C1170(this, v4);
  v11 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          0.0,
          1.0);
  if ( *(_DWORD *)(this + 904) != LODWORD(v11) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        sub_100194B0(v5, 904);
    }
    *(float *)(this + 904) = v11;
  }
  sub_100C2AB0(this);
  *(float *)(this + 1128) = 0.0;
  *(_DWORD *)(this + 1144) = 0;
  v6 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         4.0,
         8.0);
  result = dword_106B31C8;
  *(float *)(this + 1132) = v6 + *(float *)(dword_106B31C8 + 12);
  return result;
}
