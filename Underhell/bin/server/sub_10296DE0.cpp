void __thiscall sub_10296DE0(int this)
{
  int v2; // edx
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx
  unsigned int v7; // eax
  int v8; // edi
  unsigned int v9; // eax
  int *v10; // ecx
  unsigned int v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  int v14; // ecx
  unsigned int v15; // eax
  int v16; // ecx
  unsigned int v17; // ecx
  int *v18; // eax
  unsigned int v19; // ecx
  int v20; // eax
  unsigned int v21; // ecx
  int *v22; // eax
  unsigned int v23; // ecx
  int v24; // eax
  float v25; // [esp+Ch] [ebp-10h]
  float v26; // [esp+10h] [ebp-Ch]

  v2 = *(_DWORD *)(this + 4);
  *(_BYTE *)(this + 84) = 0;
  if ( *(_DWORD *)(v2 + 2888) != -1
    && off_1061BE18[4 * (*(_DWORD *)(v2 + 2888) & 0xFFF) + 2] == *(_DWORD *)(v2 + 2888) >> 12
    && off_1061BE18[4 * (*(_DWORD *)(v2 + 2888) & 0xFFF) + 1] )
  {
    if ( *(_BYTE *)(this + 36) || *(_BYTE *)(this + 37) )
    {
      v3 = *(_DWORD *)(v2 + 2888);
      if ( v3 == -1 || off_1061BE18[4 * (*(_DWORD *)(v2 + 2888) & 0xFFF) + 2] != v3 >> 12 )
        v4 = 0;
      else
        v4 = (int *)off_1061BE18[4 * (*(_DWORD *)(v2 + 2888) & 0xFFF) + 1];
      sub_10071D00(v4, v2);
    }
    v5 = *(_DWORD *)(*(_DWORD *)(this + 4) + 2888);
    if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 4) + 2888) & 0xFFF) + 2] != v5 >> 12 )
      v6 = 0;
    else
      v6 = off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 4) + 2888) & 0xFFF) + 1];
    sub_10070510(v6, 0.0);
    if ( sub_10295D00((_DWORD *)this) )
    {
      v7 = *(_DWORD *)(*(_DWORD *)(this + 4) + 2888);
      if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 4) + 2888) & 0xFFF) + 2] != v7 >> 12 )
        v8 = 0;
      else
        v8 = off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 4) + 2888) & 0xFFF) + 1];
      v25 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              10.0,
              15.0);
      sub_10070510(v8, v25);
    }
    sub_100448D0(*(_DWORD **)(this + 4), 0);
  }
  if ( *(_BYTE *)(this + 36) )
  {
    *(_BYTE *)(this + 36) = 0;
    v9 = *(_DWORD *)(this + 60);
    if ( v9 != -1 )
    {
      v10 = &off_1061BE18[4 * (*(_DWORD *)(this + 60) & 0xFFF) + 1];
      v11 = v9 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 60) & 0xFFF) + 2] == v11 )
      {
        if ( *v10 )
        {
          if ( off_1061BE18[4 * (*(_DWORD *)(this + 60) & 0xFFF) + 2] == v11 )
            v12 = *v10;
          else
            v12 = 0;
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v12 + 756))(v12, *(_DWORD *)(this + 4));
          if ( *(_BYTE *)(this + 76) )
          {
            v13 = *(_DWORD *)(this + 60);
            if ( v13 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 60) & 0xFFF) + 2] != v13 >> 12 )
              v14 = 0;
            else
              v14 = off_1061BE18[4 * (*(_DWORD *)(this + 60) & 0xFFF) + 1];
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v14 + 764))(v14, *(_DWORD *)(this + 4));
            *(_BYTE *)(this + 76) = 0;
          }
          if ( *(_BYTE *)(this + 77) )
          {
            v15 = *(_DWORD *)(this + 60);
            if ( v15 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 60) & 0xFFF) + 2] != v15 >> 12 )
              v16 = 0;
            else
              v16 = off_1061BE18[4 * (*(_DWORD *)(this + 60) & 0xFFF) + 1];
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v16 + 768))(v16, *(_DWORD *)(this + 4));
            *(_BYTE *)(this + 77) = 0;
          }
        }
      }
    }
  }
  else if ( *(_BYTE *)(this + 37) )
  {
    v17 = *(_DWORD *)(this + 60);
    if ( v17 != -1 )
    {
      v18 = &off_1061BE18[4 * (*(_DWORD *)(this + 60) & 0xFFF) + 1];
      v19 = v17 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 60) & 0xFFF) + 2] == v19 )
      {
        if ( *v18 )
        {
          if ( off_1061BE18[4 * (*(_DWORD *)(this + 60) & 0xFFF) + 2] == v19 )
            v20 = *v18;
          else
            v20 = 0;
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v20 + 744))(v20, *(_DWORD *)(this + 4));
        }
      }
    }
  }
  *(float *)(this + 44) = 0.0;
  v21 = *(_DWORD *)(this + 60);
  if ( v21 != -1
    && (v22 = &off_1061BE18[4 * (*(_DWORD *)(this + 60) & 0xFFF) + 1],
        v23 = v21 >> 12,
        off_1061BE18[4 * (*(_DWORD *)(this + 60) & 0xFFF) + 2] == v23)
    && *v22
    && (off_1061BE18[4 * (*(_DWORD *)(this + 60) & 0xFFF) + 2] != v23 ? (v24 = 0) : (v24 = *v22),
        *(_DWORD *)(v24 + 860) == 1) )
  {
    *(float *)(this + 40) = *(float *)(dword_106B31C8 + 12);
  }
  else
  {
    v26 = *(float *)(dword_106DB094 + 44) + *(float *)(dword_106DB094 + 44);
    *(float *)(this + 40) = RandomFloat(*(float *)(dword_106DB094 + 44), LODWORD(v26)) + *(float *)(dword_106B31C8 + 12);
  }
}
