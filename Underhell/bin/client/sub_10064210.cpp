void __thiscall sub_10064210(int this, char a2)
{
  int v3; // esi
  int *v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  int *v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  bool v12; // zf
  int v13; // eax
  int v14; // esi
  int v15; // edi
  DWORD CurrentThreadId; // eax
  int v17; // edi
  int v18; // edx
  int v19; // ebx
  int v20; // eax
  int v21; // ecx
  int v22; // esi
  int v23; // edi
  unsigned int v24; // ebx
  unsigned __int16 v25; // ax
  int v26; // edi
  unsigned int *v27; // eax
  int v28; // ecx
  float *v29; // ecx
  _DWORD *v30; // edx
  _DWORD *v31; // edi
  int v32; // ebx
  int v33; // eax
  float *v34; // esi
  int v35; // eax
  float **v36; // ebx
  float *v37; // edi
  double v38; // st7
  int v39; // ebx
  float *v40; // edx
  int v41; // esi
  int v42; // edi
  double v43; // st7
  int v44; // edi
  double v45; // st7
  int v46; // eax
  int v47; // ecx
  unsigned int v48; // ecx
  int v49; // edx
  int v50; // ecx
  int v51; // edx
  int v52; // ecx
  int v53; // edx
  unsigned int v54; // ecx
  volatile __int32 *v55; // eax
  int v56; // [esp+8h] [ebp-58h] BYREF
  int v57; // [esp+Ch] [ebp-54h]
  int v58; // [esp+10h] [ebp-50h]
  int v59; // [esp+14h] [ebp-4Ch] BYREF
  int v60; // [esp+18h] [ebp-48h]
  int v61; // [esp+1Ch] [ebp-44h]
  void (__thiscall ***v62)(_DWORD, int); // [esp+20h] [ebp-40h]
  unsigned int v63; // [esp+24h] [ebp-3Ch]
  int v64; // [esp+28h] [ebp-38h]
  int v65; // [esp+2Ch] [ebp-34h]
  float *v66; // [esp+30h] [ebp-30h]
  int v67; // [esp+34h] [ebp-2Ch]
  unsigned int v68; // [esp+38h] [ebp-28h]
  float *v69; // [esp+3Ch] [ebp-24h]
  _DWORD *v70; // [esp+40h] [ebp-20h]
  int v71; // [esp+44h] [ebp-1Ch]
  float *v72; // [esp+48h] [ebp-18h]
  int v73; // [esp+4Ch] [ebp-14h]
  _DWORD *v74; // [esp+50h] [ebp-10h]
  int *v75; // [esp+54h] [ebp-Ch]
  float **v76; // [esp+58h] [ebp-8h]
  int v77; // [esp+5Ch] [ebp-4h]

  v3 = *(_DWORD *)(this + 16);
  v73 = this;
  v77 = v3;
  if ( v3 )
  {
    v4 = (int *)sub_101422E0();
    v5 = *v4;
    v6 = v4[1];
    v7 = v4[2];
    v56 = v5;
    v57 = v6;
    v58 = v7;
    v8 = (int *)sub_101422C0();
    v9 = *v8;
    v10 = v8[1];
    v11 = v8[2];
    v59 = v9;
    v12 = *(_DWORD *)(dword_1040EEE4 + 48) == 0;
    v60 = v10;
    v61 = v11;
    if ( v12
      || (v13 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C),
          (v62 = (void (__thiscall ***)(_DWORD, int))(*(int (__thiscall **)(int))(*(_DWORD *)v13 + 584))(v13)) == 0) )
    {
      sub_10063DF0((char *)this, a2, *(_DWORD *)(this + 4), v3, (float *)&v56, (float *)&v59, 0);
    }
    else
    {
      v14 = *(_DWORD *)(this + 4);
      v15 = this + 48;
      v71 = v14;
      v67 = v15;
      CurrentThreadId = GetCurrentThreadId();
      if ( CurrentThreadId != *(_DWORD *)v15
        && _InterlockedCompareExchange((volatile signed __int32 *)v15, CurrentThreadId, 0) )
      {
        _mm_pause();
        CThreadFastMutex::Lock(v15, CurrentThreadId, 0);
      }
      else
      {
        ++*(_DWORD *)(v15 + 4);
      }
      v17 = 0;
      v18 = 0;
      v19 = v14 + 12;
      v74 = (_DWORD *)v77;
      do
      {
        v20 = *(_DWORD *)(v19 - 4);
        v17 += v20;
        if ( v20 )
        {
          v21 = v19;
          v22 = *(_DWORD *)(v19 - 4);
          do
          {
            if ( *(_DWORD *)v21 )
              v18 += *(_DWORD *)(*(_DWORD *)v21 + 1268);
            else
              --v17;
            v21 += 4;
            --v22;
          }
          while ( v22 );
        }
        v19 += 524;
        v74 = (_DWORD *)((char *)v74 - 1);
      }
      while ( v74 );
      if ( v17 )
      {
        v23 = 32 * v17;
        v24 = sub_10063A40((_DWORD *)(v73 + 56), 524 * v77 + v23 + 24 * v18);
        v68 = v24 + 524 * v77;
        v63 = v24;
        v69 = (float *)(v68 + v23);
        v25 = sub_10062B80((_DWORD *)(v73 + 168), 0);
        v26 = v25;
        sub_10063940(v73 + 168, 0xFFFFu, v25);
        v27 = (unsigned int *)(*(_DWORD *)(v73 + 168) + 12 * v26);
        if ( v27 )
        {
          v28 = v77;
          *v27 = v24;
          v27[1] = v28;
        }
        v29 = v69;
        v76 = (float **)v68;
        v30 = (_DWORD *)v24;
        v70 = (_DWORD *)v24;
        v31 = (_DWORD *)(v71 + 4);
        v32 = v24 - v71;
        v74 = (_DWORD *)(v71 + 4);
        v64 = v32;
        v69 = (float *)v77;
        do
        {
          v33 = v31[1];
          v30[2] = 0;
          *v30 = *(v31 - 1);
          *(_DWORD *)((char *)v31 + v32) = *v31;
          if ( v33 )
          {
            v34 = (float *)(v76 + 5);
            v75 = v31 + 2;
            v71 = v33;
            do
            {
              v35 = *v75;
              if ( *v75 )
              {
                v36 = v76;
                v30[v30[2]++ + 3] = v35;
                v37 = *(float **)(v35 + 1268);
                *((_DWORD *)v34 - 3) = v37;
                *(v34 - 2) = *(float *)(v35 + 2012);
                v76 += 8;
                v34 += 8;
                *(v34 - 9) = *(float *)(v35 + 2016);
                v66 = v34;
                *(v34 - 8) = *(float *)(v35 + 2020);
                *(v34 - 7) = (float)*(int *)(v35 + 1924);
                v38 = (double)*(int *)(v35 + 1928);
                *v36 = v29;
                *(v34 - 6) = v38;
                v65 = 12 * (_DWORD)v37;
                *((_DWORD *)v34 - 12) = &v29[3 * (_DWORD)v37];
                v72 = &v29[3 * (_DWORD)v37];
                if ( v37 )
                {
                  v39 = 0;
                  v40 = v72 + 2;
                  v41 = v35 + 1792;
                  v72 = v37;
                  do
                  {
                    v42 = *(_DWORD *)(v35 + 1264);
                    v43 = *(float *)(v39 + v42 + 24);
                    v44 = v39 + v42 + 24;
                    *v29 = v43;
                    v29 += 3;
                    v40 += 3;
                    *(v29 - 2) = *(float *)(v44 + 4);
                    v39 += 36;
                    v45 = *(float *)(v44 + 8);
                    v41 += 12;
                    v12 = v72 == (float *)1;
                    v72 = (float *)((char *)v72 - 1);
                    *(v29 - 1) = v45;
                    *(v40 - 5) = *(float *)(v41 - 20);
                    *(v40 - 4) = *(float *)(v41 - 16);
                    *(v40 - 3) = *(float *)(v41 - 12);
                  }
                  while ( !v12 );
                  v34 = v66;
                  v30 = v70;
                }
                v31 = v74;
                v29 = (float *)((char *)v29 + v65);
              }
              ++v75;
              --v71;
            }
            while ( v71 );
            v32 = v64;
          }
          v31 += 131;
          v30 += 131;
          v12 = v69 == (float *)1;
          v69 = (float *)((char *)v69 - 1);
          v74 = v31;
          v70 = v30;
        }
        while ( !v12 );
        v46 = sub_100DDA40(64);
        if ( v46 )
        {
          v47 = v73;
          *(_DWORD *)(v46 + 12) = 1;
          *(_DWORD *)v46 = &CMemberFunctor6<CRopeManager *,void (__thiscall CRopeManager::*)(bool,CRopeManager::RopeRenderData_t *,int,Vector const &,Vector const &,C_RopeKeyframe::BuildRopeQueuedData_t *),bool,CRopeManager::RopeRenderData_t *,int,Vector,Vector,C_RopeKeyframe::BuildRopeQueuedData_t *,CRefCounted1<CFunctor,CRefCountServiceBase<1,CRefMT>>,CFuncMemPolicyNone>::`vftable';
          *(_DWORD *)(v46 + 8) = &CMemberFunctor6<CRopeManager *,void (__thiscall CRopeManager::*)(bool,CRopeManager::RopeRenderData_t *,int,Vector const &,Vector const &,C_RopeKeyframe::BuildRopeQueuedData_t *),bool,CRopeManager::RopeRenderData_t *,int,Vector,Vector,C_RopeKeyframe::BuildRopeQueuedData_t *,CRefCounted1<CFunctor,CRefCountServiceBase<1,CRefMT>>,CFuncMemPolicyNone>::`vftable';
          *(_DWORD *)(v46 + 20) = v47;
          v48 = v63;
          *(_DWORD *)(v46 + 16) = sub_10063DF0;
          *(_BYTE *)(v46 + 24) = a2;
          v49 = v77;
          *(_DWORD *)(v46 + 28) = v48;
          *(_DWORD *)(v46 + 36) = v56;
          v50 = v58;
          *(_DWORD *)(v46 + 32) = v49;
          *(_DWORD *)(v46 + 40) = v57;
          v51 = v59;
          *(_DWORD *)(v46 + 44) = v50;
          v52 = v60;
          *(_DWORD *)(v46 + 48) = v51;
          v53 = v61;
          *(_DWORD *)(v46 + 52) = v52;
          v54 = v68;
          *(_DWORD *)(v46 + 56) = v53;
          *(_DWORD *)(v46 + 60) = v54;
        }
        else
        {
          v46 = 0;
        }
        (**v62)(v62, v46);
      }
      v55 = (volatile __int32 *)v67;
      v12 = (*(_DWORD *)(v67 + 4))-- == 1;
      if ( v12 )
        _InterlockedExchange(v55, 0);
    }
  }
}
