void __fastcall sub_101392F0(int a1)
{
  int v1; // esi
  double v2; // st7
  int v3; // ebx
  int v4; // edi
  float v5; // [esp+0h] [ebp-18h]
  int v6; // [esp+10h] [ebp-8h]
  float v7; // [esp+14h] [ebp-4h]

  v1 = *(_DWORD *)(a1 + 4);
  v6 = a1;
  if ( v1 )
  {
    v2 = *((float *)off_103DC81C + 4);
    v7 = *((float *)off_103DC81C + 4);
    if ( 0.0 != v2 )
    {
      v3 = 0;
      while ( 1 )
      {
        v4 = *(_DWORD *)(v1 + 44);
        if ( (*(_DWORD *)(v1 + 52) & 0x4000) != 0 || *((float *)off_103DC81C + 3) < (double)*(float *)(v1 + 200) )
        {
          v5 = v2;
          sub_10138E80(v1, v5);
          sub_10137160(v1);
          if ( *(_WORD *)(v1 + 8) != 0xFFFF )
            (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)off_103DCDDC + 48))(
              off_103DCDDC,
              *(unsigned __int16 *)(v1 + 8));
          v3 = v1;
        }
        else
        {
          if ( v3 )
            *(_DWORD *)(v3 + 44) = v4;
          else
            *(_DWORD *)(a1 + 4) = v4;
          sub_10137400(a1, v1);
        }
        v1 = v4;
        if ( !v4 )
          break;
        v2 = v7;
        a1 = v6;
      }
    }
  }
}
