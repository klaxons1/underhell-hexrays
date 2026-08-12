int __stdcall sub_10156E60(int a1)
{
  int v1; // ebx
  int v2; // eax
  int v3; // esi
  int v4; // eax
  unsigned __int16 v5; // ax
  int v6; // edi
  int *v7; // eax
  int v9; // [esp+Ch] [ebp-4h]

  v1 = -1;
  v2 = sub_101811E0(a1, -1);
  v3 = v2;
  v9 = -1;
  if ( v2 )
  {
    v1 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(v2 + 24));
    v4 = *(_DWORD *)(v3 + 24);
    if ( v4 )
      v9 = *(_DWORD *)(v4 + 4);
  }
  v5 = sub_10155A10(&dword_10627CF4, 0);
  v6 = v5;
  sub_10156650((int)&dword_10627CF4, 0xFFFFu, v5);
  v7 = (int *)(dword_10627CF4 + 12 * v6);
  if ( v7 )
  {
    *v7 = v1;
    v7[1] = v9;
  }
  return v3;
}
