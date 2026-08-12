void __thiscall sub_102CDC40(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  unsigned int v4; // eax
  _DWORD *v5; // ecx
  unsigned int v6; // eax
  _DWORD *v7; // ecx
  int v8; // eax
  unsigned int v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // eax
  unsigned int *v13; // edi
  int v14; // eax
  unsigned int v15; // esi
  unsigned int v16; // eax
  int v17; // ecx
  char v18; // al
  _DWORD *v19; // ecx
  unsigned int v20; // eax
  int v21; // ecx
  _BYTE *v22; // esi
  double v23; // st7
  __int64 v24; // [esp+0h] [ebp-18h]
  float v25; // [esp+4h] [ebp-14h]
  int v26; // [esp+14h] [ebp-4h] BYREF

  v2 = this[230];
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (this[230] & 0xFFF) + 1];
    if ( v3[1] == v2 >> 12 )
    {
      if ( *v3 )
      {
        (*(void (__thiscall **)(_DWORD *))(*this + 732))(this);
        v4 = this[230];
        if ( v4 == -1 || off_1061BE18[4 * (this[230] & 0xFFF) + 2] != v4 >> 12 )
          v5 = 0;
        else
          v5 = (_DWORD *)off_1061BE18[4 * (this[230] & 0xFFF) + 1];
        if ( sub_100CF460(v5) )
        {
          v6 = this[230];
          if ( v6 == -1 || off_1061BE18[4 * (this[230] & 0xFFF) + 2] != v6 >> 12 )
            v7 = 0;
          else
            v7 = (_DWORD *)off_1061BE18[4 * (this[230] & 0xFFF) + 1];
          v8 = sub_100CF460(v7);
          (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 992))(v8);
        }
        v9 = this[230];
        if ( v9 == -1 || off_1061BE18[4 * (this[230] & 0xFFF) + 2] != v9 >> 12 )
          v10 = 0;
        else
          v10 = off_1061BE18[4 * (this[230] & 0xFFF) + 1];
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v10 + 320))(v10) )
        {
          v11 = this[230];
          if ( v11 == -1 || off_1061BE18[4 * (this[230] & 0xFFF) + 2] != v11 >> 12 )
            v12 = 0;
          else
            v12 = off_1061BE18[4 * (this[230] & 0xFFF) + 1];
          v13 = (unsigned int *)(v12 + 2252);
          v14 = *(_DWORD *)(v12 + 2252);
          v15 = v14 & 0xFFFFFFFE;
          if ( v14 != (v14 & 0xFFFFFFFE) )
          {
            (*(void (__thiscall **)(unsigned int *, unsigned int *))*(v13 - 15))(v13 - 15, v13);
            *v13 = v15;
          }
        }
        sub_100EC4A0(this, -1.0, 0);
        v16 = this[230];
        if ( v16 == -1 || off_1061BE18[4 * (this[230] & 0xFFF) + 2] != v16 >> 12 )
          v17 = 0;
        else
          v17 = off_1061BE18[4 * (this[230] & 0xFFF) + 1];
        v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 320))(v17);
        HIDWORD(v24) = this;
        LODWORD(v24) = this;
        v19 = this + 330;
        if ( !v18 )
          v19 = this + 318;
        sub_1010DD80(v19, v24, 0.0);
        v20 = this[230];
        if ( v20 == -1 || off_1061BE18[4 * (this[230] & 0xFFF) + 2] != v20 >> 12 )
          v21 = 0;
        else
          v21 = off_1061BE18[4 * (this[230] & 0xFFF) + 1];
        v22 = this + 62;
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v21 + 320))(v21) )
          v26 = -3;
        else
          v26 = -513;
        sub_100332F0(this + 62, &v26);
        this[230] = -1;
        if ( (*v22 & 1) != 0 || (*(_DWORD *)v22 & 0x20) != 0 && !sub_102CA1F0(this) )
        {
          v23 = *(float *)(dword_106B31C8 + 12) + 5.0;
          *((float *)this + 344) = v23;
          v25 = v23;
          sub_100EC4A0(this, v25, 0);
        }
        sub_100D7260((float *)this, &flt_106F1CB4);
      }
    }
  }
}
