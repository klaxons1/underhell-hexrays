char __userpurge sub_10082470@<al>(int a1@<ecx>, int a2@<ebx>, float a3, float a4)
{
  bool v5; // al
  _DWORD *v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  double v10; // st7
  bool v11; // bl
  bool v12; // zf
  int v13; // ebx
  bool v14; // al
  double v15; // st7
  double v16; // st7
  char *v17; // eax
  char Buffer[256]; // [esp+Ah] [ebp-102h] BYREF
  bool v21; // [esp+10Ah] [ebp-2h]
  char v22; // [esp+10Bh] [ebp-1h]
  float v23; // [esp+114h] [ebp+8h]

  v5 = sub_10023D10(*(_DWORD **)(a1 + 4), 1);
  v6 = *(_DWORD **)(a1 + 4);
  v21 = v5;
  v22 = 0;
  v7 = sub_100223E0(v6);
  if ( v7 && v7 != 2 )
    return v22;
  v8 = **(_DWORD **)(a1 + 36);
  if ( v8 )
  {
    v9 = *(_DWORD *)(v8 + 40);
    if ( v9 )
    {
      if ( *(_DWORD *)(v8 + 36) == *(_DWORD *)(v9 + 36) && (*(_BYTE *)(v8 + 32) & 0x2A) == 0 )
      {
        v10 = *(float *)(dword_106B31C8 + 12);
        v11 = v10 >= *(float *)(a1 + 60);
        if ( LOBYTE(a3) && v10 < *(float *)(a1 + 60) )
          v11 = v21;
        if ( sub_10023500() && v11 )
        {
          if ( dword_10693438 == *(_DWORD *)(dword_106B31C8 + 4) )
            v11 = 0;
          else
            dword_10693438 = *(_DWORD *)(dword_106B31C8 + 4);
        }
        v12 = !v11;
        *(_BYTE *)(a1 + 64) = LOBYTE(a3);
        v13 = a2;
        if ( v12 )
        {
          if ( !LOBYTE(a3) && (!v21 || *(_DWORD *)(*(_DWORD *)(a1 + 4) + 2344)) )
            return v22;
          if ( sub_10023500() )
          {
            v23 = *(float *)(dword_106B31C8 + 12) - *(float *)(a1 + 68);
            v10 = flt_104A19E4[sub_10023500()];
            if ( v10 >= v23 )
              return v22;
          }
        }
        else
        {
          v14 = sub_10023500();
          if ( v21 )
            v15 = flt_104A19D4[v14];
          else
            v15 = flt_104A19DC[v14];
          if ( *(int *)(*(_DWORD *)(a1 + 4) + 2344) > 0 )
            v15 = v15 + v15;
          *(float *)(a1 + 60) = v15 + *(float *)(dword_106B31C8 + 12);
          v10 = a4;
          if ( sub_10082330((_DWORD *)a1, a4) || sub_100803C0(a1, v13) )
            goto LABEL_30;
        }
        if ( !sub_10082440((_DWORD *)a1, v10) )
          return v22;
LABEL_30:
        v16 = *(float *)(dword_106B31C8 + 12);
        v22 = 1;
        *(float *)(a1 + 68) = v16;
        if ( *(_DWORD *)(dword_106934A4 + 48) )
        {
          v17 = sub_1001E280(Buffer, "[Nav] %s", "Simplified path\n");
          sub_10029660(*(_DWORD **)(a1 + 4), (int)v17);
        }
        return v22;
      }
    }
  }
  return 0;
}
