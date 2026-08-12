void __usercall sub_1003A0D0(int a1@<ecx>, double a2@<st0>)
{
  int v3; // ebx
  const char *v4; // edi
  const char *v5; // eax
  const char *v6; // [esp-14h] [ebp-1Ch]
  const char *v7; // [esp-10h] [ebp-18h]
  const char *v8; // [esp-Ch] [ebp-14h]
  int v9; // [esp+4h] [ebp-4h]

  if ( *(_BYTE *)(a1 + 224) != 2
    && (*(_DWORD *)(a1 + 2324) != 4 || *(_DWORD *)(a1 + 2372) == 2)
    && *(_DWORD *)(a1 + 2380) != 171 )
  {
    if ( sub_10001430((_DWORD *)a1) )
    {
      v9 = *(_DWORD *)(a1 + 2372);
      if ( v9 != *(_DWORD *)(a1 + 2380) || *(_DWORD *)(a1 + 908) != *(_DWORD *)(a1 + 2384) )
      {
        if ( *(_DWORD *)(dword_10695FE4 + 48) && (*(_DWORD *)(a1 + 236) & 0x1000) != 0 )
        {
          v3 = *(_DWORD *)(a1 + 908);
          v4 = *(const char **)(a1 + 92);
          if ( !v4 )
            v4 = String;
          v8 = (const char *)sub_100BE1F0(*(_DWORD *)(a1 + 2384));
          v7 = sub_10008F90(*(_DWORD *)(a1 + 2380));
          v6 = (const char *)sub_100BE1F0(v3);
          v5 = sub_10008F90(v9);
          DevMsg("MaintainActivity %s : %s:%s -> %s:%s\n", v4, v5, v6, v7, v8);
        }
        if ( *(_DWORD *)(a1 + 2372) == 2 )
        {
          if ( *(_BYTE *)(a1 + 896) )
            sub_1003A010((_DWORD *)a1, a2);
        }
        else
        {
          sub_10039D10((_DWORD *)a1, *(_DWORD *)(a1 + 2380), (int *)(a1 + 2384), (int *)(a1 + 2388), (int *)(a1 + 2392));
          sub_1003A010((_DWORD *)a1, a2);
        }
      }
    }
  }
}
