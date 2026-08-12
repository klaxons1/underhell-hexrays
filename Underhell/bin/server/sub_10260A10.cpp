void __usercall sub_10260A10(int a1@<ebx>, int a2@<edi>, int *a3, float a4, float *a5)
{
  bool v5; // zf
  int v6; // eax
  int v7; // eax
  int v8; // eax
  float *v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // eax
  double v13; // st7
  double v14; // st6
  double v15; // st5
  unsigned int v16; // eax
  double v17; // st6
  double v18; // st7
  float v19; // [esp+4h] [ebp-Ch] BYREF
  float v20; // [esp+8h] [ebp-8h]
  float v21; // [esp+Ch] [ebp-4h]

  if ( a3 && a5 )
  {
    v5 = (*(unsigned __int8 (__thiscall **)(int *, int))(*a3 + 320))(a3, a1) == 0;
    v6 = *a3;
    if ( v5 )
    {
      v10 = (*(int (__thiscall **)(int *, int))(v6 + 288))(a3, a2);
      if ( v10 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v10 + 1088))(v10) )
      {
        v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 1096))(v10);
        v9 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)v11 + 536))(v11, &v19);
      }
      else
      {
        v12 = __RTDynamicCast(
                (int)a3,
                0,
                (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                (int)&CBaseAnimating `RTTI Type Descriptor',
                0);
        if ( v12 )
          v9 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)v12 + 804))(v12, &v19);
        else
          v9 = (float *)(*(int (__thiscall **)(int *, float *))(*a3 + 536))(a3, &v19);
      }
    }
    else
    {
      v5 = (*(unsigned __int8 (__thiscall **)(int *))(v6 + 1088))(a3) == 0;
      v7 = *a3;
      if ( v5 )
      {
        v9 = (float *)(*(int (__thiscall **)(int *, float *))(v7 + 536))(a3, &v19);
      }
      else
      {
        v8 = (*(int (__thiscall **)(int *))(v7 + 1096))(a3);
        v9 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)v8 + 536))(v8, &v19);
      }
    }
    v13 = *v9;
    v14 = v9[1];
    v15 = v9[2];
    v16 = (unsigned int)a3[63] >> 11;
    v19 = v13 * a4;
    v20 = v14 * a4;
    v21 = a4 * v15;
    if ( (v16 & 1) != 0 )
      sub_100DAE60((int)a3);
    v17 = *((float *)a3 + 146) + v20;
    v18 = *((float *)a3 + 147) + v21;
    *a5 = *((float *)a3 + 145) + v19;
    a5[1] = v17;
    a5[2] = v18;
  }
}
