int __usercall sub_10403750@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  float *v6; // edi
  double v7; // st7
  const char *v8; // esi

  if ( *(float *)(dword_106B31C8 + 12) - *(float *)(a1 + 1396) <= 0.5 )
    ++*(_DWORD *)(a1 + 1404);
  else
    *(_DWORD *)(a1 + 1404) = 0;
  v3 = *(_DWORD *)(a1 + 252);
  *(float *)(a1 + 1396) = *(float *)(dword_106B31C8 + 12);
  *(float *)(a1 + 1392) = *(float *)(dword_106B31C8 + 12) + 0.1;
  if ( (v3 & 0x800) != 0 )
    sub_100DAE60(a1);
  v4 = sub_100D1940((_DWORD *)a1);
  sub_1023D4B0(1, (float *)(a1 + 580), 1500, 0.2, v4, 0, 0);
  v5 = sub_100D1940((_DWORD *)a1);
  v6 = (float *)v5;
  if ( v5 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 320))(v5) )
    sub_100F7AD0(v6, 0.0);
  else
    v6 = 0;
  sub_100D4690((float *)a1, a2, (int)v6);
  v7 = *(float *)(a1 + 1400) + 0.2;
  ++*(_DWORD *)(a1 + 1372);
  *(float *)(a1 + 1400) = v7;
  v8 = *(const char **)(a1 + 92);
  if ( !v8 )
    v8 = String;
  return (*(int (__thiscall **)(int, float *, int, const char *))(*(_DWORD *)off_10627F88 + 116))(
           off_10627F88,
           v6,
           1,
           v8);
}
