int __usercall sub_10399230@<eax>(int a1@<ecx>, double a2@<st0>)
{
  unsigned __int8 (__thiscall *v3)(int); // edx
  int v4; // edi
  int result; // eax
  float v6; // ecx
  float v7; // edx
  float *v8; // ebx
  float *v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // [esp-8h] [ebp-74h]
  _BYTE v14[84]; // [esp+8h] [ebp-64h] BYREF
  float v15[2]; // [esp+5Ch] [ebp-10h] BYREF
  float v16; // [esp+64h] [ebp-8h]
  float *v17; // [esp+68h] [ebp-4h]
  int savedregs; // [esp+6Ch] [ebp+0h] BYREF

  v3 = *(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)(a1 + 5312) + 24);
  v4 = a1 + 5312;
  *(_BYTE *)(a1 + 4448) = 0;
  if ( v3(a1 + 5312) )
  {
    sub_10164AB0((_DWORD *)a1, v4);
    return sub_10097980((int *)a1, a2);
  }
  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 5148) + 1364))(*(_DWORD *)(a1 + 5148)) != a1 + 5144
    || !*(_BYTE *)(a1 + 5182) )
  {
    goto LABEL_13;
  }
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v6 = *(float *)(a1 + 580);
  v7 = *(float *)(a1 + 584);
  v16 = *(float *)(a1 + 588);
  a2 = v16 + 0.25;
  v13 = *(_DWORD *)(a1 + 1676);
  v16 = a2;
  v15[0] = v6;
  v15[1] = v7;
  v8 = (float *)sub_10073730(v13);
  v9 = (float *)sub_10073710(*(_DWORD *)(a1 + 1676));
  v10 = *(_DWORD *)(a1 + 252) >> 11;
  v17 = v9;
  if ( (v10 & 1) != 0 )
    sub_100DAE60(a1);
  sub_100231A0((int)&savedregs, a1, (float *)(a1 + 580), v15, v17, v8, 33570827, a1, 0, (int)v14);
  if ( v14[55] )
  {
    if ( sub_10023D10((_DWORD *)a1, 50) )
      sub_10295E70(a1 + 5144);
    sub_10164AB0((_DWORD *)a1, a1 + 5144);
    return sub_10097980((int *)a1, a2);
  }
  else
  {
LABEL_13:
    result = sub_100444C0(a1);
    if ( !result )
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 2372))(a1);
      if ( !result )
      {
        result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 2376))(a1);
        if ( !result )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 2392))(a1) )
          {
            v11 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 2424))(a1);
            sub_10164AB0((_DWORD *)a1, v11);
            return sub_10097980((int *)a1, a2);
          }
          if ( !sub_1032ECA0((_DWORD *)a1) )
          {
            v12 = *(_DWORD *)(a1 + 2324);
            if ( v12 == 1 || v12 == 2 )
            {
              result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 2380))(a1);
              if ( result )
                return result;
            }
            else if ( v12 == 3 )
            {
              result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 2384))(a1);
              if ( result )
                return result;
            }
          }
          return sub_10097980((int *)a1, a2);
        }
      }
    }
  }
  return result;
}
