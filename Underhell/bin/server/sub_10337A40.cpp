float *__thiscall sub_10337A40(_DWORD *this, float *a2, float *a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // edi
  double v7; // st7
  double v8; // st6
  double v9; // st7
  int v10; // eax
  float *result; // eax
  float v12; // ecx
  float v13; // edx
  float v14; // edx
  float v15; // ecx
  char v16[44]; // [esp+20h] [ebp-88h] BYREF
  float v17; // [esp+4Ch] [ebp-5Ch]
  int v18; // [esp+6Ch] [ebp-3Ch]
  float v19[4]; // [esp+74h] [ebp-34h]
  float v20[2]; // [esp+84h] [ebp-24h] BYREF
  float v21; // [esp+8Ch] [ebp-1Ch]
  float v22; // [esp+90h] [ebp-18h] BYREF
  float v23; // [esp+94h] [ebp-14h]
  float v24; // [esp+98h] [ebp-10h]
  float v25; // [esp+9Ch] [ebp-Ch] BYREF
  float v26; // [esp+A0h] [ebp-8h]
  float v27; // [esp+A4h] [ebp-4h]
  int savedregs; // [esp+A8h] [ebp+0h] BYREF

  sub_10394380(&v22, a3);
  v4 = sub_100CF460(this);
  if ( !__RTDynamicCast(
          v4,
          0,
          (struct _s_RTTICompleteObjectLocator *)&CBaseCombatWeapon `RTTI Type Descriptor',
          (int)&CWeaponRPG `RTTI Type Descriptor',
          0)
    || !(*(int (__thiscall **)(_DWORD *))(*this + 368))(this) )
  {
    goto LABEL_12;
  }
  v5 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
  if ( *(char **)(v5 + 92) != "npc_combinegunship" && !sub_100D6240((_DWORD *)v5, "npc_combinegunship") )
  {
    sub_10403D80(&v22);
LABEL_12:
    result = a2;
    v14 = v23;
    *a2 = v22;
    v15 = v24;
    a2[1] = v14;
    a2[2] = v15;
    return result;
  }
  (*(void (__thiscall **)(_DWORD *, _DWORD, float *, _DWORD))(*this + 528))(this, 0, v20, 0);
  v21 = 0.0;
  v6 = 0;
  v19[0] = 512.0;
  v19[1] = -512.0;
  v19[2] = 128.0;
  v19[3] = -128.0;
  while ( 1 )
  {
    v7 = v19[v6] * v20[1];
    v8 = v19[v6] * v21;
    v25 = v20[0] * v19[v6] + v22;
    v26 = v7 + v23;
    v27 = v8 + v24;
    v9 = RandomFloat(-512.0, 512.0);
    v27 = v9 + v27;
    sub_1002A5F0((int)&savedregs, (int)this, a3, &v25, 1174421507, (int)this, 0, (int)v16);
    if ( 1.0 == v17 )
    {
      v10 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
      if ( v18 != v10 )
        break;
    }
    if ( (unsigned int)++v6 >= 4 )
      goto LABEL_12;
  }
  sub_10403D80(&v25);
  result = a2;
  v12 = v26;
  *a2 = v25;
  v13 = v27;
  a2[1] = v12;
  a2[2] = v13;
  return result;
}
