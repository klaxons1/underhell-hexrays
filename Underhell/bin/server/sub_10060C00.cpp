int __userpurge sub_10060C00@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, float a4)
{
  int result; // eax
  double v6; // st7
  double v7; // st7
  double v8; // st7
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  double v18; // st7
  double v19; // st7
  int v20; // ecx
  int v21; // eax
  int v22; // [esp+8h] [ebp-14h]
  float v23; // [esp+8h] [ebp-14h]
  float v24; // [esp+8h] [ebp-14h]
  float v25; // [esp+Ch] [ebp-10h]
  int v26; // [esp+10h] [ebp-Ch]
  float v27; // [esp+18h] [ebp-4h]
  float v28; // [esp+18h] [ebp-4h]

  result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 264))(*(_DWORD *)(a1 + 4));
  if ( (_BYTE)result )
  {
    sub_10078330(a1);
    sub_10079830(*(float *)(a1 + 184));
    v27 = 0.0;
    if ( sub_100781B0(a1, a3) > 0.0 )
    {
      v28 = sub_100781B0(a1, a2);
      v6 = 1.0 - a4 / (sub_10078FE0(a1) * v28);
      v27 = v6;
      if ( v6 < 0.0 )
      {
        v7 = a4 / sub_100781B0(a1, v26);
        *(float *)(a1 + 184) = v7;
        if ( v7 <= 1.0 )
        {
          if ( v7 < 0.0 )
            v7 = 0.0;
        }
        else
        {
          v7 = 1.0;
        }
        *(float *)(a1 + 184) = v7;
        v25 = v7;
        sub_10079830(v25);
        v27 = 0.0;
      }
    }
    v8 = (1.0 - *(float *)(a1 + 184)) * 0.8 + *(float *)(a1 + 184);
    if ( v8 >= 1.0 )
      v8 = 1.0;
    *(float *)(a1 + 184) = v8;
    if ( *(_DWORD *)(a1 + 160) == -1 )
      sub_10060AE0(a1);
    v9 = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 4) + 932))(
           *(_DWORD *)(a1 + 4),
           *(_DWORD *)(a1 + 160));
    if ( v9 != *(_DWORD *)(a1 + 164) )
    {
      v22 = *(_DWORD *)(a1 + 148);
      *(_DWORD *)(a1 + 164) = v9;
      *(_DWORD *)(a1 + 176) = -1;
      *(_DWORD *)(a1 + 168) = sub_1007DE50(v22);
    }
    if ( *(_BYTE *)(a1 + 136) )
    {
      v10 = sub_1007DE50(*(_DWORD *)(a1 + 148));
      *(_DWORD *)(a1 + 168) = v10;
      if ( v10 == -1 )
        *(_DWORD *)(a1 + 168) = sub_100607F0(a1, *(_DWORD *)(a1 + 148));
    }
    if ( 1.0 == *(float *)(a1 + 156) || *(_DWORD *)(a1 + 144) != -1 && *(_DWORD *)(a1 + 148) == *(_DWORD *)(a1 + 152) )
    {
      sub_100C4FB0(*(_DWORD *)(a1 + 140), 0.0, 0.0);
      v11 = *(_DWORD *)(a1 + 144);
      *(float *)(a1 + 156) = 0.0;
      v12 = *(_DWORD *)(a1 + 152);
      *(_DWORD *)(a1 + 140) = v11;
      *(_DWORD *)(a1 + 148) = v12;
      *(_DWORD *)(a1 + 144) = -1;
      *(_DWORD *)(a1 + 152) = -1;
    }
    if ( *(_DWORD *)(a1 + 152) == -1 )
    {
      if ( !*(_BYTE *)(a1 + 136) && *(_DWORD *)(a1 + 168) != sub_100607F0(a1, *(_DWORD *)(a1 + 148)) )
        *(_DWORD *)(a1 + 168) = sub_100607F0(a1, *(_DWORD *)(a1 + 148));
      v13 = *(_DWORD *)(a1 + 168);
      if ( v13 != -1 )
      {
        v14 = *(_DWORD *)(a1 + 148);
        if ( v14 != v13 )
        {
          v15 = sub_100BF270(v14, v13, 0);
          *(_DWORD *)(a1 + 152) = v15;
          if ( v15 == -1 )
            *(_DWORD *)(a1 + 152) = *(_DWORD *)(a1 + 168);
        }
      }
    }
    v16 = *(_DWORD *)(a1 + 152);
    if ( v16 == -1 )
    {
      if ( *(_DWORD *)(a1 + 140) == -1 )
        sub_10060B60(a1);
      v21 = *(_DWORD *)(a1 + 144);
      if ( v21 != -1 )
      {
        sub_100C4FB0(v21, 0.0, 0.0);
        *(float *)(a1 + 156) = 0.0;
        *(_DWORD *)(a1 + 144) = -1;
        *(_DWORD *)(a1 + 152) = -1;
      }
      v19 = v27;
      v20 = *(_DWORD *)(a1 + 140);
    }
    else
    {
      if ( *(_DWORD *)(a1 + 144) == -1 )
      {
        v17 = sub_100C71D0(v16, 0);
        *(_DWORD *)(a1 + 144) = v17;
        sub_100C6460(v17, 0.0);
        if ( *(_DWORD *)(a1 + 152) == *(_DWORD *)(a1 + 168) )
          sub_100C4EE0(*(_DWORD *)(a1 + 144), 0.0);
        else
          sub_100C4EE0(*(_DWORD *)(a1 + 144), 1.0);
        sub_100C4F40(*(_DWORD *)(a1 + 144), 1);
        *(float *)(a1 + 156) = 0.0;
      }
      v18 = *(float *)(a1 + 156) + 0.3;
      if ( v18 >= 1.0 )
        v18 = 1.0;
      *(float *)(a1 + 156) = v18;
      if ( v18 >= 1.0 )
      {
        sub_100C6460(*(_DWORD *)(a1 + 140), 0.0);
        return sub_100C6460(*(_DWORD *)(a1 + 144), v27);
      }
      v23 = (v27 - v18 * v27) / (1.0 - v18 * v27);
      sub_100C6460(*(_DWORD *)(a1 + 140), v23);
      v19 = *(float *)(a1 + 156) * v27;
      v20 = *(_DWORD *)(a1 + 144);
    }
    v24 = v19;
    return sub_100C6460(v20, v24);
  }
  return result;
}
