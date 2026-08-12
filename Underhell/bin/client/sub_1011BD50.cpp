int __cdecl sub_1011BD50(int a1)
{
  int v1; // edi
  int v2; // eax
  int v3; // esi
  int result; // eax
  void *v5; // eax

  v1 = a1;
  if ( a1 <= 0 )
    v1 = 0x200000;
  v2 = (*(int (__thiscall **)(char *, _DWORD))(*((_DWORD *)off_103DCD78 + 16389) + 20))((char *)off_103DCD78 + 65556, 0);
  v3 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1041315C + 276))(dword_1041315C, v1 + 56 * v2 + 1440, 1);
  result = 0;
  if ( v3 )
  {
    *(_DWORD *)v3 = 0;
    *(_DWORD *)(v3 + 4) = 0;
    *(_DWORD *)(v3 + 8) = 0;
    *(_DWORD *)(v3 + 12) = 0;
    *(_DWORD *)(v3 + 16) = 0;
    *(_DWORD *)(v3 + 20) = 0;
    sub_1011BCE0((_DWORD *)(v3 + 24));
    *(_BYTE *)(v3 + 1436) = 0;
    *(_DWORD *)v3 = v3 + 1440;
    *(_DWORD *)(v3 + 4) = v3 + 1440;
    *(_DWORD *)(v3 + 8) = 0;
    *(_DWORD *)(v3 + 12) = v1;
    v5 = (void *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1041315C + 276))(dword_1041315C, 4095, 4);
    if ( v5 )
    {
      *(_DWORD *)(v3 + 16) = 4095;
      *(_DWORD *)(v3 + 20) = v5;
      memset(v5, 0, 0x3FFCu);
      *(float *)(v3 + 1344) = *((float *)off_103DC81C + 3);
      result = v3;
      *(float *)(v3 + 1332) = flt_10459240;
      *(_QWORD *)(v3 + 1336) = qword_10459244;
      *(_DWORD *)(v3 + 1308) = 0;
      *(_DWORD *)(v3 + 24) = 0;
      *((_DWORD *)off_103DC81C + 11) = v3;
    }
    else
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1041315C + 280))(dword_1041315C, 0);
      return 0;
    }
  }
  return result;
}
