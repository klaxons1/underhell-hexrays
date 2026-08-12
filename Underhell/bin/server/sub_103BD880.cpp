char __usercall sub_103BD880@<al>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  int v4; // edi
  float v5; // eax
  int v6; // edi
  int (__thiscall *v7)(int, int *, _DWORD); // edx
  int v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  bool v13; // bl
  double v14; // st7
  int v15; // edx
  int v16; // eax
  float *v17; // eax
  int v18; // eax
  float *v19; // eax
  int v20; // eax
  float *v21; // eax
  _DWORD *v22; // ecx
  float *v23; // eax
  double v24; // st7
  float v26; // [esp+1Ch] [ebp-88h]
  int v27[3]; // [esp+28h] [ebp-7Ch] BYREF
  int v28[3]; // [esp+34h] [ebp-70h] BYREF
  float v29[3]; // [esp+40h] [ebp-64h] BYREF
  int v30; // [esp+4Ch] [ebp-58h] BYREF
  float v31; // [esp+50h] [ebp-54h]
  float v32; // [esp+54h] [ebp-50h]
  int v33; // [esp+58h] [ebp-4Ch] BYREF
  float v34; // [esp+5Ch] [ebp-48h]
  float v35; // [esp+60h] [ebp-44h]
  float v36[3]; // [esp+64h] [ebp-40h] BYREF
  float v37[3]; // [esp+70h] [ebp-34h] BYREF
  float v38; // [esp+7Ch] [ebp-28h]
  float v39; // [esp+80h] [ebp-24h]
  float v40; // [esp+84h] [ebp-20h]
  int v41; // [esp+88h] [ebp-1Ch] BYREF
  float v42; // [esp+8Ch] [ebp-18h]
  float v43; // [esp+90h] [ebp-14h]
  int v44; // [esp+94h] [ebp-10h] BYREF
  float v45; // [esp+98h] [ebp-Ch]
  float v46; // [esp+9Ch] [ebp-8h]
  float v47; // [esp+A0h] [ebp-4h]

  sub_10025DD0((_DWORD *)a1);
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 728))(a1);
  v26 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)a1, v26, 0);
  if ( *(_BYTE *)(a1 + 3629) && (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1) )
  {
    (*(void (__thiscall **)(int, int *, int, int))(*(_DWORD *)a1 + 504))(a1, &v44, a3, a2);
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
    if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
      sub_100DAE60(v4);
    v41 = *(int *)(v4 + 580);
    v42 = *(float *)(v4 + 584);
    v5 = *(float *)(v4 + 588);
    v6 = *(_DWORD *)a1;
    v7 = *(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)a1 + 368);
    v43 = v5;
    v8 = v7(a1, &v41, 0);
    (*(void (__thiscall **)(int, int))(v6 + 1876))(a1, v8);
    v9 = *(_DWORD *)a1;
    v10 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
    v13 = 0;
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(v9 + 876))(a1, v10) )
    {
      v9 = *(_DWORD *)a1;
      v11 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 368))(a1, 16449, 0);
      if ( (*(unsigned __int8 (__thiscall **)(int, int))(v9 + 548))(a1, v11) )
      {
        v12 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v12 + 264))(v12) )
          v13 = 1;
      }
    }
    v38 = *(float *)&v41 - *(float *)&v44;
    v39 = v42 - v45;
    v40 = v43 - v46;
    v14 = off_10689714();
    v15 = *(_DWORD *)a1;
    v47 = v14;
    v16 = (*(int (__thiscall **)(int))(v15 + 368))(a1);
    v17 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v16 + 576))(v16);
    v37[0] = *v17 - *(float *)&v44;
    v37[1] = v17[1] - v45;
    v37[2] = v17[2] - v46;
    off_10689714();
    sub_10422540(v37, v29);
    if ( *(_DWORD *)(dword_106EBC14 + 48) )
    {
      *(float *)&v33 = 2.0;
      v34 = 2.0;
      v35 = 2.0;
      *(float *)&v30 = -2.0;
      v31 = -2.0;
      v32 = -2.0;
      sub_1011C000((float *)&v44, (float *)&v30, (float *)&v33, 0, 255, 0, 0, 0.050000001);
      v18 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
      *(float *)&v30 = 2.0;
      v31 = 2.0;
      v32 = 2.0;
      *(float *)&v33 = -2.0;
      v34 = -2.0;
      v35 = -2.0;
      v19 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v18 + 576))(v18);
      sub_1011C000(v19, (float *)&v33, (float *)&v30, 0, 255, 0, 0, 0.050000001);
      v20 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
      v21 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v20 + 576))(v20);
      sub_1011BC50((float *)&v44, v21, 0, 255, 0, 0, 0.050000001);
      *(float *)&v30 = 2.0;
      v31 = 2.0;
      v32 = 2.0;
      *(float *)&v33 = -2.0;
      v34 = -2.0;
      v35 = -2.0;
      sub_1011C000((float *)&v44, (float *)&v33, (float *)&v30, 0, 255, 0, 0, 0.050000001);
      *(float *)&v30 = 2.0;
      v31 = 2.0;
      v32 = 2.0;
      *(float *)&v33 = -2.0;
      v34 = -2.0;
      v35 = -2.0;
      sub_1011C000((float *)&v41, (float *)&v33, (float *)&v30, 0, 255, 0, 0, 0.050000001);
      sub_1011BC50((float *)&v44, (float *)&v41, 0, 255, 0, 0, 0.050000001);
    }
    if ( !v13 || v47 > 1500.0 )
    {
      if ( 0.0 == *(float *)(a1 + 3636) )
      {
        if ( *(float *)(a1 + 3636) < (double)*(float *)(dword_106B31C8 + 12) )
        {
          sub_10021880((void *)a1);
          sub_100285C0((_DWORD *)a1, 0, 1);
          sub_103BD3D0(a1);
          sub_100EC3F0(v22, (int)sub_103BE580, 0.0, 0);
          v23 = (float *)sub_1001F410((_DWORD *)a1);
          *(float *)(a1 + 3644) = *v23;
          *(float *)(a1 + 3648) = v23[1];
          *(float *)(a1 + 3652) = v23[2];
          return (char)v23;
        }
      }
      else
      {
        *(float *)(a1 + 3636) = *(float *)(dword_106B31C8 + 12) + 0.5;
      }
      v13 = 0;
    }
    sub_100BEFA0((void *)a1, "eyes", (int)v27, (int)v28);
    sub_10422220(v28, v36);
    if ( *(float *)(dword_106B31C8 + 12) <= (double)*(float *)(a1 + 3632) )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 1416))(a1, dword_106EBBEC);
    }
    else if ( v36[1] * v39 + v36[0] * v38 + v36[2] * v40 >= 0.9848 )
    {
      if ( (*(_DWORD *)(a1 + 248) & 0x100) != 0 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 1416))(a1, dword_106EBBE0);
      else
        (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 1416))(a1, dword_106EBBE4);
      sub_103BCED0((int *)a1, v9, (float *)v27, v36);
    }
    if ( v13 )
    {
      *(float *)(a1 + 3648) = v29[1];
      *(float *)(a1 + 3644) = v29[0];
    }
    LOBYTE(v23) = sub_103BD400((_DWORD *)a1);
  }
  else
  {
    sub_100285C0((_DWORD *)a1, 0, 1);
    if ( (*(_DWORD *)(a1 + 248) & 0x80) != 0 )
      v24 = 3.4028235e38;
    else
      v24 = *(float *)(dword_106B31C8 + 12) + 5.0;
    *(float *)(a1 + 3636) = v24;
    LOBYTE(v23) = sub_100EC3F0((_DWORD *)a1, (int)sub_103BE580, 0.0, 0);
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      LOBYTE(v23) = sub_100DAE60(a1);
    *(float *)(a1 + 3644) = *(float *)(a1 + 704);
    *(float *)(a1 + 3648) = *(float *)(a1 + 708);
    *(float *)(a1 + 3652) = *(float *)(a1 + 712);
  }
  return (char)v23;
}
