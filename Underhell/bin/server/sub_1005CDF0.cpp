void __userpurge sub_1005CDF0(_DWORD *a1@<ecx>, int a2@<edi>, int *a3)
{
  int v3; // eax
  int v5; // edi
  double v6; // st7
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edi
  int v11; // edi
  int v12; // eax
  int v13[5]; // [esp-14h] [ebp-44h] BYREF
  float v14; // [esp+0h] [ebp-30h]
  int v15; // [esp+4h] [ebp-2Ch]
  int v16; // [esp+8h] [ebp-28h]
  int *v17; // [esp+Ch] [ebp-24h]
  float v18[5]; // [esp+1Ch] [ebp-14h] BYREF
  int savedregs; // [esp+30h] [ebp+0h] BYREF

  v3 = *a3;
  if ( *a3 > 100000 )
  {
    if ( v3 != 100001 )
      goto LABEL_4;
    v8 = a1[1];
    *((_BYTE *)a1 + 18) = 1;
    if ( sub_101C5260(v8) )
    {
      v9 = sub_101C5260(a1[1]);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 284))(v9) )
      {
        v10 = a1[1];
        if ( *(_DWORD *)(sub_101C5260(v10) + 92) == *(_DWORD *)(v10 + 92) )
        {
          v11 = a1[1];
          v17 = 0;
          v18[0] = 0.0;
          v16 = v11;
          v15 = v11;
          v14 = 0.0;
          v18[3] = NAN;
          LODWORD(v18[4]) = 1;
          sub_10023360(v13, (int)v18);
          v12 = sub_101C5260(v11);
          sub_1010C6E0(v12, (int)"sethealth", v13[0], v13[1], v13[2], v13[3], v13[4], v14, v15, v16, (int)v17);
        }
      }
    }
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1 + 12))(a1, 0);
  }
  else if ( *a3 == 100000 )
  {
    sub_1005CCE0(a1);
    sub_1005C150((int)a1, (int)&savedregs, a2, (int)a1);
  }
  else
  {
    if ( v3 != 14 )
    {
LABEL_4:
      sub_1004B450(a1, (int)a3);
      return;
    }
    v5 = a1[1];
    v6 = (double)(unsigned __int16)(int)((*(float *)(v5 + 732) - 180.0) * 182.04445);
    v7 = *(_DWORD *)(v5 + 2604);
    v17 = a3;
    *(float *)(v7 + 20) = v6 * 0.0054931641;
    sub_1004B450(a1, (int)v17);
  }
}
