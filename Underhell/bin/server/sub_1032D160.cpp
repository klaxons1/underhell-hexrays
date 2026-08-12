bool __thiscall sub_1032D160(float *this, int a2)
{
  unsigned __int8 (__thiscall *v3)(float *); // edx
  int v4; // ebx
  int v5; // eax
  int v6; // edi
  double v7; // st6
  double v8; // st7
  int v10; // eax
  double v11; // st7
  int v12; // ecx
  int v13; // edx
  double v14; // st7
  int v15; // edi
  float *v16; // eax
  float v17; // ecx
  float v18; // edx
  float v19; // eax
  int v20; // ecx
  long double v21; // st7
  float *v22; // eax
  double v23; // st6
  double v24; // st7
  int v25; // edi
  double v26; // st7
  int v27; // edi
  int v28; // eax
  int v29; // ebx
  int v30; // edi
  _DWORD *v31; // eax
  int v32; // eax
  int v33; // ecx
  int v34; // ecx
  int v35; // eax
  unsigned int v36; // esi
  _DWORD *v37; // [esp-8h] [ebp-21Ch]
  _DWORD v38[100]; // [esp+8h] [ebp-20Ch] BYREF
  char v39[12]; // [esp+198h] [ebp-7Ch] BYREF
  _DWORD v40[6]; // [esp+1A4h] [ebp-70h] BYREF
  float v41[2]; // [esp+1BCh] [ebp-58h] BYREF
  float v42; // [esp+1C4h] [ebp-50h]
  char v43[8]; // [esp+1C8h] [ebp-4Ch] BYREF
  float v44; // [esp+1D0h] [ebp-44h]
  int v45; // [esp+1D4h] [ebp-40h]
  float v46; // [esp+1D8h] [ebp-3Ch]
  float v47; // [esp+1DCh] [ebp-38h]
  float v48; // [esp+1E0h] [ebp-34h]
  float v49; // [esp+1E4h] [ebp-30h]
  float v50; // [esp+1E8h] [ebp-2Ch]
  float v51; // [esp+1ECh] [ebp-28h]
  float v52; // [esp+1F0h] [ebp-24h]
  float v53; // [esp+1F4h] [ebp-20h] BYREF
  float v54; // [esp+1F8h] [ebp-1Ch]
  float v55; // [esp+1FCh] [ebp-18h]
  int v56; // [esp+200h] [ebp-14h]
  float v57; // [esp+204h] [ebp-10h] BYREF
  float v58; // [esp+208h] [ebp-Ch]
  float v59; // [esp+20Ch] [ebp-8h]
  float v60; // [esp+210h] [ebp-4h]
  int v61; // [esp+21Ch] [ebp+8h]

  v3 = *(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 2284);
  v4 = 0;
  v56 = 0;
  if ( v3(this) && (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this) )
  {
    if ( ((_DWORD)this[63] & 0x800) != 0 )
      sub_100DAE60((int)this);
    v5 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
    v6 = v5;
    if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
      sub_100DAE60(v5);
    v7 = *(float *)(v6 + 584) - this[146];
    v49 = *(float *)(v6 + 580) - this[145];
    v50 = v7;
    v8 = off_10689714();
    v51 = 0.0;
    if ( v8 > 1000.0 )
      return 0;
    if ( v8 >= 240.0 )
      v8 = 240.0;
    v10 = *((_DWORD *)this + 419);
    v60 = v8;
    v11 = sub_100737D0(v10);
    v44 = v11 + v11;
    sub_1025F990(v40, (int)v38, 100, 0);
    v12 = *((_DWORD *)this + 63) >> 11;
    v40[0] = &`CNPC_BaseZombie::FindNearestPhysicsObject'::`8'::CZombieSwatEntitiesEnum::`vftable';
    v40[5] = a2;
    if ( (v12 & 1) != 0 )
      sub_100DAE60((int)this);
    v13 = *((_DWORD *)this + 63) >> 11;
    v14 = v60;
    v57 = this[145] + v60;
    v58 = v60 + this[146];
    v59 = v44 + this[147];
    if ( (v13 & 1) != 0 )
    {
      sub_100DAE60((int)this);
      v14 = v60;
    }
    v53 = this[145] - v14;
    v54 = this[146] - v14;
    v55 = this[147] - v44;
    v15 = sub_1025F9C0((int)&v53, (int)&v57, (int)v40);
    v53 = 0.5;
    v54 = 0.5;
    v55 = 0.25;
    v45 = v15;
    sub_101117D0((int)(this + 80), &v53, v41);
    v61 = 0;
    if ( v15 > 0 )
    {
      do
      {
        v16 = (float *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)v38[v4] + 576))(v38[v4]);
        v17 = *v16;
        v18 = v16[1];
        v19 = v16[2];
        v57 = v17;
        v20 = *((_DWORD *)this + 63) >> 11;
        v58 = v18;
        v59 = v19;
        if ( (v20 & 1) != 0 )
          sub_100DAE60((int)this);
        v21 = fabs(this[145] - v57) + fabs(this[146] - v58);
        v52 = v21;
        if ( v21 < v60 )
        {
          if ( ((_DWORD)this[63] & 0x800) != 0 )
            sub_100DAE60((int)this);
          v22 = (float *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)v38[v4] + 576))(v38[v4]);
          v23 = v22[1] - this[146];
          v24 = v22[2] - this[147];
          v46 = *v22 - this[145];
          v47 = v23;
          v48 = v24;
          off_10689714();
          v48 = 0.0;
          if ( 0.0 * v51 + v47 * v50 + v46 * v49 >= 0.8 )
          {
            v25 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
            if ( (*(_DWORD *)(v25 + 252) & 0x800) != 0 )
              sub_100DAE60(v25);
            if ( fabs(v58 - *(float *)(v25 + 584)) + fabs(v57 - *(float *)(v25 + 580)) > v52
              && *(float *)(v38[v4] + 352) + v59 >= v42 )
            {
              v26 = *(float *)((*(int (__thiscall **)(float *, float *))(*(_DWORD *)this + 504))(this, &v53) + 8);
              if ( v26 >= v59 )
              {
                v27 = *(_DWORD *)dword_106B31F0;
                v28 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v38[v4] + 24))(v38[v4]);
                v29 = (*(int (__thiscall **)(int, int))(v27 + 16))(dword_106B31F0, v28);
                v30 = *(_DWORD *)dword_106BAFF0;
                v37 = sub_1001F410((_DWORD *)v38[v61]);
                v31 = sub_10019640((_DWORD *)v38[v61]);
                (*(void (__thiscall **)(int, char *, char *, _DWORD, _DWORD *, _DWORD *))(v30 + 92))(
                  dword_106BAFF0,
                  v39,
                  v43,
                  **(_DWORD **)(v29 + 4),
                  v31,
                  v37);
                if ( v42 <= (double)v44 )
                {
                  if ( (*(unsigned __int8 (__thiscall **)(float *, _DWORD, int, _DWORD))(*(_DWORD *)this + 548))(
                         this,
                         v38[v61],
                         16449,
                         0) )
                  {
                    if ( !*(_DWORD *)(dword_10698344 + 48)
                      || (v32 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this),
                          (*(unsigned __int8 (__thiscall **)(int, _DWORD, int, _DWORD))(*(_DWORD *)v32 + 548))(
                            v32,
                            v38[v61],
                            16449,
                            0)) )
                    {
                      v33 = v38[v61];
                      if ( *(char **)(v33 + 92) != "physics_prop_ragdoll"
                        && !sub_100D6240((_DWORD *)v33, "physics_prop_ragdoll") )
                      {
                        v34 = v38[v61];
                        if ( *(char **)(v34 + 92) != "prop_ragdoll" && !sub_100D6240((_DWORD *)v34, "prop_ragdoll") )
                        {
                          v35 = v38[v61];
                          v60 = v52;
                          v56 = v35;
                        }
                      }
                    }
                  }
                }
                v4 = v61;
              }
            }
          }
        }
        v61 = ++v4;
      }
      while ( v4 < v45 );
    }
    if ( v56 )
      this[949] = *(float *)(*(int (__thiscall **)(int))(*(_DWORD *)v56 + 8))(v56);
    else
      this[949] = NAN;
    v36 = *((_DWORD *)this + 949);
    return v36 != -1 && off_1061BE18[4 * (v36 & 0xFFF) + 2] == v36 >> 12 && off_1061BE18[4 * (v36 & 0xFFF) + 1];
  }
  else
  {
    this[949] = NAN;
    return 0;
  }
}
