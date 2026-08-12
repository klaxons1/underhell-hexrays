void __usercall sub_1031BA30(float *a1@<ecx>, int a2@<edi>)
{
  int (*v3)(void); // eax
  int v4; // eax
  int v5; // eax
  float *v6; // eax
  double v7; // st6
  double v8; // st5
  int v9; // eax
  int v10; // edi
  double v11; // st7
  double v12; // st6
  double v13; // st7
  int v14; // edx
  int *v15; // ecx
  int v16; // [esp+Ch] [ebp-1Ch]
  float v17[3]; // [esp+18h] [ebp-10h] BYREF
  float v18; // [esp+24h] [ebp-4h] BYREF

  if ( *(float *)(dword_106B31C8 + 12) < (double)a1[418] )
    return;
  v3 = *(int (**)(void))(*(_DWORD *)a1 + 368);
  if ( *((_DWORD *)a1 + 1030) != 4 )
  {
    if ( v3() )
    {
      v4 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 368))(a1);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 320))(v4) )
      {
        v5 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 368))(a1);
        v6 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)v5 + 536))(v5, v17);
        if ( v6[1] * v6[1] + *v6 * *v6 + v6[2] * v6[2] > 62500.0 )
        {
          v18 = sub_100B5040(a1) * 0.75;
          sub_100B6940((int)a1, v17);
          v7 = v17[1] - a1[906];
          v8 = v17[0] - a1[905];
          if ( v18 * v18 < v8 * v8 + v7 * v7 )
            return;
        }
      }
    }
    goto LABEL_14;
  }
  if ( !v3() )
    goto LABEL_14;
  if ( ((_DWORD)a1[63] & 0x800) != 0 )
    sub_100DAE60((int)a1);
  v16 = a2;
  v9 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 368))(a1);
  v10 = v9;
  if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
    sub_100DAE60(v9);
  v11 = *(float *)(v10 + 580) - a1[145];
  v12 = *(float *)(v10 + 584);
  a2 = v16;
  if ( v11 * v11 + (v12 - a1[146]) * (v12 - a1[146]) <= 9437184.0 )
  {
LABEL_14:
    sub_1031B7D0((int)a1, a2, 1, 0, 0);
    v13 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            0.30000001,
            0.60000002);
    v14 = *((_DWORD *)a1 + 418);
    v18 = v13 + *(float *)(dword_106B31C8 + 12) + 0.5;
    if ( v14 != LODWORD(v18) )
    {
      if ( *((_BYTE *)a1 + 84) )
      {
        *((_BYTE *)a1 + 88) |= 1u;
      }
      else
      {
        v15 = (int *)*((_DWORD *)a1 + 6);
        if ( v15 )
          sub_100194B0(v15, 1672);
      }
      a1[418] = v18;
    }
    if ( *((_DWORD *)a1 + 1030) != 4 && (int)--*((_DWORD *)a1 + 1023) <= 0 )
    {
      *((_DWORD *)a1 + 1023) = 6;
      v18 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              1.5,
              3.0);
      sub_10319020(a1 + 418, &v18);
    }
  }
}
