char __thiscall sub_10382800(unsigned __int16 *this, int a2)
{
  double v3; // st7
  int v4; // eax
  float v6; // [esp+2Ch] [ebp-1Ch]
  int v7; // [esp+30h] [ebp-18h] BYREF
  float v8; // [esp+34h] [ebp-14h]
  float v9; // [esp+38h] [ebp-10h]
  int v10; // [esp+3Ch] [ebp-Ch] BYREF
  float v11; // [esp+40h] [ebp-8h]
  float v12; // [esp+44h] [ebp-4h]

  if ( *(char *)(a2 + 64) >= 0 )
  {
    v7 = *((int *)this + 906);
    v8 = *((float *)this + 907);
    v9 = *((float *)this + 908);
    *(float *)&v10 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                       dword_106B31E4,
                       -500.0,
                       500.0);
    v11 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            -500.0,
            500.0);
    *(float *)&v7 = 500.0;
    v3 = -500.0;
  }
  else
  {
    *(float *)&v7 = flt_106B4F40 * -150.0;
    v8 = flt_106B4F44 * -150.0;
    v9 = -150.0 * flt_106B4F48;
    *(float *)&v10 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                       dword_106B31E4,
                       -2000.0,
                       2000.0);
    v11 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            -2000.0,
            2000.0);
    *(float *)&v7 = 2000.0;
    v3 = -2000.0;
  }
  v6 = v3;
  v12 = ((double (__thiscall *)(int, _DWORD, int))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          LODWORD(v6),
          v7);
  if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
    sub_100DAE60((int)this);
  if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
    sub_100DAE60((int)this);
  v4 = (*(int (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 24))(this);
  sub_10217520(v4, 0, (int)(this + 290), (int)(this + 352), (int)&v7, (int)&v10, 1.0, 60.0, 1, 0, 1);
  sub_100E1400(this);
  sub_103823F0(this, 0.0);
  return 1;
}
