int __thiscall sub_10282D10(int this, int *a2)
{
  char *v3; // eax
  _DWORD *v4; // eax
  int v5; // edx
  _DWORD *v6; // eax
  int v7; // ebx
  int v8; // edi
  char *v9; // eax
  int v10; // eax
  const char *v11; // eax
  const char *v13; // [esp-4h] [ebp-214h]
  int v14; // [esp+0h] [ebp-210h]
  _DWORD *v15; // [esp+Ch] [ebp-204h]
  char Buffer[512]; // [esp+10h] [ebp-200h] BYREF

  v3 = (char *)(*(int (__thiscall **)(int *, int))(*a2 + 72))(a2, 1);
  v4 = sub_1022A6A0(*(_DWORD **)(*(_DWORD *)(this + 472) + 20), v3, v14);
  v5 = *a2;
  *(_DWORD *)Buffer = v4;
  (*(void (__thiscall **)(int *, _DWORD *))(v5 + 340))(a2, v4);
  v6 = *(_DWORD **)(this + 472);
  v7 = 0;
  if ( (int)v6[3] > 0 )
  {
    v8 = 0;
    do
    {
      v9 = (char *)sub_1022B4C0(v15, (char *)(*v6 + v8 + 16), (int)Locale);
      sub_10281C60(v8 + **(_DWORD **)(this + 472), v9);
      v6 = *(_DWORD **)(this + 472);
      ++v7;
      v8 += 84;
    }
    while ( v7 < v6[3] );
  }
  v10 = (*(int (__thiscall **)(int *))(*a2 + 72))(a2);
  v11 = (const char *)(*(int (__thiscall **)(int *, int))(*a2 + 76))(a2, v10);
  sub_10228370(Buffer, 0x200u, "%s: '%s'", v11, v13);
  (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(this + 460) + 772))(*(_DWORD *)(this + 460), Buffer);
  return (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 460) + 812))(*(_DWORD *)(this + 460), 0);
}
