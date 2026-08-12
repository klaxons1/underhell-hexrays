int __thiscall sub_100CE2A0(void *this, char *a2, int a3)
{
  char *v3; // esi
  _BYTE *v4; // edi
  char v5; // al
  _BYTE *v6; // ecx
  char *v7; // eax
  char v8; // cl
  int v9; // eax
  _BYTE Src[1024]; // [esp+Ch] [ebp-614h] BYREF
  _BYTE v12[512]; // [esp+40Ch] [ebp-214h] BYREF
  _DWORD v13[4]; // [esp+60Ch] [ebp-14h] BYREF
  void *v14; // [esp+61Ch] [ebp-4h]

  v3 = a2;
  v14 = this;
  v4 = Src;
  while ( *v3 )
  {
    if ( *v3 == 37 )
    {
      v5 = *++v3;
      v6 = v12;
      if ( v5 )
      {
        while ( v5 != 37 )
        {
          ++v3;
          *v6 = v5;
          v5 = *v3;
          ++v6;
          if ( !*v3 )
            goto LABEL_9;
        }
        if ( *v3 )
          ++v3;
      }
LABEL_9:
      *v6 = 0;
      sub_1022D3E0(v13);
      sub_100CBA90(v14, (int)v12, (int)v13);
      v7 = (char *)sub_1022CF00(v13);
      v8 = *v7;
      if ( *v7 )
      {
        v9 = v7 - v4;
        do
        {
          *v4 = v8;
          v8 = (v4++)[v9 + 1];
        }
        while ( v8 );
      }
      if ( v13[2] >= 0 )
      {
        if ( v13[0] )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v13[0]);
          v13[0] = 0;
        }
        v13[1] = 0;
      }
    }
    else
    {
      *v4++ = *v3++;
    }
  }
  *v4 = 0;
  return sub_1022D0A0(Src);
}
