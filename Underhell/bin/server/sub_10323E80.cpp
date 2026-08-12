int __thiscall sub_10323E80(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int result; // eax
  char *v5; // eax
  float *v6; // edi
  float *v7; // ecx
  int v8; // edx
  unsigned int v9; // eax
  float v10; // eax
  char *v11; // eax
  unsigned int v12; // edi
  int *v13; // ecx
  float v14; // [esp+4h] [ebp-Ch] BYREF
  float v15; // [esp+8h] [ebp-8h]
  float v16; // [esp+Ch] [ebp-4h]

  v2 = *(_DWORD *)(this + 3732);
  if ( v2 == -1
    || (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 3732) & 0xFFF) + 1], result = v2 >> 12, v3[1] != result)
    || !*v3 )
  {
    v14 = 90.0;
    v15 = 0.0;
    v16 = 0.0;
    v5 = sub_100E3960((int)"npc_barnacle_tongue_tip", (float *)(this + 3696), &v14, 0);
    v6 = (float *)v5;
    if ( v5 )
    {
      sub_101129A0((unsigned __int16 *)v5 + 160, *((_WORD *)v5 + 178) | 4);
      sub_100E9630(v6, 0, 0, 0);
      sub_100E0970((int)v6, v8, 0, 0);
      v7 = v6;
    }
    else
    {
      v7 = 0;
    }
    *(_DWORD *)(this + 3732) = v7 ? *(_DWORD *)(*(int (__thiscall **)(float *))(*(_DWORD *)v7 + 8))(v7) : -1;
    v9 = *(_DWORD *)(this + 3732);
    v14 = 0.0;
    v15 = 0.0;
    v16 = 0.0;
    if ( v9 == -1 || off_1061BE18[4 * (v9 & 0xFFF) + 2] != v9 >> 12 )
      v10 = 0.0;
    else
      v10 = *(float *)&off_1061BE18[4 * (v9 & 0xFFF) + 1];
    v11 = sub_10322A20(this, v10, (float *)(this + 3708), &v14);
    *(_DWORD *)(this + 3736) = v11 ? *(_DWORD *)(*(int (__thiscall **)(char *))(*(_DWORD *)v11 + 8))(v11) : -1;
    *(_DWORD *)(this + 9896) = sub_100BEF30(this, "StrikeHeadAttach");
    result = *(_DWORD *)(this + 248);
    v12 = result & 0xFFFDFFFF;
    if ( result != (result & 0xFFFDFFFF) )
    {
      result = this;
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *(_DWORD *)(this + 248) = v12;
      }
      else
      {
        v13 = *(int **)(this + 24);
        if ( v13 )
          result = sub_100194B0(v13, 248);
        *(_DWORD *)(this + 248) = v12;
      }
    }
  }
  return result;
}
