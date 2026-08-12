void __usercall sub_1027A920(int a1@<ecx>, int a2@<ebx>)
{
  int v3; // eax
  unsigned __int8 (__thiscall *v4)(int); // edx
  int v5; // eax
  float *v6; // edi
  double v7; // st7
  const char *v8; // esi
  int v9; // [esp+4h] [ebp-10h]
  int v10; // [esp+4h] [ebp-10h]

  if ( *(_BYTE *)(a1 + 1409) )
  {
    *(_BYTE *)(a1 + 1409) = 0;
    if ( *(float *)(dword_106B31C8 + 12) - *(float *)(a1 + 1396) <= 0.5 )
      ++*(_DWORD *)(a1 + 1404);
    else
      *(_DWORD *)(a1 + 1404) = 0;
    v3 = *(_DWORD *)a1;
    *(float *)(a1 + 1396) = *(float *)(dword_106B31C8 + 12);
    v4 = *(unsigned __int8 (__thiscall **)(int))(v3 + 876);
    *(float *)(a1 + 1392) = *(float *)(dword_106B31C8 + 12) + 0.1;
    if ( v4(a1) )
    {
      if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
        sub_100DAE60(a1);
      v10 = sub_100D1940((_DWORD *)a1);
      sub_1023D4B0(1, (float *)(a1 + 580), 196, 0.2, v10, 0, 0);
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
        sub_100DAE60(a1);
      v9 = sub_100D1940((_DWORD *)a1);
      sub_1023D4B0(1, (float *)(a1 + 580), 1500, 0.2, v9, 0, 0);
    }
    v5 = sub_100D1940((_DWORD *)a1);
    v6 = (float *)v5;
    if ( v5 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 320))(v5) )
      sub_100F7AD0(v6, 0.0);
    else
      v6 = 0;
    if ( *(_BYTE *)(a1 + 1408) )
    {
      sub_1027A4F0((float *)a1, (int)v6);
      *(_BYTE *)(a1 + 1408) = 0;
    }
    else
    {
      sub_1027A160((float *)a1, a2, (int)v6);
      *(_BYTE *)(a1 + 1408) = 1;
    }
    v7 = *(float *)(a1 + 1400);
    ++*(_DWORD *)(a1 + 1372);
    *(float *)(a1 + 1400) = v7 + 0.2;
    v8 = *(const char **)(a1 + 92);
    if ( !v8 )
      v8 = String;
    (*(void (__thiscall **)(int, float *, int, const char *))(*(_DWORD *)off_10627F88 + 116))(off_10627F88, v6, 1, v8);
  }
}
