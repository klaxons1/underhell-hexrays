void __thiscall sub_10194F40(int this)
{
  unsigned int v2; // ecx
  _DWORD *v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  float *v6; // eax
  float *v7; // esi
  char *v8; // eax
  int v9; // eax

  v2 = *(_DWORD *)(this + 3372);
  if ( v2 != -1 )
  {
    v3 = (_DWORD *)((char *)off_103DCD74 + 16 * (v2 & 0xFFF) + 4);
    v4 = v2 >> 12;
    if ( v3[1] == v4 )
    {
      if ( *v3 )
      {
        v5 = v3[1] == v4 ? *v3 : 0;
        v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 164))(v5);
        v7 = v6;
        if ( v6 )
        {
          v8 = (char *)sub_10029EE0(v6, *((_DWORD *)v6 + 452));
          v9 = sub_10029D40((_DWORD *)(this - 12), v8);
          if ( v9 >= 0 )
          {
            if ( v9 != *(_DWORD *)(this + 1796) )
            {
              sub_10029860(this - 12, v9);
              sub_10039310(this - 12);
            }
            sub_10025680((float *)(this - 12), v7[454]);
            *(float *)(this + 1224) = v7[309];
          }
        }
      }
    }
  }
}
