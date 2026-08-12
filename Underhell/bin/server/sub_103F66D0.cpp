int *__thiscall sub_103F66D0(int this, int a2)
{
  int *result; // eax
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  int *v6; // edi
  int *v7; // ecx
  int *v8; // ecx
  int *v9; // ecx
  int *v10; // ecx
  int *v11; // ecx
  float v12; // [esp+Ch] [ebp-24h]
  float v13[3]; // [esp+18h] [ebp-18h] BYREF
  float v14[3]; // [esp+24h] [ebp-Ch] BYREF

  sub_100D4BC0((void *)this, a2);
  v12 = *(float *)(dword_106B31C8 + 12) + 3.0;
  sub_100EC4A0((int *)this, v12, 0);
  *(_DWORD *)(this + 196) = sub_103F5D70;
  result = (int *)sub_10283270();
  if ( result )
  {
    result = (int *)(*(int (__thiscall **)(int *))(*result + 8))(result);
    *(_DWORD *)(this + 1396) = *result;
  }
  else
  {
    *(_DWORD *)(this + 1396) = -1;
  }
  v4 = *(_DWORD *)(this + 1396);
  if ( v4 != -1 )
  {
    result = &off_1061BE18[4 * (*(_DWORD *)(this + 1396) & 0xFFF) + 1];
    v5 = v4 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 1396) & 0xFFF) + 2] == v5 )
    {
      if ( *result )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 1396) & 0xFFF) + 2] == v5 )
          v6 = (int *)*result;
        else
          v6 = 0;
        v14[0] = 0.0;
        v14[1] = 0.0;
        v14[2] = 1.0;
        sub_10422540(v14, v13);
        sub_100E0EA0((int)v6, v13);
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        sub_100E0D20((int)v6, (float *)(this + 580));
        (*(void (__thiscall **)(int *, int, int))(*v6 + 140))(v6, this, -1);
        if ( v6[201] != COERCE_INT(16.0) )
        {
          if ( *((_BYTE *)v6 + 84) )
          {
            *((_BYTE *)v6 + 88) |= 1u;
          }
          else
          {
            v7 = (int *)v6[6];
            if ( v7 )
              sub_100194B0(v7, 804);
          }
          *((float *)v6 + 201) = 16.0;
        }
        if ( v6[202] != COERCE_INT(0.5) )
        {
          if ( *((_BYTE *)v6 + 84) )
          {
            *((_BYTE *)v6 + 88) |= 1u;
          }
          else
          {
            v8 = (int *)v6[6];
            if ( v8 )
              sub_100194B0(v8, 808);
          }
          *((float *)v6 + 202) = 0.5;
        }
        sub_1005C620((_BYTE *)v6 + 116, 0, 0, 0, 0);
        if ( v6[203] != COERCE_INT(32.0) )
        {
          if ( *((_BYTE *)v6 + 84) )
          {
            *((_BYTE *)v6 + 88) |= 1u;
          }
          else
          {
            v9 = (int *)v6[6];
            if ( v9 )
              sub_100194B0(v9, 812);
          }
          *((float *)v6 + 203) = 32.0;
        }
        if ( v6[204] != COERCE_INT(48.0) )
        {
          if ( *((_BYTE *)v6 + 84) )
          {
            *((_BYTE *)v6 + 88) |= 1u;
          }
          else
          {
            v10 = (int *)v6[6];
            if ( v10 )
              sub_100194B0(v10, 816);
          }
          *((float *)v6 + 204) = 48.0;
        }
        if ( v6[205] != COERCE_INT(4.0) )
        {
          if ( *((_BYTE *)v6 + 84) )
          {
            *((_BYTE *)v6 + 88) |= 1u;
          }
          else
          {
            v11 = (int *)v6[6];
            if ( v11 )
              sub_100194B0(v11, 820);
          }
          *((float *)v6 + 205) = 4.0;
        }
        return (int *)sub_100F5880(v6, 9999.0);
      }
    }
  }
  return result;
}
