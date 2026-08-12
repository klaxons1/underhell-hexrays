void __thiscall sub_1006A7B0(_BYTE *this)
{
  int v1; // edx
  bool v3; // zf
  double v4; // st7
  int v5; // eax
  float *v6; // esi
  int v7; // edi
  int v8; // ecx
  double v9; // st7
  double v10; // st4
  double v11; // st6
  int v12; // eax
  int v13; // ecx
  double v14; // st7
  float *v15; // ecx
  double v16; // st4
  double v17; // st6
  int *v18; // esi
  int v19; // eax
  int v20; // edx
  void (__thiscall *v21)(int *); // eax
  int v22; // ecx
  int v23; // edi
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  _DWORD *v27; // edi
  float v28[3]; // [esp+10h] [ebp-48h] BYREF
  float v29; // [esp+1Ch] [ebp-3Ch] BYREF
  float v30; // [esp+20h] [ebp-38h]
  float v31; // [esp+24h] [ebp-34h]
  float v32; // [esp+28h] [ebp-30h] BYREF
  float v33; // [esp+2Ch] [ebp-2Ch]
  float i; // [esp+30h] [ebp-28h]
  int v35; // [esp+34h] [ebp-24h]
  int v36; // [esp+38h] [ebp-20h]
  int v37; // [esp+3Ch] [ebp-1Ch]
  float *v38; // [esp+40h] [ebp-18h]
  float *v39; // [esp+44h] [ebp-14h]
  int v40; // [esp+48h] [ebp-10h]
  int v41; // [esp+4Ch] [ebp-Ch]
  int j; // [esp+50h] [ebp-8h]
  float v43; // [esp+54h] [ebp-4h]

  v1 = *(_DWORD *)(dword_106935D8 + 8);
  v3 = this[829] == 0;
  v37 = *(_DWORD *)(dword_106935D8 + 4);
  v40 = v1;
  if ( v3 )
    v4 = 518544.0;
  else
    v4 = 2073888.0;
  v5 = *(_DWORD *)this;
  v43 = v4;
  v6 = (float *)(*(int (__thiscall **)(_BYTE *))(v5 + 576))(this);
  v38 = v6;
  sub_10111910(this + 328, this + 340, &v29, &v32);
  v7 = 0;
  v41 = 0;
  v29 = v29 - 1.0;
  v30 = v30 - 1.0;
  v31 = v31 - 1.0;
  v32 = v32 + 1.0;
  v33 = v33 + 1.0;
  for ( i = i + 1.0; v7 < v37; v41 = v7 )
  {
    v8 = *(_DWORD *)(v40 + 4 * v7);
    v9 = *v6 - *(float *)(v8 + 4);
    v39 = (float *)v8;
    v10 = v6[1] - *(float *)(v8 + 8);
    v11 = v6[2] - *(float *)(v8 + 12);
    if ( v9 * v9 + v10 * v10 + v11 * v11 < v43 )
    {
      v35 = *(_DWORD *)(v8 + 84);
      for ( j = 0; j < v35; ++j )
      {
        v12 = sub_10074630(v7);
        v36 = v12;
        if ( v12 > v7 )
        {
          v13 = *(_DWORD *)(v40 + 4 * v12);
          v14 = *v6 - *(float *)(v13 + 4);
          v15 = (float *)(v13 + 4);
          v16 = v6[1] - v15[1];
          v17 = v6[2] - v15[2];
          if ( v14 * v14 + v16 * v16 + v17 * v17 < v43 )
          {
            v28[0] = *v15 - v39[1];
            v28[1] = v15[1] - v39[2];
            v28[2] = v15[2] - v39[3];
            if ( (unsigned __int8)sub_10113460(v39 + 1, v28, 0.0) )
            {
              v18 = (int *)sub_101811E0("info_node_link", -1);
              v19 = v36;
              v18[203] = v7;
              v18[204] = v19;
              v18[201] = sub_10086010(v7);
              v18[202] = sub_10086010(v18[204]);
              v18[205] = *((_DWORD *)this + 205);
              v18[206] = *((_DWORD *)this + 206);
              v20 = *v18;
              *((_BYTE *)v18 + 828) = this[828];
              v21 = *(void (__thiscall **)(int *))(v20 + 96);
              *(_WORD *)((char *)v18 + 829) = 257;
              v21(v18);
              v22 = *(_DWORD *)(*(int (__thiscall **)(int *))(*v18 + 8))(v18);
              v23 = *((_DWORD *)this + 203);
              v24 = *((_DWORD *)this + 201);
              v36 = v22;
              if ( v23 + 1 > v24 )
                sub_102ABFC0(v23 - v24 + 1);
              ++*((_DWORD *)this + 203);
              v25 = *((_DWORD *)this + 200);
              v26 = *((_DWORD *)this + 203) - v23 - 1;
              *((_DWORD *)this + 204) = v25;
              if ( v26 > 0 )
                memcpy((void *)(v25 + 4 * v23 + 4), (const void *)(v25 + 4 * v23), 4 * v26);
              v6 = v38;
              v27 = (_DWORD *)(*((_DWORD *)this + 200) + 4 * v23);
              if ( v27 )
                *v27 = v36;
              v7 = v41;
            }
          }
        }
      }
    }
    ++v7;
  }
}
