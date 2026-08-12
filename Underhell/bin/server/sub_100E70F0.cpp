int __thiscall sub_100E70F0(int this, _DWORD *a2, _BYTE *a3)
{
  _DWORD *v3; // edi
  int v5; // edi
  int v6; // edi
  int v7; // eax
  int v8; // ecx
  int v10; // [esp-4h] [ebp-254h]
  int v11; // [esp-4h] [ebp-254h]
  int v12; // [esp-4h] [ebp-254h]
  int v13; // [esp-4h] [ebp-254h]
  int v14; // [esp-4h] [ebp-254h]
  _BYTE v15[512]; // [esp+Ch] [ebp-244h] BYREF
  _DWORD v16[5]; // [esp+20Ch] [ebp-44h] BYREF
  char v17; // [esp+220h] [ebp-30h]
  int v18; // [esp+228h] [ebp-28h]
  int v19; // [esp+22Ch] [ebp-24h]
  int v20; // [esp+23Ch] [ebp-14h] BYREF
  int v21; // [esp+240h] [ebp-10h] BYREF
  int i; // [esp+244h] [ebp-Ch]
  int v23; // [esp+248h] [ebp-8h] BYREF
  int v24; // [esp+24Ch] [ebp-4h] BYREF

  v3 = a2;
  *a3 = 0;
  v10 = *a2;
  v20 = 0;
  (**(void (__thiscall ***)(int, int *, int, int))(dword_10700A38 + 4))(dword_10700A38 + 4, &v20, 4, v10);
  if ( v20 == 2 )
  {
    v11 = *a2;
    v21 = 0;
    (**(void (__thiscall ***)(int, int *, int, int))(dword_10700A38 + 4))(dword_10700A38 + 4, &v21, 4, v11);
    if ( v21 == *(_DWORD *)(this + 56) )
    {
      v12 = *a2;
      v23 = 0;
      (**(void (__thiscall ***)(int, int *, int, int))(dword_10700A38 + 4))(dword_10700A38 + 4, &v23, 4, v12);
      if ( v23 == *(_DWORD *)(this + 64) )
      {
        v13 = *a2;
        v24 = 0;
        (**(void (__thiscall ***)(int, int *, int, int))(dword_10700A38 + 4))(dword_10700A38 + 4, &v24, 4, v13);
        sub_1042DE40(0, 0, 0);
        for ( i = 0; i < v24; ++i )
        {
          v14 = *v3;
          a3 = 0;
          (**(void (__thiscall ***)(int, _BYTE **, int, int))(dword_10700A38 + 4))(dword_10700A38 + 4, &a3, 4, v14);
          v16[3] = 0;
          v16[4] = 0;
          v17 = 0;
          v19 = 0;
          v18 = -1;
          sub_1042D4C0(v16);
          sub_1042D610(a3);
          v5 = (**(int (__thiscall ***)(int, _DWORD, _BYTE *, _DWORD))(dword_10700A38 + 4))(
                 dword_10700A38 + 4,
                 v16[0],
                 a3,
                 *v3);
          sub_1042D280(0, 0);
          sub_1042DDC0(0, v5);
          sub_1042E170(v15, 512);
          v6 = *(_DWORD *)(this + 8) + 24 * (unsigned __int16)sub_100E6E10(this, (int)v15) + 8;
          v7 = sub_1008A260(v16);
          *(_DWORD *)(v6 + 4) = v7;
          if ( v7 == -1 && *(_DWORD *)(this + 68) == 1 )
            *(_DWORD *)(v6 + 4) = 0;
          v8 = *(_DWORD *)(*(_DWORD *)(this + 32) + 4 * *(_DWORD *)(v6 + 12));
          (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v8 + 4))(v8, v16);
          v3 = a2;
        }
        if ( v16[2] >= 0 && v16[0] )
          (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v16[0]);
      }
      else
      {
        Msg("Discarding repository '%s' due to meta checksum change\n", *(const char **)(this + 52));
        *a3 = 1;
      }
    }
    else
    {
      Msg("Discarding repository '%s' due to version change\n", *(const char **)(this + 52));
      *a3 = 1;
    }
  }
  else
  {
    DevMsg("Discarding repository '%s' due to cache system version change\n", *(const char **)(this + 52));
    *a3 = 1;
  }
  return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)(dword_10700A38 + 4) + 12))(dword_10700A38 + 4, *v3);
}
