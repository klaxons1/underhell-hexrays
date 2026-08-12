int __thiscall sub_10125180(int *this, int a2)
{
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  int v7; // edi
  int v8; // edx
  float *v9; // ebx
  int (__thiscall *v10)(int *); // eax
  float *v11; // eax
  double v12; // st7
  double v13; // st7
  int v14; // ecx
  float *v15; // edx
  double v16; // st7
  double v17; // st6
  double v18; // st5
  double v19; // st4
  float *v20; // ebx
  double v21; // st3
  double v22; // rt1
  double v23; // st4
  double v24; // st5
  double v25; // rt2
  int v26; // eax
  int v27; // ecx
  double v28; // st5
  double v29; // st6
  double v30; // st7
  double v31; // rt2
  double v32; // st6
  double v33; // st6
  double v34; // st6
  int v35; // [esp-Ch] [ebp-294h]
  int v36; // [esp-8h] [ebp-290h]
  _DWORD *v37[3]; // [esp+4h] [ebp-284h] BYREF
  char v38[544]; // [esp+10h] [ebp-278h] BYREF
  int v39; // [esp+230h] [ebp-58h]
  float v40[6]; // [esp+234h] [ebp-54h] BYREF
  float v41[7]; // [esp+24Ch] [ebp-3Ch] BYREF
  float v42; // [esp+268h] [ebp-20h]
  float v43; // [esp+26Ch] [ebp-1Ch]
  int v44; // [esp+274h] [ebp-14h]
  float v45; // [esp+278h] [ebp-10h]
  float v46; // [esp+27Ch] [ebp-Ch]
  int v47; // [esp+280h] [ebp-8h]
  float v48; // [esp+284h] [ebp-4h]

  CVProfile::EnterScope(g_VProfCurrentProfile, "CSpriteTrail::DrawModel", 0, "Particle/Effect_Rendering", 0, 4);
  if ( this[706] < 1 )
  {
    CVProfile::ExitScope(g_VProfCurrentProfile);
    return 1;
  }
  if ( *((_WORD *)this + 57) != 0xFFFF
    && *((_BYTE *)this + 116)
    && (v36 = *((unsigned __int8 *)this + 112),
        v35 = (int)*((float *)this + 304),
        v4 = (*(int (__thiscall **)(int *))(*this + 36))(this),
        (v5 = sub_10017240((int)this, v4, v35, v36)) != 0) )
  {
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C970 + 380))(dword_1047C970);
    v7 = v6;
    if ( v6 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6);
    v37[0] = &CBeamSegDraw::`vftable';
    sub_10016C20((int)v38);
    v8 = this[706];
    v39 = 0;
    sub_10233F90(v7, v8 + 1, *(_DWORD *)(v5 + 16), 0, 0);
    v9 = (float *)&this[6 * (((unsigned __int8)this[705] + (unsigned __int8)this[706] - 1) & 0x3F) + 321];
    v10 = *(int (__thiscall **)(int *))(*this + 4);
    v40[3] = *((float *)off_103DC81C + 3) + *((float *)this + 718);
    v11 = (float *)v10(this);
    v40[0] = *v11;
    v40[1] = v11[1];
    v12 = v11[2];
    v40[2] = v11[2];
    sub_100345D0(v40, v9);
    v13 = v12 * *((float *)this + 722);
    v14 = 0;
    v15 = 0;
    v47 = 0;
    v40[4] = v13 + v9[4];
    v16 = 0.0;
    v40[5] = 0.0;
    v17 = *((float *)this + 723);
    v45 = *((float *)this + 723);
    if ( this[706] >= 0 )
    {
      v18 = 1.0;
      v19 = 0.0039215689;
      while ( 1 )
      {
        if ( v14 == this[706] )
          v20 = v40;
        else
          v20 = (float *)&this[6 * (((_BYTE)v14 + (unsigned __int8)this[705]) & 0x3F) + 321];
        v21 = (v20[3] - *((float *)off_103DC81C + 3)) / *((float *)this + 718);
        v46 = v21;
        if ( v21 <= v18 )
        {
          v25 = v19;
          v23 = v21;
          v24 = v25;
          if ( v21 >= v16 )
            goto LABEL_19;
          v23 = v16;
        }
        else
        {
          v22 = v19;
          v23 = v18;
          v24 = v22;
        }
        v46 = v23;
LABEL_19:
        v26 = *((unsigned __int8 *)this + 85);
        LODWORD(v48) = *((unsigned __int8 *)this + 84);
        v27 = *((unsigned __int8 *)this + 86);
        v41[3] = (double)SLODWORD(v48) * v24;
        v41[4] = (double)v26 * v24;
        v41[5] = v24 * (double)v27;
        v48 = v23;
        v28 = v17;
        v29 = v23;
        if ( v28 > v16 )
        {
          if ( v15 )
          {
            sub_100345D0(v20, v15);
            v30 = v45 - v16;
            v45 = v30;
            v29 = v46;
            v28 = v30;
            v16 = 0.0;
          }
          if ( v28 > v16 )
          {
            v31 = v29;
            v32 = (*((float *)this + 723) - v28) / *((float *)this + 723);
            if ( v32 < v31 )
              v48 = v32;
          }
        }
        v44 = (*(int (__thiscall **)(int *))(*(this - 1) + 600))(this - 1);
        v43 = (double)v44 * 0.0039215689 * v48;
        v41[0] = *v20;
        v41[1] = v20[1];
        v41[2] = v20[2];
        v33 = *((float *)this + 719);
        if ( *((float *)this + 720) >= 0.0 )
          v33 = (v33 - *((float *)this + 720)) * v46 + *((float *)this + 720);
        v42 = v33;
        v34 = v33 + v20[5];
        v42 = v34;
        if ( v34 < 0.0 )
          v42 = 0.0;
        v41[6] = v20[4];
        sub_10234090(v41);
        if ( *((float *)off_103DC81C + 3) >= (double)v20[3] )
        {
          ++this[705];
          --v47;
          --this[706];
        }
        v15 = v20;
        if ( ++v47 > this[706] )
          break;
        v14 = v47;
        v16 = 0.0;
        v17 = v45;
        v19 = 0.0039215689;
        v18 = 1.0;
      }
    }
    sub_10233EF0(v37);
    sub_10016F30(v37);
    if ( v7 )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 12))(v7);
      (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 4))(v7);
    }
    CVProfile::ExitScope(g_VProfCurrentProfile);
    return 1;
  }
  else
  {
    CVProfile::ExitScope(g_VProfCurrentProfile);
    return 0;
  }
}
