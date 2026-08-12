int __thiscall sub_10259E20(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  unsigned int v4; // eax
  int v5; // ecx
  unsigned int v6; // eax
  int v7; // ecx
  unsigned int v8; // eax
  int v9; // edx
  _DWORD *v10; // ecx
  unsigned int v11; // eax
  int *v12; // ecx
  unsigned int v13; // eax
  _DWORD *v14; // ecx
  unsigned int v15; // eax
  _DWORD *v16; // ecx
  int *v17; // eax
  unsigned int v18; // eax
  int v19; // esi
  char v20; // bl
  _BYTE *v21; // esi
  int result; // eax
  __int64 v23; // [esp+0h] [ebp-18h]

  v2 = *(_DWORD *)(this + 800);
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( v3[1] == v4 )
    {
      if ( *v3 )
      {
        v5 = v3[1] == v4 ? *v3 : 0;
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 264))(v5) )
        {
          if ( (*(_DWORD *)(this + 248) & 0x20) != 0 )
          {
            v6 = *(_DWORD *)(this + 800);
            if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 2] != v6 >> 12 )
              v7 = 0;
            else
              v7 = off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1];
            sub_101129A0((unsigned __int16 *)(v7 + 320), *(_WORD *)(v7 + 356) & 0xFFFB);
          }
          v8 = *(_DWORD *)(this + 800);
          if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 2] != *(_DWORD *)(this + 800) >> 12 )
            v9 = 0;
          else
            v9 = off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1];
          if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 2] != v8 >> 12 )
            v10 = 0;
          else
            v10 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1];
          sub_101E7640(v10, v9);
          v11 = *(_DWORD *)(this + 800);
          if ( v11 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 2] != v11 >> 12 )
            v12 = 0;
          else
            v12 = (int *)off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1];
          sub_101E3190(v12, 1);
          v13 = *(_DWORD *)(this + 800);
          if ( v13 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 2] != v13 >> 12 )
            v14 = 0;
          else
            v14 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1];
          if ( sub_100CF460(v14) )
          {
            v15 = *(_DWORD *)(this + 800);
            if ( v15 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 2] != v15 >> 12 )
              v16 = 0;
            else
              v16 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1];
            v17 = (int *)sub_100CF460(v16);
            sub_10035360(v17, 32);
          }
        }
      }
    }
  }
  v18 = *(_DWORD *)(this + 800);
  if ( v18 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 2] != v18 >> 12 )
    v19 = 0;
  else
    v19 = off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1];
  v20 = *(_BYTE *)(this + 908);
  v21 = (_BYTE *)(v19 + 225);
  if ( v20 != *v21 )
  {
    (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)(v21 - 225) + 480))(v21 - 225, v21);
    *v21 = v20;
  }
  *(_DWORD *)(this + 848) = 0;
  *(float *)(this + 820) = *(float *)(dword_106B31C8 + 12);
  sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
  HIDWORD(v23) = this;
  LODWORD(v23) = this;
  sub_1010DD80((_DWORD *)(this + 916), v23, 0.0);
  sub_100D7260((float *)this, &flt_106F1CB4);
  result = sub_100D8500((_DWORD *)this);
  byte_106C761C = 0;
  return result;
}
