int *__usercall sub_10367E60@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  int *result; // eax
  int *v5; // eax
  int *v6; // eax
  int v7; // ecx
  int *v8; // ecx
  int v9[3]; // [esp+1Ch] [ebp-40h] BYREF
  int v10[3]; // [esp+28h] [ebp-34h] BYREF
  int v11[3]; // [esp+34h] [ebp-28h] BYREF
  int v12[3]; // [esp+40h] [ebp-1Ch] BYREF
  float v13[3]; // [esp+4Ch] [ebp-10h] BYREF
  float v14; // [esp+58h] [ebp-4h]

  result = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
  if ( result )
  {
    sub_10260A10(a2, a3, result, 1.0, (float *)v10);
    sub_101C73D0((unsigned int *)a1, 0);
    *(float *)(a1 + 4008) = *(float *)(a1 + 724);
    *(_BYTE *)(a1 + 4004) = 1;
    sub_1023C380((_DWORD *)a1, (int)"NPC_FastZombie.LeapAttack", 0.0, 0);
    v13[0] = *(float *)(a1 + 716);
    v13[1] = *(float *)(a1 + 720);
    v13[2] = *(float *)(a1 + 724) + 1.0;
    sub_1025F370((void *)a1, v13, 0);
    v5 = (int *)sub_10073710(*(_DWORD *)(a1 + 1676));
    v11[0] = *v5;
    v11[1] = v5[1];
    v11[2] = v5[2];
    v6 = (int *)sub_10073730(*(_DWORD *)(a1 + 1676));
    v12[0] = *v6;
    v7 = *(_DWORD *)(a1 + 252);
    v12[1] = v6[1];
    v12[2] = v6[2];
    if ( (v7 & 0x800) != 0 )
      sub_100DAE60(a1);
    sub_101692F0(
      (float *)v9,
      a1,
      *(_DWORD *)(a1 + 580),
      *(_DWORD *)(a1 + 584),
      *(_DWORD *)(a1 + 588),
      v10[0],
      v10[1],
      v10[2],
      0.1,
      1.0,
      0,
      (float *)v11,
      (float *)v12);
    sub_100DD660(a1, (float *)v9);
    result = *(int **)(a1 + 1672);
    v14 = *(float *)(dword_106B31C8 + 12) + 2.0;
    if ( result != (int *)LODWORD(v14) )
    {
      result = (int *)a1;
      if ( *(_BYTE *)(a1 + 84) )
      {
        *(_BYTE *)(a1 + 88) |= 1u;
      }
      else
      {
        v8 = *(int **)(a1 + 24);
        if ( v8 )
          result = (int *)sub_100194B0(v8, 1672);
      }
      *(float *)(a1 + 1672) = v14;
    }
    *(_DWORD *)(a1 + 196) = sub_10366730;
  }
  return result;
}
