int __thiscall sub_10086FB0(int *this, int a2, int a3, int a4)
{
  int v5; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // edi
  bool v11; // zf
  int v12; // edi
  int v13; // eax
  int v14; // edx
  float *v15; // eax
  float *v16; // edi
  float *v17; // eax
  float *v18; // eax
  char v19; // al
  int v20; // eax
  _DWORD *v21; // esi
  bool v22; // bl
  float *v23; // eax
  float *v24; // [esp+10h] [ebp-E8h]
  float *v25; // [esp+10h] [ebp-E8h]
  float *v26; // [esp+10h] [ebp-E8h]
  int v27; // [esp+18h] [ebp-E0h]
  int v28; // [esp+18h] [ebp-E0h]
  int v29; // [esp+18h] [ebp-E0h]
  int v30[3]; // [esp+30h] [ebp-C8h] BYREF
  int v31[3]; // [esp+3Ch] [ebp-BCh] BYREF
  int v32[14]; // [esp+48h] [ebp-B0h] BYREF
  _BYTE v33[44]; // [esp+80h] [ebp-78h] BYREF
  float v34; // [esp+ACh] [ebp-4Ch]
  char v35; // [esp+B7h] [ebp-41h]
  int v36[3]; // [esp+D4h] [ebp-24h] BYREF
  int v37[3]; // [esp+E0h] [ebp-18h] BYREF
  int v38; // [esp+ECh] [ebp-Ch]
  int v39; // [esp+F0h] [ebp-8h]
  int v40; // [esp+F4h] [ebp-4h]
  int savedregs; // [esp+F8h] [ebp+0h] BYREF
  char v42; // [esp+103h] [ebp+Bh]
  char v43; // [esp+10Bh] [ebp+13h]

  v5 = *(_DWORD *)a3;
  v40 = *(_DWORD *)a2;
  v7 = this[8];
  v39 = v5;
  v38 = 0;
  if ( *(_DWORD *)(v7 + 1676) != a4 )
  {
    *(_DWORD *)(v7 + 1676) = a4;
    sub_10027A90(this[8], 1);
  }
  if ( (*(_BYTE *)(this[8] + 256) & 1) == 0 )
    DevWarning(2, "OFFGROUND!\n");
  sub_100EA940(1);
  v8 = a2;
  v9 = 32 * (1 << a4);
  if ( (v9 & *(_DWORD *)(a2 + 64)) == 0 )
  {
    if ( !sub_10080610(*(_DWORD **)(this[8] + 2588), v40, 131083) )
    {
LABEL_7:
      sub_10086450(v40, v39, (int)"      Cannot fit at node %d\n");
      return 0;
    }
    v8 = a2;
  }
  v11 = (v9 & *(_DWORD *)(a3 + 64)) == 0;
  v12 = v39;
  if ( v11 )
  {
    if ( !sub_10080610(*(_DWORD **)(this[8] + 2588), v39, 131083) )
      goto LABEL_7;
    v8 = a2;
  }
  v13 = *(_DWORD *)(v8 + 60);
  if ( v13 == 3 )
  {
    if ( *(_DWORD *)(a3 + 60) == 3 )
    {
      v29 = this[8];
      v26 = (float *)sub_10073730(a4);
      v23 = (float *)sub_10073710(a4);
      sub_100231A0((int)&savedregs, a4, (float *)(a2 + 4), (float *)(a3 + 4), v23, v26, 131083, v29, 0, (int)v33);
      if ( !v35 && 1.0 == v34 )
      {
        v38 = 4;
        sub_10086450(v40, v12, (int)"      Connect by flying\n");
      }
    }
  }
  else
  {
    v14 = *(_DWORD *)(a3 + 60);
    if ( v14 != 3 )
    {
      if ( v13 == 4 && v14 == 4 )
      {
        sub_1008D160(v36, a4);
        sub_1008D160(v37, a4);
        if ( sub_10018CD0((float *)(a2 + 4), (float *)(a3 + 4)) )
        {
          v27 = this[8];
          v24 = (float *)sub_10073730(a4);
          v15 = (float *)sub_10073710(a4);
          sub_100231A0((int)&savedregs, a4, (float *)v36, (float *)v37, v15, v24, 131083, v27, 0, (int)v33);
          if ( !v35 && 1.0 == v34 )
          {
            v38 = 8;
            sub_10086450(v40, v39, (int)"      Connect by climbing\n");
            return v38;
          }
        }
        else
        {
          v16 = (float *)sub_102650F0((int)v30, *(float *)(a3 + 56));
          v17 = (float *)sub_102650F0((int)v31, *(float *)(a2 + 56));
          if ( !sub_10086380(v16, (float *)v36, v17, (float *)v37) )
          {
            sub_10086450(v40, v39, (int)"      Not lined up for proper climbing\n");
            return 0;
          }
          v28 = this[8];
          v25 = (float *)sub_10073730(a4);
          v18 = (float *)sub_10073710(a4);
          sub_100231A0((int)&savedregs, a4, (float *)v36, (float *)v37, v18, v25, 131083, v28, 0, (int)v33);
          if ( !v35 && 1.0 == v34 )
          {
            v38 = 8;
            sub_10086450(v40, v39, (int)"      Connect by climbing\n");
            return v38;
          }
        }
      }
      else if ( v13 == 2 || v14 == 2 )
      {
        v43 = 0;
        sub_1008D160(v36, a4);
        sub_1008D160(v37, a4);
        if ( !sub_1007A470(*(_DWORD *)(this[8] + 2600), (float *)v36, 131083) )
        {
          sub_10086450(v40, v39, (int)"      Failed to stand at %d\n");
          v43 = 1;
        }
        if ( !sub_1007A470(*(_DWORD *)(this[8] + 2600), (float *)v37, 131083) )
        {
          sub_10086450(v40, v39, (int)"      Failed to stand at %d\n");
          return v38;
        }
        if ( !v43 )
        {
          if ( sub_1007BA50(*(_DWORD **)(this[8] + 2600), (float *)v36, (float *)v37, 131083, 100.0, 2, 0) )
          {
            v38 = 1;
            sub_10086450(v40, v39, (int)"      Nodes connect for ground movement\n");
          }
          else
          {
            sub_10086450(v40, v39, (int)"      Failed to walk between nodes\n");
            if ( *(_DWORD *)(a2 + 60) == 2 && *(_DWORD *)(a3 + 60) == 2 )
            {
              sub_1008D160(v36, a4);
              sub_1008D160(v37, a4);
              v42 = (*(int (__thiscall **)(int, int *, int *, int *))(*(_DWORD *)this[8] + 1720))(
                      this[8],
                      v36,
                      v37,
                      v37);
              v19 = (*(int (__thiscall **)(int, int *, int *, int *))(*(_DWORD *)this[8] + 1720))(
                      this[8],
                      v37,
                      v36,
                      v36);
              if ( v42 || v19 )
              {
                v20 = this[8];
                v21 = *(_DWORD **)(v20 + 2600);
                *(float *)(v20 + 552) = 1.0;
                memset(v32, 0, sizeof(v32));
                sub_1007C550(v21, 1, (float *)v36, (float *)v37, 131083, 0, 100.0, 0, (float *)v32);
                v22 = v32[0] >= 0;
                sub_1007C550(v21, 1, (float *)v37, (float *)v36, 131083, 0, 100.0, 0, (float *)v32);
                if ( v32[0] >= 0 || v22 )
                {
                  v38 = 2;
                  sub_10086450(v40, v39, (int)"      Nodes connect for jumping\n");
                }
              }
            }
          }
        }
      }
    }
  }
  return v38;
}
