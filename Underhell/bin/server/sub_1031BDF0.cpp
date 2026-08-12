char __usercall sub_1031BDF0@<al>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  int v5; // eax
  int v6[3]; // [esp+4h] [ebp-3Ch] BYREF
  int v7[3]; // [esp+10h] [ebp-30h] BYREF
  float v8[3]; // [esp+1Ch] [ebp-24h] BYREF
  float v9; // [esp+28h] [ebp-18h] BYREF
  float v10; // [esp+2Ch] [ebp-14h]
  float v11; // [esp+30h] [ebp-10h]
  float v12; // [esp+34h] [ebp-Ch] BYREF
  float v13; // [esp+38h] [ebp-8h]
  float v14; // [esp+3Ch] [ebp-4h]

  if ( (*(_DWORD *)(a1 + 248) & 0x20000) != 0 )
  {
    sub_10319610((float *)a1, a2, a3);
    return 1;
  }
  if ( !*(_DWORD *)(a1 + 4076) && *(_DWORD *)(a1 + 4120) != 4 )
  {
    if ( *(_BYTE *)(a1 + 4268) == 1 )
    {
LABEL_9:
      sub_1031BC70(a1, a3);
      return 0;
    }
    if ( *(float *)(a1 + 3808) + 1.0 <= *(float *)(dword_106B31C8 + 12)
      || *(float *)(a1 + 4176) + *(float *)(a1 + 3812) > *(float *)(dword_106B31C8 + 12) )
    {
      return 0;
    }
  }
  if ( *(_BYTE *)(a1 + 4268) == 1 )
    goto LABEL_9;
  if ( sub_10317800(a1) )
  {
    sub_1031BA30((float *)a1, a3);
    return 0;
  }
  if ( *(_DWORD *)(a1 + 4120) != 4 )
    goto LABEL_23;
  v5 = *(_DWORD *)(a1 + 4212);
  if ( v5 == 5 )
    goto LABEL_9;
  if ( v5 == 4 )
    goto LABEL_23;
  if ( v5 != 6 )
    return 0;
  if ( *(float *)(dword_106B31C8 + 12) - *(float *)(a1 + 4216) >= 6.0 )
  {
LABEL_23:
    sub_100BD6D0((void *)a1, *(_DWORD *)(a1 + 4196), (int)&v9, 0, 0, 0);
    if ( sub_103131E0((void *)a1) && *(_DWORD *)(a1 + 4076) )
    {
      sub_10315310((_DWORD *)a1, &v12);
    }
    else
    {
      v12 = *(float *)(a1 + 3820);
      v13 = *(float *)(a1 + 3824);
      v14 = *(float *)(a1 + 3828);
    }
    v8[0] = v12 - v9;
    v8[1] = v13 - v10;
    v8[2] = v14 - v11;
    off_10689714();
    if ( !sub_10316FA0(a1, (int)v8) || *(_DWORD *)(a1 + 4076) == 1 && !sub_10317310(a1, a2, a3) )
      return 0;
    sub_100BD6D0((void *)a1, *(_DWORD *)(a1 + 4192), (int)v6, 0, 0, 0);
    *(float *)v7 = *(float *)v6 - v9;
    *(float *)&v7[1] = *(float *)&v6[1] - v10;
    *(float *)&v7[2] = *(float *)&v6[2] - v11;
    off_10689714();
    if ( *(_DWORD *)(a1 + 4076) == 2 )
      return sub_10319FB0(a1, (int)v6, (float *)v7, &v12);
    else
      return sub_103153B0(a1, (float *)v7, v8);
  }
  else
  {
    if ( *(_DWORD *)(a1 + 4076) )
      sub_1031AD10(a1);
    return 0;
  }
}
