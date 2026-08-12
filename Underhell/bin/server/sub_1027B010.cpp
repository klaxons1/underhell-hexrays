char __usercall sub_1027B010@<al>(float *a1@<ecx>, int a2@<edi>)
{
  double v3; // st7
  float v4; // eax
  char result; // al
  int v6; // edi
  int *v7; // ecx
  int *v8; // ecx
  int v9; // eax
  int v10; // eax
  int *v11; // edi
  int v12; // eax
  int v13; // eax
  int v14; // [esp+8h] [ebp-18h]
  float v15; // [esp+8h] [ebp-18h]
  float v17; // [esp+18h] [ebp-8h]
  char v18; // [esp+1Fh] [ebp-1h]

  v3 = a1[284];
  v17 = a1[284];
  v14 = (*(int (**)(void))(*(_DWORD *)a1 + 1220))();
  v4 = COERCE_FLOAT((*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 1216))(a1));
  result = sub_100D4170(a1, v3, v4, v14, 183);
  v18 = result;
  if ( result )
  {
    v6 = sub_100D1940(a1);
    if ( *(_DWORD *)(v6 + 1672) != LODWORD(v17) )
    {
      if ( *(_BYTE *)(v6 + 84) )
      {
        *(_BYTE *)(v6 + 88) |= 1u;
      }
      else
      {
        v7 = *(int **)(v6 + 24);
        if ( v7 )
          sub_100194B0(v7, 1672);
      }
      v3 = v17;
      *(float *)(v6 + 1672) = v17;
    }
    if ( *((_DWORD *)a1 + 284) != *(_DWORD *)(v6 + 1672) )
    {
      if ( *((_BYTE *)a1 + 84) )
      {
        *((_BYTE *)a1 + 88) |= 1u;
      }
      else
      {
        v8 = (int *)*((_DWORD *)a1 + 6);
        if ( v8 )
          sub_100194B0(v8, 1136);
      }
      v3 = *(float *)(v6 + 1672);
      a1[284] = *(float *)(v6 + 1672);
    }
    v9 = sub_100D1940(a1);
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v9 + 320))(v9, a2) )
    {
      v10 = sub_100D1940(a1);
      v11 = (int *)v10;
      if ( *(_BYTE *)(v10 + 2121) )
      {
        if ( *(_DWORD *)(sub_101E7EA0((_DWORD *)v10, 1) + 908) != 2 )
        {
          v12 = sub_101E7EA0(v11, 1);
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 836))(v12, 3);
          v13 = sub_101E7EA0(v11, 1);
          sub_100D18C0(v13);
          v15 = v3 + *(float *)(dword_106B31C8 + 12);
          sub_100EC4A0(v11, v15, (int)"FlashLightContext");
        }
      }
    }
    (*(void (__thiscall **)(float *, int))(*(_DWORD *)a1 + 1132))(a1, 7);
    result = v18;
    a1[350] = 0.0;
  }
  return result;
}
