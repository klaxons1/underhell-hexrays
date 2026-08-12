int __thiscall sub_1027C780(_DWORD *this, int a2, float a3)
{
  int result; // eax
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // eax
  float *v9; // eax
  int v10; // eax
  double v11; // st7
  double v12; // st6
  double v13; // st7
  float v14; // [esp+28h] [ebp-48h]
  float v15; // [esp+2Ch] [ebp-44h]
  float v16; // [esp+30h] [ebp-40h]
  float v17; // [esp+30h] [ebp-40h]
  _BYTE v18[12]; // [esp+40h] [ebp-30h] BYREF
  int v19[3]; // [esp+4Ch] [ebp-24h] BYREF
  float v20; // [esp+58h] [ebp-18h] BYREF
  float v21; // [esp+5Ch] [ebp-14h]
  float v22; // [esp+60h] [ebp-10h]
  int v23; // [esp+64h] [ebp-Ch] BYREF
  float v24; // [esp+68h] [ebp-8h]
  float v25; // [esp+6Ch] [ebp-4h]
  float v26; // [esp+7Ch] [ebp+Ch]

  (*(void (__stdcall **)(int, _DWORD))(*this + 1132))(4, 0.0);
  result = sub_100D1940(this);
  if ( result )
  {
    v5 = sub_100D1940(this);
    result = sub_100D7680(v5);
    v6 = result;
    if ( result )
    {
      if ( LOBYTE(a3) )
      {
        v7 = sub_100BEF30((int)this, "muzzle");
        sub_100BCCA0(this, v7, (int)&v23, (int)v18);
        sub_10422220(v18, &v20);
      }
      else
      {
        v8 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)result + 968))(result, v18);
        v23 = *(int *)v8;
        v24 = *(float *)(v8 + 4);
        v25 = *(float *)(v8 + 8);
        if ( __RTDynamicCast(
               v6,
               0,
               (struct _s_RTTICompleteObjectLocator *)&CAI_BaseNPC `RTTI Type Descriptor',
               (int)&CNPC_Combine `RTTI Type Descriptor',
               0) )
        {
          v9 = (float *)sub_1033D530(v18);
        }
        else
        {
          result = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 368))(v6);
          if ( !result )
            return result;
          v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 368))(v6);
          v9 = (float *)(*(int (__thiscall **)(int, _BYTE *, int *, int))(*(_DWORD *)v10 + 520))(v10, v18, &v23, 1);
        }
        v11 = v9[1] - v24;
        v12 = v9[2] - v25;
        v20 = *v9 - *(float *)&v23;
        v21 = v11;
        v22 = v12;
        off_10689714();
      }
      v13 = *(float *)(dword_106D133C + 44);
      v26 = *(float *)(dword_106D12F4 + 44);
      *(float *)v19 = v20 * 1000.0;
      *(float *)&v19[1] = v21 * 1000.0;
      *(float *)&v19[2] = 1000.0 * v22;
      v16 = v13;
      v17 = sub_10134630(1.0, 0.0, 1.0, 0.5, v16);
      v15 = *(float *)(dword_106D1384 + 44);
      v14 = sub_10134630(1.0, 0.0, 1.0, 4.0, v26);
      return sub_103D5E20((int)&v23, (int)v19, v14, v15, v17, v6);
    }
  }
  return result;
}
