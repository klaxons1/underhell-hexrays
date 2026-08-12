void __stdcall sub_101569B0(int a1)
{
  int v1; // eax
  int v2; // ecx
  int v3; // eax
  int v4; // esi
  int *v5; // ecx
  int v6; // eax
  int v7; // eax

  v1 = a1;
  if ( a1 || (v1 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0)) != 0 )
  {
    v2 = *(_DWORD *)(v1 + 12);
    if ( v2 )
    {
      v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 20))(v2);
      v4 = v3;
      if ( v3 )
      {
        if ( !byte_106B4F38 )
        {
          if ( *(_DWORD *)(v3 + 4132) != COERCE_INT(0.0) )
          {
            if ( *(_BYTE *)(v3 + 84) )
            {
              *(_BYTE *)(v3 + 88) |= 1u;
            }
            else
            {
              v5 = *(int **)(v3 + 24);
              if ( v5 )
                sub_100194B0(v5, 4132);
            }
            *(float *)(v4 + 4132) = 0.0;
          }
          v6 = sub_1023CA80(a1);
          v7 = sub_1023C740(v6);
          if ( v7 )
            sub_1023C7A0(v7);
          sub_100EA9A0((int *)v4, 0x10000);
          sub_100EA940((int *)v4, 0x400000);
          sub_100EA940((int *)v4, 0x8000);
          sub_101129A0((unsigned __int16 *)(v4 + 320), *(_WORD *)(v4 + 356) | 4);
          if ( dword_106B3CDC )
          {
            (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 220))(dword_106B3CDC, a1);
            (*(void (__thiscall **)(int, int))(*(_DWORD *)off_10627F88 + 84))(off_10627F88, v4);
          }
        }
        sub_101C5BF0(v4);
        sub_101C5EA0(v4);
        sub_100F6C40((_DWORD *)v4);
      }
    }
  }
}
