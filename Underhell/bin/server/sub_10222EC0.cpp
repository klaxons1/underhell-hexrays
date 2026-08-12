int __cdecl sub_10222EC0(int a1)
{
  int v1; // edi
  int v2; // eax
  int v3; // esi
  int result; // eax
  void *v5; // eax

  v1 = a1;
  if ( a1 <= 0 )
    v1 = 3145728;
  v2 = sub_1012BC00(&dword_1069E3E0);
  v3 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31D0 + 100))(dword_106B31D0, v1 + 56 * v2 + 1440, 1);
  result = 0;
  if ( v3 )
  {
    *(_DWORD *)v3 = 0;
    *(_DWORD *)(v3 + 4) = 0;
    *(_DWORD *)(v3 + 8) = 0;
    *(_DWORD *)(v3 + 12) = 0;
    *(_DWORD *)(v3 + 16) = 0;
    *(_DWORD *)(v3 + 20) = 0;
    sub_10222E50((_DWORD *)(v3 + 24));
    *(_BYTE *)(v3 + 1436) = 0;
    *(_DWORD *)v3 = v3 + 1440;
    *(_DWORD *)(v3 + 4) = v3 + 1440;
    *(_DWORD *)(v3 + 8) = 0;
    *(_DWORD *)(v3 + 12) = v1;
    v5 = (void *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31D0 + 100))(dword_106B31D0, 4095, 4);
    if ( v5 )
    {
      *(_DWORD *)(v3 + 16) = 4095;
      *(_DWORD *)(v3 + 20) = v5;
      memset(v5, 0, 0x3FFCu);
      *(float *)(v3 + 1344) = *(float *)(dword_106B31C8 + 12);
      result = v3;
      *(float *)(v3 + 1332) = flt_106F1CA8;
      *(float *)(v3 + 1336) = flt_106F1CAC;
      *(float *)(v3 + 1340) = flt_106F1CB0;
      *(_DWORD *)(v3 + 1308) = 0;
      *(_DWORD *)(v3 + 24) = 0;
      *(_DWORD *)(dword_106B31C8 + 44) = v3;
    }
    else
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 104))(dword_106B31D0, 0);
      return 0;
    }
  }
  return result;
}
