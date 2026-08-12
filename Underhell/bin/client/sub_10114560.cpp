int __usercall sub_10114560@<eax>(int a1@<eax>, _DWORD *a2@<esi>, int a3, _DWORD *a4)
{
  int result; // eax
  int v6; // ecx
  int v7; // ecx
  int v8; // [esp+8h] [ebp-8h]
  int v9; // [esp+Ch] [ebp-4h]

  result = *(_DWORD *)a1;
  if ( result >= 0 && result < (*(_WORD *)a4[1] & 0x7FFF) )
  {
    v8 = sub_1001E140(a4[2], (char *)(a1 + 4));
    a2[*a2 + 147] = v8;
    if ( v8 < 0 )
    {
      return Msg("CRagdollProp::CreateObjects:  Couldn't Lookup Bone %s\n", (const char *)(a1 + 4));
    }
    else
    {
      *(float *)(a1 + 1572) = 0.1;
      *(_DWORD *)(a1 + 1580) = *a4;
      v9 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10436258 + 12))(dword_10436258, a1 + 1028);
      if ( v9 < 0 )
        v9 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_10436258 + 12))(dword_10436258, "default");
      *(_DWORD *)(a1 + 1576) = *(_DWORD *)a4[2] + 12;
      a2[6 * *a2 + 6] = (*(int (__thiscall **)(int, _DWORD, int, float *, float *, int))(*(_DWORD *)a3 + 28))(
                          a3,
                          *(_DWORD *)(*(_DWORD *)(a4[1] + 4) + 4 * *(_DWORD *)a1),
                          v9,
                          &flt_10459240,
                          &flt_1045924C,
                          a1 + 1552);
      v6 = a2[6 * *a2 + 6];
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v6 + 184))(v6, a4[11] + 48 * v8, 1);
      a2[6 * *a2 + 8] = -1;
      v7 = a2[6 * *a2 + 6];
      result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 80))(v7, (unsigned __int16)*a2);
      ++*a2;
    }
  }
  return result;
}
