int __thiscall sub_10400870(int this, int a2, float *a3, float *a4)
{
  int v5; // eax
  int v6; // eax
  double v7; // st7
  int result; // eax
  float *v9; // [esp-Ch] [ebp-64h]
  _DWORD v10[10]; // [esp+4h] [ebp-54h] BYREF
  int v11; // [esp+2Ch] [ebp-2Ch]
  int v12; // [esp+30h] [ebp-28h]
  float v13; // [esp+38h] [ebp-20h]
  int v14; // [esp+44h] [ebp-14h]
  float v15; // [esp+54h] [ebp-4h]

  v15 = 1.0;
  if ( *(char **)(a2 + 92) == "func_breakable" || sub_100D6240((_DWORD *)a2, "func_breakable") )
  {
    v5 = __RTDynamicCast(
           a2,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CBreakable `RTTI Type Descriptor',
           0);
    if ( v5 )
    {
      if ( !*(_DWORD *)(v5 + 812) )
        v15 = *(float *)(dword_106F00AC + 44);
    }
  }
  sub_10247EC0(v10);
  v6 = sub_100D1940((_DWORD *)this);
  if ( v6 )
    v12 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6);
  else
    v12 = -1;
  if ( this )
    v11 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 8))(this);
  else
    v11 = -1;
  v13 = v15;
  *(float *)&v10[1] = *a3;
  *(float *)&v10[2] = a3[1];
  *(float *)&v10[3] = a3[2];
  v7 = a4[3];
  v14 = 8388609;
  *(float *)&v10[4] = v7;
  *(float *)&v10[5] = a4[4];
  *(float *)&v10[6] = a4[5];
  sub_100E8760((void *)a2, (int)v10, (int)a3, (int)a4);
  sub_10248230();
  sub_103FF610((_DWORD *)this, *(float *)&a2);
  *(_DWORD *)(this + 9828) = 4;
  v9 = a4 + 3;
  if ( *(_BYTE *)(dword_106B3CDC + 12) == 1 )
    sub_103FF0B0((_DWORD *)this, 1, (int)(a4 + 3), v9);
  else
    sub_103FEDE0((_DWORD *)this, v9);
  sub_103FA5D0((_DWORD *)this);
  result = (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 944))(this, 182);
  *(_DWORD *)(this + 1396) = 1;
  *(float *)(this + 1420) = *(float *)(dword_106B31C8 + 12) + 0.5;
  *(float *)(this + 1400) = *(float *)(dword_106B31C8 + 12) + 0.25;
  return result;
}
