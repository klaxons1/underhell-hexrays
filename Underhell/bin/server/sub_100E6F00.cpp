void *__thiscall sub_100E6F00(int this, _DWORD *a2, int a3, _BYTE *a4)
{
  int v5; // esi
  void *result; // eax
  size_t v7; // esi
  int v8; // esi
  int v9; // eax
  int v10; // ecx
  _BYTE v11[512]; // [esp+Ch] [ebp-264h] BYREF
  _DWORD v12[12]; // [esp+20Ch] [ebp-64h] BYREF
  void *v13[5]; // [esp+23Ch] [ebp-34h] BYREF
  char v14; // [esp+250h] [ebp-20h]
  int v15; // [esp+258h] [ebp-18h]
  int v16; // [esp+25Ch] [ebp-14h]
  int v17; // [esp+26Ch] [ebp-4h] BYREF
  int v18; // [esp+280h] [ebp+10h]

  *a4 = 0;
  sub_1042DE40(0, 0, 0);
  (*(void (__thiscall **)(int, _DWORD, _DWORD *, _DWORD, _DWORD))(*(_DWORD *)dword_10700A38 + 324))(
    dword_10700A38,
    *a2,
    v12,
    0,
    0);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)(dword_10700A38 + 4) + 12))(dword_10700A38 + 4, *a2);
  v17 = 0;
  sub_1042D670(&v17, 4u);
  if ( v17 == 2 )
  {
    if ( sub_1008A260(v12) == *(_DWORD *)(this + 56) )
    {
      if ( sub_1008A260(v12) == *(_DWORD *)(this + 64) )
      {
        v5 = sub_1008A260(v12);
        result = (void *)sub_1042DE40(0, 0, 0);
        if ( v5 > 0 )
        {
          v18 = v5;
          do
          {
            v7 = sub_1008A260(v12);
            v13[3] = 0;
            v13[4] = 0;
            v14 = 0;
            v16 = 0;
            v15 = -1;
            sub_1042D4C0(v13);
            sub_1042D610(v7);
            sub_1042D670(v13[0], v7);
            sub_1042D280(0, 0);
            sub_1042DDC0(0, v7);
            sub_1042E170(v11, 512);
            v8 = *(_DWORD *)(this + 8) + 24 * (unsigned __int16)sub_100E6E10(this, (int)v11) + 8;
            v9 = sub_1008A260(v13);
            *(_DWORD *)(v8 + 4) = v9;
            if ( v9 == -1 && *(_DWORD *)(this + 68) == 1 )
              *(_DWORD *)(v8 + 4) = 0;
            v10 = *(_DWORD *)(*(_DWORD *)(this + 32) + 4 * *(_DWORD *)(v8 + 12));
            result = (void *)(*(int (__thiscall **)(int, void **))(*(_DWORD *)v10 + 4))(v10, v13);
            --v18;
          }
          while ( v18 );
        }
        if ( (int)v13[2] >= 0 )
        {
          result = v13[0];
          if ( v13[0] )
            result = (void *)(*(int (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, v13[0]);
        }
      }
      else
      {
        result = (void *)Msg("Discarding repository '%s' due to meta checksum change\n", *(const char **)(this + 52));
        *a4 = 1;
      }
    }
    else
    {
      result = (void *)Msg("Discarding repository '%s' due to version change\n", *(const char **)(this + 52));
      *a4 = 1;
    }
  }
  else
  {
    DevMsg("Discarding repository '%s' due to cache system version change\n", *(const char **)(this + 52));
    result = a4;
    *a4 = 1;
  }
  if ( v12[2] >= 0 )
  {
    result = (void *)v12[0];
    if ( v12[0] )
      return (void *)(*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v12[0]);
  }
  return result;
}
