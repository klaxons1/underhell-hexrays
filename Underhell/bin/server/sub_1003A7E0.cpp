int __thiscall sub_1003A7E0(int this)
{
  char v2; // al
  int v3; // edx
  float v4; // eax
  const char *v5; // ebx
  float *v6; // edi
  float *v7; // eax
  char *v8; // eax
  int v9; // eax
  unsigned int v10; // ecx
  int *v11; // eax
  unsigned int v12; // ecx
  const char *v13; // ecx
  const char *v14; // eax
  int v15; // eax
  int v16; // ecx
  int result; // eax
  int v18; // edi
  bool v19; // al
  int v20; // edx
  double v21; // [esp+10h] [ebp-2Ch]
  float v22; // [esp+10h] [ebp-2Ch]
  int v23[3]; // [esp+24h] [ebp-18h] BYREF
  int v24[3]; // [esp+30h] [ebp-Ch] BYREF

  v2 = *(_BYTE *)(this + 306);
  if ( v2 == 4
    || v2 == 5
    || ((*(int (__thiscall **)(int))(*(_DWORD *)this + 1672))(this) & 4) != 0
    || (*(_DWORD *)(this + 248) & 4) != 0
    || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 2032))(this)
    || sub_100233D0((_DWORD *)this) )
  {
    sub_101C73D0(0);
  }
  else
  {
    v3 = *(int *)(this + 720);
    v4 = *(float *)(this + 724);
    v24[0] = *(_DWORD *)(this + 716);
    v23[0] = v24[0];
    v24[1] = v3;
    v23[1] = v3;
    *(float *)&v24[2] = v4;
    *(float *)&v23[2] = v4 + 0.1;
    if ( !(unsigned __int8)sub_1007A2B0((int)v23, 33701899, 0.0, -2048.0, (int)v24) )
    {
      v5 = *(const char **)(this + 92);
      if ( !v5 )
        v5 = String;
      v6 = (float *)sub_10019640((_DWORD *)this);
      v21 = *((float *)sub_10019640((_DWORD *)this) + 2);
      v7 = (float *)sub_10019640((_DWORD *)this);
      Warning("NPC %s stuck in wall--level design error at (%.2f %.2f %.2f)\n", v5, *v6, v7[1], v21);
      if ( *(int *)(*(_DWORD *)(dword_106B2C88 + 28) + 48) > 1 )
        *(_DWORD *)(this + 236) |= 4u;
    }
    sub_100E10C0(v24);
  }
  v8 = *(char **)(this + 212);
  if ( v8 )
  {
    v9 = sub_1012BF20(0, v8, 0, 0, 0, 0);
    if ( v9 )
      *(_DWORD *)(this + 2608) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9);
    else
      *(_DWORD *)(this + 2608) = -1;
    v10 = *(_DWORD *)(this + 2608);
    if ( v10 != -1
      && (v11 = &off_1061BE18[4 * (*(_DWORD *)(this + 2608) & 0xFFF) + 1],
          v12 = v10 >> 12,
          off_1061BE18[4 * (*(_DWORD *)(this + 2608) & 0xFFF) + 2] == v12)
      && *v11 )
    {
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 2608) & 0xFFF) + 2] == v12 )
        v15 = *v11;
      else
        v15 = 0;
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1504))(this, v15);
    }
    else
    {
      v13 = *(const char **)(this + 212);
      if ( !v13 )
        v13 = String;
      v14 = *(const char **)(this + 92);
      if ( !v14 )
        v14 = String;
      Warning("ReadyNPC()--%s couldn't find target %s\n", v14, v13);
    }
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 1904))(this);
  sub_100EC3F0((int)sub_10039730, 0.0, 0);
  if ( *(float *)(dword_106B31C8 + 12) == flt_10690420 )
  {
    v16 = dword_1069041C;
  }
  else
  {
    v16 = 0;
    dword_1069041C = 0;
    flt_10690420 = *(float *)(dword_106B31C8 + 12);
  }
  v22 = flt_1048A738[v16 % 20] + *(float *)(dword_106B31C8 + 12);
  sub_100EC4A0(v22, 0);
  ++dword_1069041C;
  result = *(_DWORD *)(this + 248) >> 7;
  *(_DWORD *)(this + 2692) = -1;
  *(_DWORD *)(this + 2696) = 0;
  if ( (result & 1) != 0 )
  {
    v18 = *(_DWORD *)(this + 2324);
    if ( v18 != 1 )
      *(float *)(this + 2328) = *(float *)(dword_106B31C8 + 12);
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
    {
      sub_100285C0((_DWORD *)this, 0, 1);
      DevMsg(2, "Stripped\n");
    }
    v19 = *(_DWORD *)(this + 2324) != 1;
    *(_DWORD *)(this + 2324) = 1;
    if ( *(_DWORD *)(this + 2336) != 1 )
      *(_DWORD *)(this + 2336) = 1;
    if ( v19 )
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)this + 1404))(this, v18, 1);
    v20 = *(_DWORD *)(this + 908);
    *(_DWORD *)(this + 2372) = *(_DWORD *)(this + 2380);
    *(_DWORD *)(this + 2384) = v20;
    return sub_100457E0(55);
  }
  return result;
}
