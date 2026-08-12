int __thiscall sub_100C71D0(volatile signed __int32 *this, int a2, int a3)
{
  int result; // eax
  int v5; // edi
  int v6; // ebx
  double v7; // st7
  int v8; // eax
  _DWORD *v9; // eax
  int v10; // edx
  float *v11; // ebx
  int v12; // eax
  _DWORD *v13; // eax
  int v14; // ecx
  int *v15; // ebx
  int v16; // eax
  _DWORD *v17; // eax
  int v18; // eax
  float *v19; // ebx
  int v20; // eax
  _DWORD *v21; // eax
  int v22; // ebx
  _DWORD *v23; // eax
  int v24; // ebx
  int v25; // edi
  const char *v26; // eax
  double v27; // [esp+14h] [ebp-20h]
  double v28; // [esp+1Ch] [ebp-18h]
  float v29; // [esp+30h] [ebp-4h]
  int v30; // [esp+30h] [ebp-4h]
  int v31; // [esp+40h] [ebp+Ch]

  result = sub_100C6F00(this, a3);
  v31 = result;
  if ( result >= 0 && result < *((_DWORD *)this + 283) )
  {
    v5 = 76 * result;
    v6 = 76 * result + *((_DWORD *)this + 280);
    if ( (*(_BYTE *)v6 & 1) != 0 )
    {
      v7 = 0.0;
      if ( *(_DWORD *)(v6 + 12) != COERCE_INT(0.0) )
      {
        v8 = *(_DWORD *)(v6 + 72);
        if ( v8 )
        {
          if ( *(_BYTE *)(v8 + 84) )
          {
            *(_BYTE *)(v8 + 88) |= 1u;
          }
          else
          {
            v9 = *(_DWORD **)(v8 + 24);
            if ( v9 )
            {
              *v9 |= 0x101u;
              v7 = 0.0;
              *(_WORD *)(sub_10153460(v9) + 2) = 0;
            }
          }
        }
        *(float *)(v6 + 12) = v7;
      }
      v10 = *((_DWORD *)this + 280);
      v29 = v7;
      v11 = (float *)(v5 + v10 + 16);
      if ( *(_DWORD *)v11 != LODWORD(v29) )
      {
        v12 = *(_DWORD *)(v5 + v10 + 72);
        if ( v12 )
        {
          if ( *(_BYTE *)(v12 + 84) )
          {
            *(_BYTE *)(v12 + 88) |= 1u;
          }
          else
          {
            v13 = *(_DWORD **)(v12 + 24);
            if ( v13 )
            {
              *v13 |= 0x101u;
              v7 = 0.0;
              *(_WORD *)(sub_10153460(v13) + 2) = 0;
            }
          }
        }
        *v11 = v7;
      }
      *(float *)(v5 + *((_DWORD *)this + 280) + 24) = 1.0;
      *(_DWORD *)(v5 + *((_DWORD *)this + 280) + 52) = -1;
      v14 = *((_DWORD *)this + 280);
      v15 = (int *)(v5 + v14 + 8);
      if ( *v15 != a2 )
      {
        v16 = *(_DWORD *)(v5 + v14 + 72);
        if ( v16 )
        {
          if ( *(_BYTE *)(v16 + 84) )
          {
            *(_BYTE *)(v16 + 88) |= 1u;
          }
          else
          {
            v17 = *(_DWORD **)(v16 + 24);
            if ( v17 )
            {
              *v17 |= 0x101u;
              v7 = 0.0;
              *(_WORD *)(sub_10153460(v17) + 2) = 0;
            }
          }
        }
        *v15 = a2;
      }
      v18 = *((_DWORD *)this + 280);
      v19 = (float *)(v5 + v18 + 20);
      if ( *(_DWORD *)v19 != COERCE_INT(1.0) )
      {
        v20 = *(_DWORD *)(v5 + v18 + 72);
        if ( v20 )
        {
          if ( *(_BYTE *)(v20 + 84) )
          {
            *(_BYTE *)(v20 + 88) |= 1u;
          }
          else
          {
            v21 = *(_DWORD **)(v20 + 24);
            if ( v21 )
            {
              *v21 |= 0x101u;
              v7 = 0.0;
              *(_WORD *)(sub_10153460(v21) + 2) = 0;
            }
          }
        }
        *v19 = 1.0;
      }
      *(float *)(v5 + *((_DWORD *)this + 280) + 28) = v7;
      *(float *)(v5 + *((_DWORD *)this + 280) + 32) = v7;
      *(_BYTE *)(v5 + *((_DWORD *)this + 280) + 4) = 0;
      *(float *)(v5 + *((_DWORD *)this + 280) + 64) = v7;
      v22 = dword_10700AC8;
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
      if ( !*((_DWORD *)this + 275) && sub_100D7240(this) )
        sub_100BD750(this);
      v23 = (_DWORD *)*((_DWORD *)this + 275);
      if ( !v23 || (v30 = *((_DWORD *)this + 275), !*v23) )
        v30 = 0;
      (*(void (__thiscall **)(int))(*(_DWORD *)v22 + 104))(v22);
      v24 = *((_DWORD *)this + 280);
      *(_BYTE *)(v24 + v5 + 5) = sub_100BA270(v30, a2) & 1;
      if ( *(_DWORD *)(dword_10695FE4 + 48) && (this[59] & 0x1000) != 0 )
      {
        v25 = *((_DWORD *)this + 280) + v5;
        v28 = *(float *)(v25 + 20);
        v27 = *(float *)(v25 + 12);
        v26 = sub_100BE1F0((int)this, *(_DWORD *)(v25 + 8));
        Msg(
          "%5.3f : adding %d (%d): %s : %5.3f (%.3f)\n",
          *(float *)(dword_106B31C8 + 12),
          v31,
          *(_DWORD *)(v25 + 60),
          v26,
          v27,
          v28);
        return v31;
      }
      else
      {
        return v31;
      }
    }
  }
  return result;
}
