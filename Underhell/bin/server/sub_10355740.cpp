int __thiscall sub_10355740(_DWORD *this)
{
  int result; // eax
  int v3; // esi
  int v4; // ebx
  int v5; // ecx
  int *v6; // ecx
  float v7[3]; // [esp+8h] [ebp-1Ch] BYREF
  float v8[4]; // [esp+14h] [ebp-10h] BYREF

  result = sub_101811E0("env_citadel_energy_core", -1);
  v3 = result;
  if ( result )
  {
    this[1059] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)result + 8))(result);
    v4 = sub_100BEF30((int)this, "BellyGun");
    sub_100BCCA0(this, v4, (int)v8, (int)v7);
    sub_100E0D20(v3, v8);
    sub_100E0EA0(v3, v7);
    sub_10260750((char *)v3);
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 136))(v3);
    result = (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v3 + 140))(v3, this, v4);
    v5 = *(_DWORD *)(v3 + 800);
    v8[3] = 4.0;
    if ( v5 != COERCE_INT(4.0) )
    {
      result = v3;
      if ( *(_BYTE *)(v3 + 84) )
      {
        *(_BYTE *)(v3 + 88) |= 1u;
        *(float *)(v3 + 800) = 4.0;
      }
      else
      {
        v6 = *(int **)(v3 + 24);
        if ( v6 )
          result = sub_100194B0(v6, 800);
        *(float *)(v3 + 800) = 4.0;
      }
    }
  }
  return result;
}
