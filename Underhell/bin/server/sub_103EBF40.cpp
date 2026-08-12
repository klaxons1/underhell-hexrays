int __thiscall sub_103EBF40(int this)
{
  int result; // eax
  _BYTE *v3; // edi
  int v4; // eax
  double v5; // st7
  int v6; // eax
  _BYTE v7[12]; // [esp+8h] [ebp-24h] BYREF
  _BYTE v8[8]; // [esp+14h] [ebp-18h] BYREF
  float v9; // [esp+1Ch] [ebp-10h]
  _BYTE v10[8]; // [esp+20h] [ebp-Ch] BYREF
  float v11; // [esp+28h] [ebp-4h]

  result = (**(int (__thiscall ***)(int))(this + 1484))(this + 1484);
  v3 = (_BYTE *)result;
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 320))(result);
    if ( (_BYTE)result )
    {
      if ( *(_BYTE *)(this + 1690) )
        v4 = sub_100BEF30(this, "vehicle_gunner_eyes");
      else
        v4 = sub_100BEF30(this, "vehicle_driver_eyes");
      sub_100BCCA0((void *)this, v4, (int)v10, (int)v7);
      sub_104222B0(v7, 0, 0, v8);
      v5 = v9;
      if ( v9 < 0.0 )
      {
        v5 = 0.0;
        v9 = 0.0;
      }
      v11 = v5 * *(float *)(dword_106B7614 + 44) + v11;
      result = (**(int (__thiscall ***)(int, _BYTE *, _DWORD))dword_106B31F4)(dword_106B31F4, v10, 0);
      if ( (result & 0x4030) != 0 )
      {
        if ( v3[447] != 3 )
        {
          result = (*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)v3 + 672))(v3, v3 + 447);
          v3[447] = 3;
        }
      }
      else if ( *(_BYTE *)(this + 1916) )
      {
        if ( v3[447] != 2 )
        {
          result = (*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)v3 + 672))(v3, v3 + 447);
          v3[447] = 2;
        }
      }
      else
      {
        v6 = sub_100BEF30(this, "vehicle_feet_passenger0");
        sub_100BCCA0((void *)this, v6, (int)v10, (int)v7);
        if ( ((**(int (__thiscall ***)(int, _BYTE *, _DWORD))dword_106B31F4)(dword_106B31F4, v10, 0) & 0x4030) != 0 )
          return sub_100DCD50(v3, 1);
        else
          return sub_100DCD50(v3, 0);
      }
    }
  }
  return result;
}
