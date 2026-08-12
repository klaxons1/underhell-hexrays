float *__thiscall sub_103A50F0(float *this, float *a2)
{
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx
  int v6; // eax
  unsigned int v7; // eax
  int v8; // ecx
  double v9; // st7
  float *result; // eax
  double v11; // st6
  float v12; // ecx
  float v13; // edx
  int v14; // edx
  int v15; // ecx
  int v16; // ecx
  int v17; // edx
  float v18; // [esp+4h] [ebp-18h]
  float v19; // [esp+8h] [ebp-14h]
  float v20; // [esp+Ch] [ebp-10h]
  float v21; // [esp+10h] [ebp-Ch] BYREF
  float v22; // [esp+14h] [ebp-8h]
  float v23; // [esp+18h] [ebp-4h]

  v3 = *((_DWORD *)this + 605);
  if ( v3 != -1 && (v4 = &off_1061BE18[4 * (v3 & 0xFFF) + 1], v5 = v3 >> 12, v4[1] == v5) && *v4 )
  {
    if ( v4[1] == v5 )
      v6 = *v4;
    else
      v6 = 0;
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)v6 + 504))(v6, &v21);
    if ( *((_DWORD *)this + 941) == 4
      && ((v7 = *((_DWORD *)this + 605), v7 == -1) || off_1061BE18[4 * ((_DWORD)this[605] & 0xFFF) + 2] != v7 >> 12
        ? (v8 = 0)
        : (v8 = off_1061BE18[4 * ((_DWORD)this[605] & 0xFFF) + 1]),
          *(char *)(v8 + 256) >= 0) )
    {
      v18 = v21;
      v9 = v22;
      v19 = v22;
      sub_1008D510((int)this, (int)&v21);
      result = a2;
      v11 = v23 - v9;
      *a2 = v18;
      a2[1] = v19;
      v20 = v9 + v11 * 0.75;
      a2[2] = v20;
    }
    else
    {
      result = a2;
      v12 = v22;
      *a2 = v21;
      v13 = v23;
      a2[1] = v12;
      a2[2] = v13;
    }
  }
  else if ( this[964] == flt_106F1CA8 && this[965] == flt_106F1CAC && this[966] == flt_106F1CB0 )
  {
    DevMsg("InspectTargetPosition called with no target!\n");
    result = a2;
    v16 = *((_DWORD *)this + 965);
    *a2 = this[964];
    v17 = *((_DWORD *)this + 966);
    *((_DWORD *)a2 + 1) = v16;
    *((_DWORD *)a2 + 2) = v17;
  }
  else
  {
    result = a2;
    v14 = *((_DWORD *)this + 965);
    *a2 = this[964];
    v15 = *((_DWORD *)this + 966);
    *((_DWORD *)a2 + 1) = v14;
    *((_DWORD *)a2 + 2) = v15;
  }
  return result;
}
