void __thiscall sub_1016F4F0(_DWORD *this, char a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // esi
  double v8; // st7
  int v9; // ecx
  int (__thiscall *v10)(int, const char *, _DWORD); // eax
  float v11[64]; // [esp+18h] [ebp-110h] BYREF
  int i; // [esp+118h] [ebp-10h]
  int v13; // [esp+11Ch] [ebp-Ch]
  float v14; // [esp+120h] [ebp-8h]
  int v15; // [esp+124h] [ebp-4h]

  if ( (int)this[16] > 0 )
  {
    memset(v11, 0, sizeof(v11));
    v3 = sub_1016ECF0(this, this[6]);
    v14 = -1.0;
    v15 = v3;
    v13 = -1;
    for ( i = -1; v15 != 0xFFFF; v15 = (unsigned __int16)sub_1016DF30(this + 100, v15) )
    {
      v4 = this[101];
      v5 = v4 + 20 * (unsigned __int16)v15 + 8;
      if ( *(_DWORD *)v5 >= this[13] )
        break;
      v6 = *(_DWORD *)(v4 + 20 * (unsigned __int16)v15 + 16);
      if ( !strcmp((const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 4))(v6), "hltv_rank_camera") )
      {
        v7 = (*(int (__thiscall **)(_DWORD, const char *, _DWORD))(**(_DWORD **)(v5 + 8) + 24))(
               *(_DWORD *)(v5 + 8),
               "index",
               0);
        v8 = ((double (__thiscall *)(_DWORD, const char *, _DWORD))*(_DWORD *)(**(_DWORD **)(v5 + 8) + 28))(
               *(_DWORD *)(v5 + 8),
               "rank",
               0.0)
           + v11[v7];
        v11[v7] = v8;
        if ( v14 < v8 )
        {
          v9 = *(_DWORD *)(v5 + 8);
          v14 = v8;
          v10 = *(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v9 + 24);
          v13 = v7;
          i = v10(v9, "target", 0);
        }
      }
    }
    if ( a2 || 0.0 != v14 )
    {
      if ( v13 != -1 )
        (*(void (__thiscall **)(_DWORD *, int, int))(*this + 32))(this, v13, i);
    }
    else
    {
      (*(void (__thiscall **)(_DWORD *))(*this + 28))(this);
    }
  }
}
