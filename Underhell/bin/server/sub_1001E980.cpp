char __thiscall sub_1001E980(_DWORD *this, _DWORD *a2)
{
  int v3; // edx
  int v4; // ecx
  int v5; // eax
  _DWORD *v6; // edi
  int v7; // esi
  double v8; // st7
  int v9; // ecx
  const char *v10; // eax
  char *v11; // eax
  char *v12; // eax
  char v14[256]; // [esp+Ch] [ebp-200h] BYREF
  char Buffer[256]; // [esp+10Ch] [ebp-100h] BYREF
  float v16; // [esp+214h] [ebp+8h]

  if ( *a2 != -3 )
  {
    v3 = this[121];
    if ( *(_DWORD *)(v3 + 128) != -1
      && off_1061BE18[4 * (*(_DWORD *)(v3 + 128) & 0xFFF) + 2] == *(_DWORD *)(v3 + 128) >> 12
      && off_1061BE18[4 * (*(_DWORD *)(v3 + 128) & 0xFFF) + 1] )
    {
      v4 = *(_DWORD *)(v3 + 128) == -1
        || off_1061BE18[4 * (*(_DWORD *)(v3 + 128) & 0xFFF) + 2] != *(_DWORD *)(v3 + 128) >> 12
         ? 0
         : off_1061BE18[4 * (*(_DWORD *)(v3 + 128) & 0xFFF) + 1];
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 284))(v4) )
      {
        v5 = sub_1001E3C0((_DWORD *)this[121]);
        v6 = this - 526;
        v7 = v5;
        v8 = (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v6 + 1676))(v6) ? 40.0 : 0.0;
        v16 = v8;
        if ( *(_BYTE *)(v7 + 306) == 6
          && v7 != sub_101C5260(v6)
          && !sub_1001E3A0((float *)v7)
          && !__RTDynamicCast(
                v7,
                0,
                (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                (int)&CBasePropDoor `RTTI Type Descriptor',
                0) )
        {
          v9 = *(_DWORD *)(v7 + 424);
          if ( v9 )
          {
            if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 40))(v9)
              && (v16 + 35.0 + 0.1 >= ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(v7 + 424) + 116))(*(_DWORD *)(v7 + 424))
               || v16 + 50.0 + 0.1 >= ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(v7 + 424) + 116))(*(_DWORD *)(v7 + 424))
               && sub_1001E440(v7)) )
            {
              if ( *(_DWORD *)(dword_106934A4 + 48) )
              {
                v10 = (const char *)sub_100D6390(v7);
                v11 = sub_1001E280(Buffer, "Setting ignore on object %s", v10);
                v12 = sub_1001E280(v14, "[Nav] %s", v11);
                sub_10029660(v6, v12);
              }
              sub_1001E350((float *)v7, 2.5);
            }
          }
        }
      }
    }
  }
  return 0;
}
