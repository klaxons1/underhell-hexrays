void __usercall sub_102B18E0(int a1@<ecx>, int a2@<ebx>)
{
  double v3; // st7
  void (__thiscall *v4)(int, _DWORD); // edx
  int v5; // edi
  const char *v6; // esi
  float v7; // [esp+0h] [ebp-10h]
  float v8; // [esp+4h] [ebp-Ch]
  float v9; // [esp+Ch] [ebp-4h] BYREF

  if ( *(_BYTE *)(a1 + 1146) )
    return;
  if ( *(_DWORD *)(a1 + 1404) == 1 )
  {
    sub_102B1360(a1, a2);
    v3 = *(float *)(dword_106B31C8 + 12);
    v4 = *(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 960);
  }
  else
  {
    if ( *(_DWORD *)(a1 + 1404) != 2 )
    {
      if ( *(_DWORD *)(a1 + 1404) == 3 )
      {
        *(_DWORD *)(a1 + 1400) = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 1452))(a1);
        sub_102B1880((int *)a1, a2);
        sub_100EC3F0((_DWORD *)a1, (int)sub_102B1880, 0.0, 0);
        v9 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a1 + 1448))(a1) + *(float *)(dword_106B31C8 + 12);
        sub_100D2D00((float *)(a1 + 1132), &v9);
        v9 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a1 + 1448))(a1) + *(float *)(dword_106B31C8 + 12);
        sub_100D2D50((float *)(a1 + 1136), &v9);
        v7 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a1 + 1108))(a1) + *(float *)(dword_106B31C8 + 12);
        sub_100EC4A0((int *)a1, v7, 0);
      }
      goto LABEL_10;
    }
    if ( !*(_BYTE *)(a1 + 1388) )
      return;
    *(_BYTE *)(a1 + 1388) = 0;
    sub_102B1360(a1, a2);
    v3 = *(float *)(dword_106B31C8 + 12);
    v4 = *(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 960);
  }
  v8 = v3 + 3.0;
  v4(a1, LODWORD(v8));
LABEL_10:
  v5 = sub_100D1940((_DWORD *)a1);
  if ( v5 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 320))(v5) )
  {
    ++*(_DWORD *)(a1 + 1372);
    v6 = *(const char **)(a1 + 92);
    if ( !v6 )
      v6 = String;
    (*(void (__thiscall **)(int, int, int, const char *))(*(_DWORD *)off_10627F88 + 116))(off_10627F88, v5, 1, v6);
  }
}
