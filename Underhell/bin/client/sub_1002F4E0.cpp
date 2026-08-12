void __thiscall sub_1002F4E0(_DWORD *this, int *a2, int a3, int a4, int a5, int a6, int a7)
{
  int v8; // ecx
  int v9; // ebx
  int v10; // edx
  int v11; // ecx
  int v12; // esi
  int *v13; // edx
  int v14; // esi
  int v16; // eax
  int v17; // eax
  _DWORD *v18; // eax
  _DWORD *v19; // eax
  int v20; // ebx
  _DWORD *v21; // eax
  _DWORD *v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // [esp+2Ch] [ebp-108h]
  _BYTE v26[128]; // [esp+44h] [ebp-F0h] BYREF
  int v27[12]; // [esp+C4h] [ebp-70h] BYREF
  _BYTE v28[48]; // [esp+F4h] [ebp-40h] BYREF
  int v29; // [esp+124h] [ebp-10h]
  int v30; // [esp+12Ch] [ebp-8h]
  int v31; // [esp+130h] [ebp-4h]
  _DWORD *v32; // [esp+140h] [ebp+Ch]
  int v33; // [esp+144h] [ebp+10h]

  CVProfile::EnterScope(g_VProfCurrentProfile, "C_BaseAnimating::BuildTransformations", 0, "Client_Animation", 0, 4);
  if ( a2 )
  {
    memset(v26, 0, sizeof(v26));
    v8 = this[298];
    v9 = *a2 + *(_DWORD *)(*a2 + 160);
    if ( v8 )
    {
      v10 = this[323];
      v31 = this[322];
      this[323] = 524032;
      this[322] = 524032;
      v25 = *(_DWORD *)(*a2 + 156);
      v30 = v10;
      (*(void (__thiscall **)(int, _DWORD *, int, int, _BYTE *, _DWORD *))(*(_DWORD *)v8 + 4))(
        v8,
        this,
        v9,
        v25,
        v26,
        this + 320);
      v11 = v31;
      this[323] = v30;
      this[322] = v11;
    }
    if ( (this[28] & 1) != 0 )
    {
      if ( !this[468] )
      {
        v18 = (_DWORD *)sub_100DDA40(60);
        if ( v18 )
          v19 = sub_1001A560(v18);
        else
          v19 = 0;
        this[468] = v19;
        sub_1001A440(v19, (int)this);
      }
      sub_1001A830(this[468], a6);
    }
    else
    {
      v12 = this[468];
      if ( v12 )
      {
        sub_1011A810(v12 + 40);
        sub_1011A810(v12 + 20);
        sub_10034930(v12);
        this[468] = 0;
      }
    }
    v13 = a2;
    v14 = 0;
    if ( *(int *)(*a2 + 156) > 0 )
    {
      v30 = a4;
      v32 = (_DWORD *)(v9 + 168);
      v31 = 0;
      v33 = a3;
      v29 = -168 - v9;
      do
      {
        if ( (a6 & *(_DWORD *)(v13[11] + 4 * v14)) != 0 )
        {
          v16 = this[468];
          if ( (!v16
             || !*(_DWORD *)(v16 + 12)
             || ((1 << (v14 & 7)) & *(unsigned __int8 *)(*(_DWORD *)(v16 + 40) + (v14 >> 3))) == 0)
            && !v26[v14] )
          {
            if ( !sub_10020210(v13, v14, (int)(this + 320)) )
            {
              if ( ((1 << (v14 & 0x1F)) & *(_DWORD *)(a7 + 4 * ((unsigned int)v14 >> 5))) == 0 )
              {
                sub_101F0F40(v30, v33, v28);
                if ( (*(_BYTE *)(a2[11] + 4 * v14) & 4) != 0
                  && (*((_BYTE *)v32 + v29 + *(_DWORD *)(*a2 + 160) + *a2 + 164) & 5) != 0 )
                {
                  v17 = *(v32 - 41);
                  if ( v17 == -1 )
                    sub_101EDC00(a5, v28, v27);
                  else
                    sub_101EDC00(this[321] + 48 * v17, v28, v27);
                  if ( *v32 )
                    v20 = (int)v32 + *v32 - 168;
                  else
                    v20 = 0;
                  if ( !this[476] )
                  {
                    v21 = (_DWORD *)sub_100DDA40(28);
                    if ( v21 )
                      v22 = sub_1002DEB0(v21);
                    else
                      v22 = 0;
                    this[476] = v22;
                  }
                  sub_100DA9F0(v14, *((float *)off_103DC81C + 3), v20, (int)v27, v31 + this[321]);
                }
                else
                {
                  v23 = *(_DWORD *)(a2[16] + 4 * v14);
                  if ( v23 == -1 )
                    sub_101EDC00(a5, v28, v31 + this[321]);
                  else
                    sub_101EDC00(this[321] + 48 * v23, v28, this[321] + v31);
                }
              }
              if ( *(_DWORD *)(a2[16] + 4 * v14) == -1 )
                (*(void (__thiscall **)(_DWORD *, int))(*this + 608))(this, v31 + this[321]);
            }
            v13 = a2;
          }
        }
        v24 = *v13;
        v33 += 12;
        v30 += 16;
        v32 += 54;
        v31 += 48;
        ++v14;
      }
      while ( v14 < *(_DWORD *)(v24 + 156) );
    }
    CVProfile::ExitScope(g_VProfCurrentProfile);
  }
  else
  {
    CVProfile::ExitScope(g_VProfCurrentProfile);
  }
}
