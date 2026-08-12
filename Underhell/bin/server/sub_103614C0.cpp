void __userpurge sub_103614C0(int a1@<ecx>, int a2@<edi>, int a3)
{
  unsigned int v4; // eax
  int v5; // ecx
  int v6; // ecx

  if ( *(_BYTE *)(a1 + 4197) == 1 )
  {
    v4 = *(_DWORD *)(a1 + 4184);
    if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 4184) & 0xFFF) + 2] != *(_DWORD *)(a1 + 4184) >> 12 )
      v5 = 0;
    else
      v5 = off_1061BE18[4 * (*(_DWORD *)(a1 + 4184) & 0xFFF) + 1];
    if ( v5 != *(_DWORD *)(a3 + 4) )
    {
      if ( v4 != -1
        && off_1061BE18[4 * (*(_DWORD *)(a1 + 4184) & 0xFFF) + 2] == v4 >> 12
        && off_1061BE18[4 * (*(_DWORD *)(a1 + 4184) & 0xFFF) + 1] )
      {
        sub_10361330(a1, a3, 0);
      }
      *(_BYTE *)(a1 + 4197) = 1;
      v6 = *(_DWORD *)(a3 + 4);
      if ( v6 )
        *(_DWORD *)(a1 + 4184) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6);
      else
        *(_DWORD *)(a1 + 4184) = -1;
    }
  }
  else if ( *(_BYTE *)(a1 + 4196) == 1 && *(_DWORD *)(a1 + 4200) && (unsigned __int8)sub_103E0CF0(*(_DWORD *)(a3 + 4)) )
  {
    if ( (unsigned __int8)sub_103E0CF0(0) )
      sub_10361330(a1, a2, 0);
    *(_BYTE *)(a1 + 4196) = 1;
    sub_10019680((_DWORD *)(a1 + 4184), *(_DWORD *)(a3 + 4));
  }
}
