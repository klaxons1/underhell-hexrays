int __usercall sub_10360A20@<eax>(int a1@<ecx>, double a2@<st0>)
{
  int v4; // edi
  int v5; // esi
  int v6; // eax

  sub_10023E00((char *)a1, 73);
  if ( *(_DWORD *)(a1 + 2324) == 4 || *(_BYTE *)(a1 + 2680) )
  {
    v4 = *(_DWORD *)(a1 + 3624);
    *(_BYTE *)(a1 + 3648) = 1;
    if ( v4 )
    {
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 100))(v4);
      if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v4 + 272))(v4, v5) )
      {
        v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 52))(v4);
        return sub_1007DB30((_DWORD *)(v6 + 4), v5);
      }
      else
      {
        return v5;
      }
    }
    else
    {
      return sub_10045660(a1, a2);
    }
  }
  else
  {
    if ( sub_1032ECA0((_DWORD *)a1) )
      return sub_10092C60(a1, a2);
    if ( *(_BYTE *)(a1 + 4197) == 1 && sub_1026A890((unsigned int *)(a1 + 4184)) )
      return 89;
    if ( *(_BYTE *)(a1 + 4196) == 1 )
    {
      if ( *(float *)(a1 + 4176) < 0.1 && *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(a1 + 4172) )
        return 88;
      a2 = *(float *)(dword_106B31C8 + 12);
      if ( a2 >= *(float *)(a1 + 4176) || !sub_1026A890((unsigned int *)(a1 + 4184)) )
        return sub_10092C60(a1, a2);
      return 89;
    }
    if ( !sub_1026A890((unsigned int *)(a1 + 4184)) || *(_BYTE *)(a1 + 4288) != 1 )
      return sub_10092C60(a1, a2);
    return 90;
  }
}
