char __usercall sub_101B1470@<al>(int a1@<ecx>, int a2@<edi>)
{
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  const char *v7; // ecx
  const char *v8; // eax
  const char *v9; // esi
  const char *v10; // ecx
  const char *v11; // eax
  const char *v12; // esi
  int v13; // edi
  int v14; // eax
  int v16[6]; // [esp+4h] [ebp-30h] BYREF
  int v17; // [esp+1Ch] [ebp-18h]
  int v18; // [esp+20h] [ebp-14h]
  int v19; // [esp+24h] [ebp-10h]
  float v20; // [esp+28h] [ebp-Ch]
  float v21; // [esp+2Ch] [ebp-8h]
  char v22; // [esp+30h] [ebp-4h]

  *(float *)v16 = 0.0;
  *(float *)&v16[1] = 0.0;
  *(float *)&v16[2] = 0.0;
  v3 = *(_DWORD *)(a1 + 800);
  *(float *)&v16[3] = 0.0;
  *(float *)&v16[4] = 0.0;
  v18 = 0;
  *(float *)&v16[5] = 0.0;
  v17 = 0;
  v19 = 0;
  v21 = 1.0;
  v22 = 0;
  v20 = 1.0;
  if ( v3 )
  {
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 20))(v3);
    v5 = *(_DWORD *)(a1 + 800);
    v17 = v4;
    v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 24))(v5);
    (*(void (__thiscall **)(int, int *))(*(_DWORD *)a1 + 724))(a1, v16);
    return 1;
  }
  sub_101B12E0(a1, (int)v16);
  if ( !v17 && !v18 )
    return 0;
  if ( (*(unsigned __int8 (**)(void))(*(_DWORD *)v17 + 4))()
    && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v18 + 4))(v18) )
  {
    if ( *(_DWORD *)(a1 + 808) )
    {
      v7 = *(const char **)(a1 + 808);
      if ( !v7 )
        v7 = String;
    }
    else
    {
      v7 = "world";
    }
    v8 = *(const char **)(a1 + 804);
    if ( !v8 )
      v8 = String;
    v9 = *(const char **)(a1 + 260);
    if ( !v9 )
      v9 = String;
    Warning("Constraint (%s) attached to two static objects (%s and %s)!!!\n", v9, v8, v7);
    return 0;
  }
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 280))(v17)
    && (*(int (__thiscall **)(int))(*(_DWORD *)v18 + 280))(v18) )
  {
    if ( *(_DWORD *)(a1 + 808) )
    {
      v10 = *(const char **)(a1 + 808);
      if ( !v10 )
        v10 = String;
    }
    else
    {
      v10 = "world";
    }
    v11 = *(const char **)(a1 + 804);
    if ( !v11 )
      v11 = String;
    v12 = *(const char **)(a1 + 260);
    if ( !v12 )
      v12 = String;
    Warning("Constraint (%s) attached to two shadow objects (%s and %s)!!!\n", v12, v11, v10);
    return 0;
  }
  else
  {
    v13 = sub_101B0940(*(char **)(a1 + 816));
    if ( !v13 )
      v13 = v19;
    v14 = (*(int (__thiscall **)(int, int, int *))(*(_DWORD *)a1 + 728))(a1, v13, v16);
    *(_DWORD *)(a1 + 800) = v14;
    if ( v14 )
    {
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v14 + 12))(v14, a1, a2);
      if ( v13 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 4))(v13);
      (*(void (__thiscall **)(int, int *))(*(_DWORD *)a1 + 724))(a1, v16);
      return 1;
    }
    else
    {
      return 0;
    }
  }
}
