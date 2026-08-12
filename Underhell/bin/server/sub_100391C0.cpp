void __thiscall sub_100391C0(int this)
{
  int v2; // ecx
  bool v3; // bl
  double v4; // st7
  int v5; // esi
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // edi
  int v13; // esi
  int v14; // ebx
  float *v15; // eax
  int v16; // edi
  int v17; // ebx
  int v18; // eax
  double v19; // st7
  int v20; // ecx
  int v21; // edi
  int v22; // eax
  int v23; // ebx
  int v24; // esi
  int v25; // eax
  int v26; // eax
  int i; // esi
  int v28; // eax
  float X; // [esp+Ch] [ebp-5Ch]
  _BYTE v30[12]; // [esp+20h] [ebp-48h] BYREF
  float v31; // [esp+2Ch] [ebp-3Ch] BYREF
  float v32; // [esp+30h] [ebp-38h]
  float v33; // [esp+34h] [ebp-34h]
  float v34; // [esp+38h] [ebp-30h]
  float v35; // [esp+3Ch] [ebp-2Ch]
  float v36; // [esp+40h] [ebp-28h]
  float v37; // [esp+44h] [ebp-24h] BYREF
  float v38; // [esp+48h] [ebp-20h]
  float v39; // [esp+4Ch] [ebp-1Ch]
  int v40; // [esp+50h] [ebp-18h]
  int v41; // [esp+54h] [ebp-14h]
  int v42; // [esp+58h] [ebp-10h]
  int v43; // [esp+5Ch] [ebp-Ch]
  int v44; // [esp+60h] [ebp-8h]
  bool v45; // [esp+67h] [ebp-1h]

  v2 = dword_106B31C8;
  v3 = *(_DWORD *)(dword_106904E4 + 48) != 0;
  v45 = v3;
  if ( v3 )
  {
    if ( *(_DWORD *)(dword_106B31C8 + 24) != dword_10691B1C )
    {
      DevMsg(
        "NPC per tick is %d [%d] (tick %d, frame %d)\n",
        dword_10691B14,
        dword_10691B18,
        dword_10691B1C,
        *(_DWORD *)(dword_106B31C8 + 4));
      v2 = dword_106B31C8;
      dword_10691B1C = *(_DWORD *)(dword_106B31C8 + 24);
      dword_10691B18 = 0;
      dword_10691B14 = 0;
    }
    ++dword_10691B18;
    if ( *(int (**)())(this + 8) == sub_10039730
      && !*(_BYTE *)(this + 2176)
      && *(_DWORD *)(this + 2324) != 7
      && !*(_DWORD *)(this + 2352)
      && *(_BYTE *)(this + 2165) )
    {
      ++dword_10691B14;
    }
  }
  if ( *(_DWORD *)(dword_106907FC + 48) && *(_DWORD *)(dword_106905BC + 48) && *(_DWORD *)(v2 + 24) >= dword_10690424 )
  {
    if ( (dword_10691B10 & 1) == 0 )
    {
      dword_10691B10 |= 1u;
      dword_10691AFC = 0;
      dword_10691B00 = 64;
      dword_10691B04 = 16;
      dword_10691AFC = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 1280);
      dword_10691B08 = 0;
      dword_10691B0C = dword_10691AFC;
      atexit(sub_1046EAB0);
    }
    v4 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           3.0,
           5.0);
    v5 = dword_106B31C8;
    dword_10690424 = *(_DWORD *)(dword_106B31C8 + 24) + (int)(v4 / *(float *)(dword_106B31C8 + 28) + 0.5);
    if ( *(int *)(dword_106B31C8 + 20) <= 1 )
    {
      v7 = sub_10261B20();
      v5 = dword_106B31C8;
      v43 = v7;
      v6 = v7;
    }
    else
    {
      v6 = 0;
      v43 = 0;
    }
    v31 = 0.0;
    v32 = 0.0;
    v33 = 0.0;
    v37 = 0.0;
    v38 = 0.0;
    v39 = 0.0;
    if ( v6 )
    {
      sub_100F5AA0(&v37, &v31, 0, 0);
      v5 = dword_106B31C8;
    }
    v8 = *(_DWORD *)(v5 + 24);
    v9 = v8 - 1;
    v40 = (int)(0.1 / *(float *)(v5 + 28) + 0.5);
    v10 = dword_10690E04;
    v41 = v40 + v8;
    v11 = 0;
    v42 = v9;
    v44 = 0;
    if ( dword_10690E04 > 0 )
    {
      while ( 1 )
      {
        v12 = *(_DWORD *)((v10 != 0 ? dword_10690DF8 : 0) + 4 * v11);
        if ( *(int (**)())(v12 + 8) != sub_10039730
          || *(_BYTE *)(v12 + 2176)
          || *(_DWORD *)(v12 + 2324) == 7
          || *(_DWORD *)(v12 + 2352)
          || !*(_BYTE *)(v12 + 2165)
          || sub_100E9270(0) < v42
          || sub_100E9270(0) >= v41 )
        {
          if ( v3 )
          {
            v18 = sub_100E9270(0);
            DevMsg("   Ignoring %d\n", v18);
          }
        }
        else
        {
          v13 = 20 * sub_10038F40(&dword_10691AFC);
          *(_DWORD *)(v13 + dword_10691AFC) = v12;
          v14 = v13 + dword_10691AFC;
          *(_DWORD *)(v14 + 4) = sub_100E9270(0);
          if ( (*(_DWORD *)(v12 + 248) & 0x10) != 0 )
          {
            *(_BYTE *)(v13 + dword_10691AFC + 8) = 0;
          }
          else if ( v43 )
          {
            v15 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v12 + 504))(v12, v30);
            v16 = *(_DWORD *)(v12 + 24);
            v34 = *v15 - v37;
            v35 = v15[1] - v38;
            v17 = v13 + dword_10691AFC;
            v36 = v15[2] - v39;
            *(_BYTE *)(v17 + 8) = sub_10262560(v16) != 0;
            *(float *)(v13 + dword_10691AFC + 16) = off_10689714();
            *(float *)(v13 + dword_10691AFC + 12) = v35 * v32 + v34 * v31 + v36 * v33;
          }
          else
          {
            *(_BYTE *)(v13 + dword_10691AFC + 8) = 1;
            *(float *)(v13 + dword_10691AFC + 12) = 1.0;
            *(float *)(v13 + dword_10691AFC + 16) = 0.0;
          }
        }
        v10 = dword_10690E04;
        v11 = v44 + 1;
        v44 = v11;
        if ( v11 >= dword_10690E04 )
          break;
        v3 = v45;
      }
    }
    if ( dword_10691B08 )
    {
      sub_100316F0(&dword_10691AFC, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10020230);
      v41 = dword_10691B08 + 1;
      v19 = ceil((double)(dword_10691B08 + 1) / (double)v40);
      v20 = dword_10691AFC;
      v21 = *(_DWORD *)(dword_10691AFC + 4);
      v22 = *(_DWORD *)(dword_106B31C8 + 24);
      v40 = (int)v19;
      if ( v22 >= v21 )
      {
        v43 = v21;
      }
      else
      {
        v21 = v22;
        v43 = v22;
      }
      v23 = (int)v19 - 1;
      if ( v45 )
      {
        DevMsg("Rebalance %d!\n", dword_10691B08 + 1);
        DevMsg("   Distributing %d\n", v21);
        v20 = dword_10691AFC;
      }
      v44 = 0;
      if ( dword_10691B08 > 0 )
      {
        v24 = 0;
        while ( 1 )
        {
          if ( !v23 || *(_DWORD *)(v24 + v20 + 4) > v21 )
          {
            if ( *(_DWORD *)(v24 + v20 + 4) > v21 )
              v21 = *(_DWORD *)(v24 + v20 + 4);
            else
              ++v21;
            v43 = v21;
            if ( v45 )
              DevMsg("   Distributing %d\n", v21);
            v23 = v40;
          }
          if ( sub_100E9270(0) == v21 )
          {
            if ( v45 )
            {
              v26 = sub_100E9270(0);
              DevMsg("      Leaving %d\n", v26);
            }
          }
          else
          {
            if ( v45 )
            {
              v25 = sub_100E9270(0);
              DevMsg("      Bumping %d to %d\n", v25, v21);
            }
            X = (double)v43 * *(float *)(dword_106B31C8 + 28);
            sub_100EC4A0(X, 0);
          }
          --v23;
          v24 += 20;
          if ( ++v44 >= dword_10691B08 )
            break;
          v20 = dword_10691AFC;
        }
      }
    }
    dword_10691B08 = 0;
    if ( v45 )
    {
      DevMsg("New distribution is:\n");
      for ( i = 0; i < dword_10690E04; ++i )
      {
        v28 = sub_100E9270(0);
        DevMsg("   %d\n", v28);
      }
    }
  }
}
