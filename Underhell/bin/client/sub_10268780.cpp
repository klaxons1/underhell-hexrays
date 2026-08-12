void __userpurge sub_10268780(_DWORD *a1@<ecx>, int a2@<ebx>, int a3)
{
  int v3; // esi
  int *v4; // esi
  int v5; // edi
  int v6; // eax
  int v7; // eax

  if ( a3 >= 0 && a3 < a1[54] && a3 <= a1[60] )
  {
    v3 = 12 * a3 + a1[53];
    if ( *(_DWORD *)(v3 + 4) != a3 || *(_DWORD *)(v3 + 8) == a3 )
    {
      v4 = *(int **)(12 * a3 + a1[53]);
      v5 = *v4;
      v6 = sub_1022B4C0((_DWORD *)v4[78], "text", (int)Locale);
      (*(void (__thiscall **)(int *, int))(v5 + 772))(v4, v6);
      (*(void (__thiscall **)(int *, int))(*v4 + 868))(v4, 1);
      (*(void (__thiscall **)(int *, int, int))(*v4 + 840))(v4, 1, 5);
      v7 = (*(int (__thiscall **)(int *))(*v4 + 864))(v4);
      sub_1027CE60(v7);
      sub_10267E30(v4, a2, v5);
      (*(void (__thiscall **)(int *))(*v4 + 872))(v4);
      (*(void (__thiscall **)(int *, _DWORD, _DWORD))(*v4 + 244))(v4, 0, 0);
    }
  }
}
