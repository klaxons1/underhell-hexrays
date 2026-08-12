void __thiscall sub_10345EB0(unsigned __int16 *this)
{
  int *v2; // eax
  int v3; // edx
  int v4; // eax
  int v5; // edx
  int *v6; // ecx
  int v7; // eax
  float v8; // edx
  float v9; // eax
  double v10; // st6
  double v11; // st7
  float *v12; // eax
  float *v13; // eax
  float v14[3]; // [esp+18h] [ebp-28h] BYREF
  float v15; // [esp+24h] [ebp-1Ch] BYREF
  float v16; // [esp+28h] [ebp-18h]
  float v17; // [esp+2Ch] [ebp-14h]
  float v18; // [esp+30h] [ebp-10h] BYREF
  float v19; // [esp+34h] [ebp-Ch]
  float v20; // [esp+38h] [ebp-8h]
  int v21; // [esp+3Ch] [ebp-4h]

  (*(void (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 100))(this);
  (*(void (__thiscall **)(unsigned __int16 *, const char *))(*(_DWORD *)this + 104))(this, "models/combine_soldier.mdl");
  sub_10345580((int)this);
  sub_103459C0((int)this);
  v2 = sub_102D9B20();
  *((_DWORD *)this + 905) = sub_100B9D10(v2, "CombineHeavyCannon");
  *((_DWORD *)this + 419) = 0;
  sub_10027A90((int)this, 0);
  v15 = 16.0;
  v16 = 16.0;
  v17 = 64.0;
  v18 = -16.0;
  v19 = -16.0;
  v20 = 0.0;
  sub_1025F360(this, (int)&v18, (int)&v15);
  sub_10112C00((int)(this + 160), 2);
  sub_101129A0(this + 160, this[178] | 0x10);
  sub_100E0970((int)this, v3, 4, 0);
  *((_DWORD *)this + 420) = -1;
  if ( *((_DWORD *)this + 55) != 10 )
  {
    (*(void (__thiscall **)(unsigned __int16 *, _DWORD *))(*(_DWORD *)this + 464))(this, (_DWORD *)this + 55);
    *((_DWORD *)this + 55) = 10;
  }
  v4 = *((_DWORD *)this + 62) >> 19;
  *((float *)this + 421) = 0.70710677;
  *((_DWORD *)this + 581) = 0;
  *((_BYTE *)this + 3668) = (v4 & 1) == 0;
  sub_100204A0(this);
  sub_10020460(this, -2147352576);
  *((float *)this + 422) = 0.0;
  *((float *)this + 423) = 0.0;
  *((float *)this + 424) = 0.0;
  v5 = *((_DWORD *)this + 62) | 0x500;
  v21 = v5;
  if ( *((_DWORD *)this + 62) != v5 )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v6 = (int *)*((_DWORD *)this + 6);
      if ( v6 )
      {
        sub_100194B0(v6, 248);
        v5 = v21;
      }
    }
    *((_DWORD *)this + 62) = v5;
  }
  (*(void (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 1164))(this);
  sub_1001FBB0(this, *((float *)this + 923));
  sub_100EAB80(this, 32);
  sub_101129A0(this + 160, this[178] | 4);
  sub_10422220(this + 364, v14);
  v7 = *((_DWORD *)this + 63) >> 11;
  v15 = v14[0] * 1024.0;
  v16 = v14[1] * 1024.0;
  v17 = 1024.0 * v14[2];
  if ( (v7 & 1) != 0 )
    sub_100DAE60((int)this);
  v8 = *((float *)this + 146);
  v9 = *((float *)this + 147);
  v18 = *((float *)this + 145);
  v19 = v8;
  v20 = v9;
  v10 = v8 + v16;
  v11 = v9 + v17;
  *((float *)this + 907) = v18 + v15;
  *((float *)this + 908) = v10;
  *((float *)this + 909) = v11;
  v12 = (float *)(*(int (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 1868))(this);
  sub_100756C0(v12, 0.0);
  v13 = (float *)(*(int (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 1868))(this);
  sub_100756F0(v13, 2.0);
  *((float *)this + 921) = 0.0;
}
