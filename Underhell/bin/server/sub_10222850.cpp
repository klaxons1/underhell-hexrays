bool __stdcall sub_10222850(int a1)
{
  int v1; // edi
  int v2; // eax
  int v3; // ebx
  int v5; // esi
  _DWORD *v6; // edi
  _DWORD *v7; // esi
  int v8; // ecx
  _BYTE v9[4]; // [esp+8h] [ebp-8h] BYREF
  int v10; // [esp+Ch] [ebp-4h]

  v1 = sub_1012BC00(&dword_1069E3E0);
  v2 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31D0 + 100))(dword_106B31D0, 56 * v1, 1);
  v3 = 0;
  if ( !v2 )
    return 0;
  v5 = a1;
  sub_1021E620((_DWORD *)(a1 + 24), v2, v1);
  v6 = (_DWORD *)sub_1012BC10(&dword_1069E3E0, 0);
  if ( v6 )
  {
    v10 = 0;
    do
    {
      v7 = (_DWORD *)(v10 + *(_DWORD *)(v5 + 1400));
      *v7 = v3;
      v7[1] = (*(int (__thiscall **)(_DWORD *))(*v6 + 188))(v6);
      v7[13] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v6 + 28))(v6, v9);
      v7[3] = -1;
      v7[2] = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v6[6]);
      v8 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v6 + 8))(v6);
      v10 += 56;
      v7[4] = v8;
      v7[7] = 0;
      v7[5] = 0;
      v7[6] = 0;
      v7[8] = 0;
      ++v3;
      v5 = a1;
      v6 = (_DWORD *)sub_1012BC10(&dword_1069E3E0, (int)v6);
    }
    while ( v6 );
  }
  sub_102226A0(v5 + 24);
  return v3 == *(_DWORD *)(v5 + 1396);
}
