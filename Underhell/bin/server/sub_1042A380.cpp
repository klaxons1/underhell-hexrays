char __thiscall sub_1042A380(void *this, int a2, char *a3, int a4)
{
  char *v4; // ebx
  int v5; // esi
  int (__thiscall *v6)(int, char *, const char *, int); // edx
  int v7; // edi
  int (__thiscall *v9)(int, int); // edx
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int (__thiscall *v13)(int, int, int, int, int); // edx
  int v14; // eax
  void (__thiscall *v15)(int, int); // edx
  const char *v16; // edi
  int v17[13]; // [esp+Ch] [ebp-38h] BYREF
  const char *v18; // [esp+40h] [ebp-4h]

  v4 = a3;
  v5 = a2;
  v6 = *(int (__thiscall **)(int, char *, const char *, int))(*(_DWORD *)a2 + 8);
  v17[12] = (int)this;
  v7 = v6(a2, a3, "rb", a4);
  if ( !v7 )
    return 0;
  v9 = *(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 28);
  off_1068E160 = v4;
  a4 = v9(v5, v7);
  if ( (*(unsigned __int8 (__thiscall **)(int, int, int *, _DWORD, _DWORD))(*(_DWORD *)(v5 - 4) + 328))(
         v5 - 4,
         v7,
         &a2,
         0,
         0) )
  {
    v10 = ~(a2 - 1) & (a2 + a4);
  }
  else
  {
    v10 = a4 + 1;
  }
  v11 = *(_DWORD *)(v5 - 4);
  a2 = v10;
  v12 = (*(int (__thiscall **)(int, int, int, _DWORD))(v11 + 332))(v5 - 4, v7, v10, 0);
  v13 = *(int (__thiscall **)(int, int, int, int, int))(*(_DWORD *)(v5 - 4) + 272);
  v18 = (const char *)v12;
  v14 = v13(v5 - 4, v12, a2, a4, v7);
  v15 = *(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 12);
  HIBYTE(a2) = v14 != 0;
  v15(v5, v7);
  v16 = v18;
  if ( HIBYTE(a2) )
  {
    v18[a4] = 0;
    if ( v16 )
    {
      sub_1042DEC0(v16, strlen(v16), 9);
      HIBYTE(a3) = sub_1042BC60(v4, (int)v17, v5, 0);
      sub_1002A150(v17);
      HIBYTE(a2) = HIBYTE(a3);
    }
    else
    {
      HIBYTE(a2) = 1;
    }
  }
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)(v5 - 4) + 336))(v5 - 4, v16);
  return HIBYTE(a2);
}
