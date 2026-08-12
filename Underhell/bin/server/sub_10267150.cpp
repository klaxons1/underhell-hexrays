void __thiscall sub_10267150(int *this, _DWORD *a2, float *a3, float *a4)
{
  double v5; // st7
  unsigned int v6; // ecx
  int *v7; // eax
  unsigned int v8; // ecx
  int v9; // ecx
  char *v10; // eax
  int v11; // ecx
  int v12; // edi
  int *v13; // ebx
  int v14; // edx
  unsigned int v15; // eax
  _DWORD *v16; // ecx
  int *v17; // edx
  int *v18; // edi
  int v19; // ebx
  int v20; // eax
  float v21; // [esp+24h] [ebp-2Ch]
  float v22; // [esp+38h] [ebp-18h]
  int v23; // [esp+4Ch] [ebp-4h]

  if ( (a2[16] & 0x800000) != 0 )
  {
    v5 = ((double (__thiscall *)(int *))*(_DWORD *)(*this + 844))(this);
    if ( 0.0 != v5 )
    {
      v6 = this[425];
      if ( v6 != -1
        && (v7 = &off_1061BE18[4 * (this[425] & 0xFFF) + 1],
            v8 = v6 >> 12,
            off_1061BE18[4 * (this[425] & 0xFFF) + 2] == v8)
        && *v7 )
      {
        if ( off_1061BE18[4 * (this[425] & 0xFFF) + 2] == v8 )
          v9 = *v7;
        else
          v9 = 0;
        v22 = v5;
        (*(void (__thiscall **)(int, const char *, int *, int *, _DWORD))(*(_DWORD *)v9 + 148))(
          v9,
          "SetAngularLimit",
          this,
          this,
          LODWORD(v22));
      }
      else
      {
        if ( (this[63] & 0x800) != 0 )
          sub_100DAE60((int)this);
        v21 = ((double (__thiscall *)(int *))*(_DWORD *)(*this + 844))(this);
        v10 = sub_101AF1F0((float *)this + 145, &flt_106F1CB4, (int)this, v21, 0);
        if ( v10 )
          this[425] = *(_DWORD *)(*(int (__thiscall **)(char *))(*(_DWORD *)v10 + 8))(v10);
        else
          this[425] = -1;
      }
      if ( this[425] == -1 || off_1061BE18[4 * (this[425] & 0xFFF) + 2] != (unsigned int)this[425] >> 12 )
        v11 = 0;
      else
        v11 = off_1061BE18[4 * (this[425] & 0xFFF) + 1];
      (*(void (__thiscall **)(int, const char *, int *, int *, _DWORD))(*(_DWORD *)v11 + 148))(
        v11,
        "TurnOn",
        this,
        this,
        0);
      *((float *)this + 429) = ((double (__thiscall *)(int *))*(_DWORD *)(*this + 848))(this)
                             + *(float *)(dword_106B31C8 + 12);
      sub_100EC4A0(this, *(float *)(dword_106B31C8 + 12), 0);
    }
    v12 = 0;
    v23 = 0;
    if ( this[364] > 0 )
    {
      v13 = off_1061BE18;
      do
      {
        v14 = this[361];
        v15 = *(_DWORD *)(v14 + 4 * v12);
        v16 = (_DWORD *)(v14 + 4 * v12);
        if ( v15 != -1 )
        {
          v17 = &v13[4 * (*(_DWORD *)(v14 + 4 * v12) & 0xFFF) + 1];
          if ( v17[1] == v15 >> 12 )
          {
            if ( *v17 )
            {
              if ( *v16 == -1 || v13[4 * (*v16 & 0xFFF) + 2] != *v16 >> 12 )
                v18 = 0;
              else
                v18 = (int *)v13[4 * (*v16 & 0xFFF) + 1];
              v19 = *v18;
              v20 = sub_1001E870(a2);
              (*(void (__thiscall **)(int *, const char *, int, int *, _DWORD))(v19 + 148))(
                v18,
                "VehiclePunted",
                v20,
                this,
                0);
              v13 = off_1061BE18;
              v12 = v23;
            }
          }
        }
        v23 = ++v12;
      }
      while ( v12 < this[364] );
    }
  }
  sub_100EAC20(this, (int)a2, a3, a4);
}
