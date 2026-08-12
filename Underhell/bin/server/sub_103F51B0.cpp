int __thiscall sub_103F51B0(_DWORD *this, int a2, float a3)
{
  int result; // eax
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // eax
  float *v10; // eax
  int v11; // eax
  double v12; // st7
  double v13; // st6
  double v14; // st7
  float v15; // [esp+28h] [ebp-48h]
  float v16; // [esp+2Ch] [ebp-44h]
  float v17; // [esp+30h] [ebp-40h]
  float v18; // [esp+30h] [ebp-40h]
  int v19[3]; // [esp+40h] [ebp-30h] BYREF
  int v20[3]; // [esp+4Ch] [ebp-24h] BYREF
  float v21; // [esp+58h] [ebp-18h] BYREF
  float v22; // [esp+5Ch] [ebp-14h]
  float v23; // [esp+60h] [ebp-10h]
  int v24; // [esp+64h] [ebp-Ch] BYREF
  float v25; // [esp+68h] [ebp-8h]
  float v26; // [esp+6Ch] [ebp-4h]
  float v27; // [esp+7Ch] [ebp+Ch]

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
        sub_100BCCA0(this, v7, (int)&v24, (int)v19);
        sub_10422220(v19, &v21);
      }
      else
      {
        v8 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)result + 968))(result, v19);
        v24 = *(int *)v8;
        v25 = *(float *)(v8 + 4);
        v26 = *(float *)(v8 + 8);
        v9 = (_DWORD *)__RTDynamicCast(
                         v6,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&CAI_BaseNPC `RTTI Type Descriptor',
                         (int)&CNPC_Combine `RTTI Type Descriptor',
                         0);
        if ( v9 )
        {
          v10 = (float *)sub_1033D530(v9, v19);
        }
        else
        {
          result = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 368))(v6);
          if ( !result )
            return result;
          v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 368))(v6);
          v10 = (float *)(*(int (__thiscall **)(int, int *, int *, int))(*(_DWORD *)v11 + 520))(v11, v19, &v24, 1);
        }
        v12 = v10[1] - v25;
        v13 = v10[2] - v26;
        v21 = *v10 - *(float *)&v24;
        v22 = v12;
        v23 = v13;
        off_10689714();
      }
      v14 = *(float *)(dword_106EF28C + 44);
      v27 = *(float *)(dword_106EF244 + 44);
      *(float *)v20 = v21 * 1000.0;
      *(float *)&v20[1] = v22 * 1000.0;
      *(float *)&v20[2] = 1000.0 * v23;
      v17 = v14;
      v18 = sub_10134630(1.0, 0.0, 1.0, 0.5, v17);
      v16 = *(float *)(dword_106EF2D4 + 44);
      v15 = sub_10134630(1.0, 0.0, 1.0, 4.0, v27);
      return sub_103D5E20((float *)&v24, (float *)v20, v15, v16, v18, v6);
    }
  }
  return result;
}
