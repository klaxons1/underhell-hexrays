char __thiscall sub_10106FD0(
        int this,
        int *a2,
        int a3,
        int a4,
        int a5,
        float a6,
        float a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v11; // ebx
  int v13; // ecx
  int v14; // eax
  int v15; // edi
  unsigned __int16 v16; // ax
  int v17; // edi
  char *v18; // esi
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  double v23; // st7
  int v24; // edi
  const char *v25; // ebx
  int v26; // eax
  int v27; // eax
  int v28; // edi
  int v29; // edi
  int v30; // ebx
  const char *v31; // eax
  int v32; // esi
  int *v33; // esi
  int v35; // [esp+18h] [ebp-624h]
  double v36; // [esp+20h] [ebp-61Ch]
  _DWORD v37[310]; // [esp+34h] [ebp-608h] BYREF
  char v38; // [esp+50Ch] [ebp-130h] BYREF
  _BYTE v39[255]; // [esp+50Dh] [ebp-12Fh] BYREF
  _DWORD v40[3]; // [esp+60Ch] [ebp-30h] BYREF
  void **v41; // [esp+618h] [ebp-24h]
  _DWORD v42[5]; // [esp+61Ch] [ebp-20h] BYREF
  int v43; // [esp+630h] [ebp-Ch]
  int *v44; // [esp+634h] [ebp-8h]
  _DWORD *v45; // [esp+638h] [ebp-4h]

  v11 = (int)a2;
  v13 = *a2;
  LOBYTE(v14) = 0;
  v43 = this;
  if ( v13 )
  {
    if ( *(_DWORD *)(v13 + 336) )
    {
      v40[1] = 0;
      v40[2] = 0;
      memset(v42, 0, sizeof(v42));
      v41 = &CCopyableUtlVector<ModelPoseDebugInfo::InfoText>::`vftable';
      v40[0] = a2;
      v15 = (unsigned __int16)sub_101061C0((_WORD *)(this + 4), (int)v40);
      v41 = &CCopyableUtlVector<ModelPoseDebugInfo::InfoText>::`vftable';
      LOBYTE(v14) = sub_1011A810(v42);
      if ( (_WORD)v15 != 0xFFFF )
      {
        v44 = (int *)(44 * v15 + *(_DWORD *)(this + 8) + 12);
        v14 = *v44;
        if ( (unsigned int)*v44 <= 0x7FF )
        {
          LOBYTE(v14) = ((1 << (*(_BYTE *)v44 & 0x1F)) & *(_DWORD *)(this + 4 * (v14 >> 5) + 64)) != 0;
          if ( (_BYTE)v14 )
          {
            v45 = 0;
            v16 = sub_10106E60((_WORD *)(this + 32), (int *)&a2);
            if ( v16 != 0xFFFF )
              v45 = (_DWORD *)(44 * v16 + *(_DWORD *)(this + 36) + 12);
            v17 = LODWORD(a6);
            v18 = (char *)sub_10127960(LODWORD(a6));
            if ( v17 >= sub_10126D70(v11) )
            {
              v19 = sub_10127960(0);
              sub_1001BA00(v18, v19);
            }
            memset(v37, 0, sizeof(v37));
            v37[3] = *((_DWORD *)v18 + 4);
            sprintf((char *const)&v37[4], "%s", &v18[*((_DWORD *)v18 + 2)]);
            sprintf((char *const)&v37[29], "%s", &v18[*((_DWORD *)v18 + 1)]);
            if ( !LOBYTE(v37[4]) )
            {
              v20 = v44[6];
              if ( v20 > 0 )
              {
                v21 = v44[3] + 1240 * v20;
                while ( 1 )
                {
                  v21 -= 1240;
                  --v20;
                  if ( (*(_BYTE *)v21 & 1) != 0 )
                  {
                    if ( *(_BYTE *)(v21 + 16) )
                      break;
                  }
                  if ( v20 <= 0 )
                    goto LABEL_18;
                }
                sprintf((char *const)&v37[4], "%s", (const char *)(v21 + 16));
              }
            }
LABEL_18:
            if ( v45 && (v22 = sub_10105840(v45, (int)v37)) != 0 )
              v23 = *(float *)(v22 + 8);
            else
              v23 = 0.0;
            v24 = *((_DWORD *)v18 + 1);
            a6 = v23;
            v36 = *(float *)&a10 * 100.0;
            v25 = &v18[*((_DWORD *)v18 + 2)];
            v26 = sub_1001AC00(v18, 0, 0);
            v35 = *(_DWORD *)(sub_101278E0(v26) + 16);
            v27 = sub_1001AC00(v18, 0, 0);
            a10 = *(_DWORD *)(sub_101278E0(v27) + 16) - 1;
            sprintf(
              (char *const)&v37[54],
              "%-*s  %-*s  %*.2f  %*.1f/%-*d  %*.0f%% ",
              35,
              v25,
              35,
              &v18[v24],
              7,
              a6,
              5,
              (double)a10 * a7,
              3,
              v35,
              6,
              v36);
            v28 = 1;
            if ( *((_DWORD *)v18 + 41) )
            {
              sprintf(&v38, "iklocks : %-2d : ", *((_DWORD *)v18 + 41));
              v29 = 0;
              if ( *((int *)v18 + 41) > 0 )
              {
                v30 = 0;
                do
                {
                  v31 = (const char *)(*a2 + *(_DWORD *)(*a2 + 288) + 16 * *(_DWORD *)&v18[v30 + *((_DWORD *)v18 + 42)]);
                  a6 = COERCE_FLOAT(v39);
                  sprintf(&v39[&v39[strlen(&v38)] - v39 - 1], "%s ", &v31[*(_DWORD *)v31]);
                  ++v29;
                  v30 += 32;
                }
                while ( v29 < *((_DWORD *)v18 + 41) );
              }
              sprintf((char *const)&v37[118], "%-*s", 60, &v38);
              v28 = 2;
            }
            v32 = *((_DWORD *)v18 + 36);
            if ( v32 )
            {
              sprintf(&v38, "ikrules : %-2d", v32);
              sprintf((char *const)&v37[64 * v28 + 54], "%-*s", 60, &v38);
            }
            v33 = v44;
            sub_10106C20(v44, (char *)v37, v45);
            LOBYTE(v14) = (unsigned __int8)sub_101058D0(v33, (_DWORD *)(v43 + 60));
          }
        }
      }
    }
  }
  return v14;
}
