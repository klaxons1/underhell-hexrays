void __thiscall sub_101AE1C0(float *this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  int v6; // esi
  double v7; // st7
  double v8; // st6
  double v9; // st5
  double v10; // st4
  double v11; // st3
  double v12; // st2
  int v13; // eax
  float v14; // [esp+4h] [ebp-18h] BYREF
  float v15; // [esp+8h] [ebp-14h]
  float v16; // [esp+Ch] [ebp-10h]
  float v17; // [esp+10h] [ebp-Ch] BYREF
  float v18; // [esp+14h] [ebp-8h]
  float v19; // [esp+18h] [ebp-4h]

  v2 = *((_DWORD *)this + 204);
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (v2 & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( v3[1] == v4 )
    {
      if ( *v3 )
      {
        if ( v3[1] == v4 )
          v5 = *v3;
        else
          v5 = 0;
        v6 = *(_DWORD *)(v5 + 424);
        if ( v6 )
        {
          (*(void (__thiscall **)(float *, int, float *, float *))(*(_DWORD *)this + 720))(this, v6, &v17, &v14);
          v7 = v17;
          this[208] = v17;
          v8 = v18;
          this[209] = v18;
          v9 = v19;
          this[210] = v19;
          v10 = v14;
          this[211] = v14;
          v11 = v15;
          this[212] = v15;
          v12 = v16;
          this[213] = v16;
          this[214] = v7;
          this[215] = v8;
          this[216] = v9;
          this[217] = v10;
          this[218] = v11;
          this[219] = v12;
          v13 = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_106BAFF4 + 116))(
                  dword_106BAFF4,
                  (_DWORD *)this + 206);
          *((_DWORD *)this + 200) = v13;
          (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v13 + 8))(v13, v6, 1);
          (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 96))(v6);
        }
      }
    }
  }
}
