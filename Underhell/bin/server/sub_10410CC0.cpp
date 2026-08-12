void __thiscall sub_10410CC0(unsigned __int16 *this)
{
  int v2; // edx
  int v3; // ecx
  int *v4; // ecx
  int v5; // ecx
  int *v6; // ecx
  int v7; // eax
  float v8[3]; // [esp+8h] [ebp-1Ch] BYREF
  float v9[3]; // [esp+14h] [ebp-10h] BYREF
  float v10; // [esp+20h] [ebp-4h]

  (*(void (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 100))(this);
  sub_10112C00((int)(this + 160), 2);
  sub_101129A0(this + 160, this[178] | 4);
  sub_100E0970((int)this, v2, 0, 0);
  sub_100EA940((int *)this, 0x2000000);
  sub_100EAB80(this, 32);
  v9[0] = 0.0;
  v9[1] = 0.0;
  v9[2] = 0.0;
  v8[0] = 0.0;
  v8[1] = 0.0;
  v8[2] = 0.0;
  sub_1025F360(this, (int)v8, (int)v9);
  v3 = *((_DWORD *)this + 532);
  v10 = *(float *)(dword_106F101C + 44);
  if ( v3 != LODWORD(v10) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v4 = (int *)*((_DWORD *)this + 6);
      if ( v4 )
        sub_100194B0(v4, 2128);
    }
    *((float *)this + 532) = v10;
  }
  v5 = *((_DWORD *)this + 528);
  v10 = *(float *)(dword_106F1064 + 44);
  if ( v5 != LODWORD(v10) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v6 = (int *)*((_DWORD *)this + 6);
      if ( v6 )
        sub_100194B0(v6, 2112);
    }
    *((float *)this + 528) = v10;
  }
  if ( *((_BYTE *)this + 225) != 2 )
  {
    (*(void (__thiscall **)(unsigned __int16 *, int))(*(_DWORD *)this + 480))(this, (int)this + 225);
    *((_BYTE *)this + 225) = 2;
  }
  if ( *((_DWORD *)this + 55) != 200 )
  {
    (*(void (__thiscall **)(unsigned __int16 *, unsigned __int16 *))(*(_DWORD *)this + 464))(this, this + 110);
    *((_DWORD *)this + 55) = 200;
  }
  *((float *)this + 138) = 0.0000099999997;
  v7 = *((_DWORD *)this + 139);
  v10 = 0.80000001;
  if ( v7 != COERCE_INT(0.80000001) )
  {
    (*(void (__thiscall **)(unsigned __int16 *, unsigned __int16 *))(*(_DWORD *)this + 696))(this, this + 278);
    *((float *)this + 139) = 0.80000001;
  }
  sub_100C1170((int)this, 1);
}
