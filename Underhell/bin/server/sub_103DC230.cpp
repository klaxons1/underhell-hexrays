void __thiscall sub_103DC230(unsigned __int16 *this)
{
  int v2; // edx
  int v3; // eax
  int v4; // ebx
  int *v5; // ecx
  int v6; // ebx
  int *v7; // ecx
  void (__thiscall *v8)(unsigned __int16 *); // edx
  float *v9; // eax
  double v10; // st6
  double v11; // st7
  int (__thiscall *v12)(unsigned __int16 *); // eax
  float *v13; // eax
  float v14[3]; // [esp+18h] [ebp-24h] BYREF
  float v15[3]; // [esp+24h] [ebp-18h] BYREF
  float v16; // [esp+30h] [ebp-Ch] BYREF
  float v17; // [esp+34h] [ebp-8h]
  float v18; // [esp+38h] [ebp-4h]

  (*(void (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 100))(this);
  (*(void (__thiscall **)(unsigned __int16 *, const char *))(*(_DWORD *)this + 104))(this, "models/combine_soldier.mdl");
  *((_DWORD *)this + 419) = 0;
  sub_10027A90((int)this, 0);
  v16 = 16.0;
  v17 = 16.0;
  v18 = 64.0;
  v15[0] = -16.0;
  v15[1] = -16.0;
  v15[2] = 0.0;
  sub_1025F360(this, (int)v15, (int)&v16);
  sub_10112C00((int)(this + 160), 2);
  sub_101129A0(this + 160, this[178] | 0x10);
  sub_100E0970((int)this, v2, 4, 0);
  *((_DWORD *)this + 420) = -1;
  if ( *((_DWORD *)this + 55) != 10 )
  {
    (*(void (__thiscall **)(unsigned __int16 *, _DWORD *))(*(_DWORD *)this + 464))(this, (_DWORD *)this + 55);
    *((_DWORD *)this + 55) = 10;
  }
  v3 = *((_DWORD *)this + 62) >> 19;
  *((float *)this + 421) = 0.2;
  *((_DWORD *)this + 581) = 0;
  *((_BYTE *)this + 3645) = (v3 & 1) == 0;
  sub_100204A0(this);
  sub_10020460(this, 0x20000);
  sub_10020460(this, 0x80000000);
  *((float *)this + 422) = 0.0;
  *((float *)this + 423) = 0.0;
  *((float *)this + 424) = 0.0;
  v4 = *((_DWORD *)this + 62) | 0x100;
  if ( *((_DWORD *)this + 62) != v4 )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v5 = (int *)*((_DWORD *)this + 6);
      if ( v5 )
        sub_100194B0(v5, 248);
    }
    *((_DWORD *)this + 62) = v4;
  }
  v6 = *((_DWORD *)this + 62) | 0x400;
  if ( *((_DWORD *)this + 62) != v6 )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v7 = (int *)*((_DWORD *)this + 6);
      if ( v7 )
        sub_100194B0(v7, 248);
    }
    *((_DWORD *)this + 62) = v6;
  }
  v8 = *(void (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 1164);
  *((_DWORD *)this + 928) = 0;
  *((_BYTE *)this + 3788) = 0;
  v8(this);
  if ( (*((_DWORD *)this + 62) & 0x10000) != 0 )
  {
    sub_100EAB80(this, 32);
    sub_101129A0(this + 160, this[178] | 4);
  }
  sub_10422220(this + 364, v14);
  v16 = v14[0] * 1024.0;
  v17 = v14[1] * 1024.0;
  v18 = 1024.0 * v14[2];
  v9 = sub_103D9500((float *)this, v15);
  v10 = v9[1] + v17;
  v11 = v9[2] + v18;
  *((float *)this + 907) = *v9 + v16;
  *((float *)this + 908) = v10;
  *((float *)this + 909) = v11;
  v12 = *(int (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 1868);
  *((_BYTE *)this + 3644) = 1;
  v13 = (float *)v12(this);
  sub_100756C0(v13, 0.0);
  *((float *)this + 951) = 0.0;
  *((_BYTE *)this + 3816) = 0;
  *((_BYTE *)this + 3824) = 0;
}
