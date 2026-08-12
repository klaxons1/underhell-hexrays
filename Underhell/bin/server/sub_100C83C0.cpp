int __thiscall sub_100C83C0(int this)
{
  int v2; // edi
  int v3; // ebx
  float v4; // edx
  float v5; // eax
  int v6; // esi
  _DWORD v8[272]; // [esp+Ch] [ebp-470h] BYREF
  _BYTE v9[20]; // [esp+44Ch] [ebp-30h] BYREF
  float v10[3]; // [esp+460h] [ebp-1Ch] BYREF
  int v11; // [esp+46Ch] [ebp-10h]
  float v12[3]; // [esp+470h] [ebp-Ch] BYREF

  v2 = 0;
  v3 = sub_10261B20();
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v4 = *(float *)(this + 584);
  v5 = *(float *)(this + 588);
  v12[0] = *(float *)(this + 580);
  v10[0] = v12[0] + 100.0;
  v10[1] = v4 + 100.0;
  v10[2] = v5 + 100.0;
  v12[0] = v12[0] - 100.0;
  v12[1] = v4 - 100.0;
  v12[2] = v5 - 100.0;
  sub_1025F990(v8, 256, 0);
  v6 = 0;
  v11 = sub_1025F9C0(v12, v10, v9);
  if ( v11 <= 0 )
    return 0;
  do
  {
    if ( v8[v6] && (!v3 || (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 876))(v3, v8[v6])) )
    {
      if ( v2 >= 16 )
        break;
      if ( *(char **)(v8[v6] + 92) == "prop_dynamic"
        || (unsigned __int8)sub_100D6240("prop_dynamic")
        || *(char **)(v8[v6] + 92) == "prop_physics"
        || (unsigned __int8)sub_100D6240("prop_physics")
        || *(char **)(v8[v6] + 92) == "physics_prop"
        || (unsigned __int8)sub_100D6240("physics_prop") )
      {
        v8[v2++ + 256] = v8[v6];
      }
    }
    ++v6;
  }
  while ( v6 < v11 );
  if ( v2 )
    return v8[(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, v2 - 1) + 256];
  else
    return 0;
}
