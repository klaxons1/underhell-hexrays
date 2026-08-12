_WORD *__thiscall sub_1007E930(int (__cdecl **this)(_DWORD), int a2, unsigned __int16 a3, int a4)
{
  bool v4; // zf
  int (__cdecl **v5)(_DWORD); // esi
  int v6; // eax
  int v7; // ecx
  unsigned __int16 v8; // bx
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // edi
  unsigned __int16 v14; // ax
  int (__cdecl *v15)(_DWORD); // ecx
  int v16; // edi
  unsigned __int16 v17; // bx
  _DWORD *v18; // esi
  int v19; // eax
  __int16 v20; // ax
  unsigned __int8 v21; // al
  int v22; // ecx
  long double v23; // st6
  long double v24; // st5
  long double v25; // st4
  long double v26; // st7
  unsigned __int8 v27; // di
  _WORD *result; // eax
  int (__cdecl *v29)(_DWORD); // eax
  int v30; // edi
  unsigned __int16 v31; // cx
  int v32; // eax
  _WORD *v33; // esi
  int v34; // ecx
  int v35; // eax
  int v36; // ecx
  int v37; // eax
  float v38; // [esp+18h] [ebp-38h]
  float v39[3]; // [esp+28h] [ebp-28h] BYREF
  float v40[3]; // [esp+34h] [ebp-1Ch] BYREF
  int v41; // [esp+40h] [ebp-10h]
  int v42; // [esp+44h] [ebp-Ch]
  _BYTE *v43; // [esp+48h] [ebp-8h]
  char v44; // [esp+4Eh] [ebp-2h]
  char v45; // [esp+4Fh] [ebp-1h]
  int i; // [esp+58h] [ebp+8h]
  unsigned __int16 v47; // [esp+5Ch] [ebp+Ch]

  v4 = *(_DWORD *)(dword_1042BA24 + 48) == 0;
  v5 = this;
  v43 = this;
  if ( v4 || (v4 = *(_DWORD *)(dword_1042BA6C + 48) == 0, v45 = 1, !v4) )
    v45 = 0;
  v6 = *(_DWORD *)(a4 + 4);
  v7 = *(_DWORD *)(v6 + 688160);
  if ( v7 >= 4096 )
  {
    (*(void (**)(int, int, const char *, ...))(*(_DWORD *)dword_1041315C + 116))(
      dword_1041315C,
      10,
      "Warning: overflowed CClientRenderablesList group %d",
      6);
    v8 = a3;
  }
  else
  {
    v8 = a3;
    v9 = v6 + 12 * v7 + 294920;
    *(_DWORD *)v9 = 0;
    *(_DWORD *)(v9 + 4) = a3;
    *(_WORD *)(v9 + 8) = 0;
    ++*(_DWORD *)(v6 + 688160);
  }
  v10 = *(_DWORD *)(a4 + 4);
  v11 = *(_DWORD *)(v10 + 688164);
  if ( v11 >= 4096 )
  {
    (*(void (**)(int, int, const char *, ...))(*(_DWORD *)dword_1041315C + 116))(
      dword_1041315C,
      10,
      "Warning: overflowed CClientRenderablesList group %d",
      7);
  }
  else
  {
    v12 = v10 + 12 * v11 + 344072;
    *(_DWORD *)v12 = 0;
    *(_WORD *)(v12 + 4) = v8;
    *(_WORD *)(v12 + 6) = 0;
    *(_WORD *)(v12 + 8) = 0;
    ++*(_DWORD *)(v10 + 688164);
  }
  v13 = a2;
  v14 = *(_WORD *)v5[45](a2);
  if ( v14 != 0xFFFF )
  {
    while ( 1 )
    {
      v15 = v5[8];
      v16 = 8 * v14;
      v17 = *(_WORD *)((char *)v5[26] + v16);
      v4 = v43[384] == 0;
      v41 = v16;
      v18 = (_DWORD *)((char *)v15 + 36 * v17);
      if ( v4 && (v18[6] & 2) != 0 )
        goto LABEL_44;
      if ( *((_BYTE *)v18 + 25) == 8 )
      {
        if ( *((unsigned __int16 *)v18 + 11) != a2 )
          goto LABEL_44;
      }
      else
      {
        v19 = *(_DWORD *)(a4 + 32);
        if ( v18[2] == v19 )
          goto LABEL_44;
        v18[2] = v19;
      }
      v4 = (*(_BYTE *)(a4 + 44) & 2) == 0;
      v44 = -1;
      if ( v4 || (v44 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v18 + 52))(*v18)) != 0 )
      {
        (*(void (__thiscall **)(_DWORD, float *, float *))(*(_DWORD *)*v18 + 84))(*v18, v39, v40);
        if ( !v45 || (v20 = *((_WORD *)v18 + 14), v20 == -1) )
        {
          if ( !(*(unsigned __int8 (__thiscall **)(int, float *, float *))(*(_DWORD *)dword_1041315C + 132))(
                  dword_1041315C,
                  v39,
                  v40) )
          {
LABEL_24:
            if ( (v18[6] & 8) == 0
              || !(*(unsigned __int8 (__thiscall **)(int, float *, float *))(*(_DWORD *)dword_1041315C + 272))(
                    dword_1041315C,
                    v39,
                    v40) )
            {
              v21 = *((_BYTE *)v18 + 25);
              if ( v21 == 8 )
              {
                if ( (v18[6] & 1) == 0 || (LOBYTE(v42) = 1, v44 != -1) )
                  LOBYTE(v42) = 0;
                v27 = v42;
                if ( (*(_BYTE *)(a4 + 44) & 2) != 0 )
                  sub_1007CEE0(*(_DWORD *)(a4 + 4), *v18, a3, 8, v17, v42);
                if ( (_BYTE)v42 )
                  sub_1007CEE0(*(_DWORD *)(a4 + 4), *v18, a3, 7, v17, v27);
                v16 = v41;
              }
              else
              {
                v22 = v21;
                if ( (unsigned int)v21 - 6 <= 1 )
                {
                  v23 = fabs(v40[0] - v39[0]);
                  v24 = fabs(v40[1] - v39[1]);
                  if ( v24 >= v23 )
                    v25 = v24;
                  else
                    v25 = v23;
                  v26 = fabs(v40[2] - v39[2]);
                  if ( v26 < v25 )
                  {
                    v26 = v24;
                    if ( v23 > v24 )
                      v26 = v23;
                  }
                  v38 = v26;
                  v22 = sub_1007CF50(v38);
                }
                sub_1007CEE0(*(_DWORD *)(a4 + 4), *v18, a3, v22, v17, 0);
              }
            }
          }
        }
        else if ( (*(unsigned __int8 (__thiscall **)(int, float *, float *, _DWORD))(*(_DWORD *)dword_1041315C + 228))(
                    dword_1041315C,
                    v39,
                    v40,
                    v20) )
        {
          goto LABEL_24;
        }
      }
LABEL_44:
      v14 = *(_WORD *)(v16 + *((_DWORD *)v43 + 26) + 6);
      v5 = (int (__cdecl **)(_DWORD))v43;
      if ( v14 == 0xFFFF )
      {
        v8 = a3;
        v13 = a2;
        break;
      }
    }
  }
  result = (_WORD *)a4;
  if ( (*(_BYTE *)(a4 + 44) & 1) != 0 )
  {
    result = (_WORD *)(*((int (__thiscall **)(int (__cdecl **)(_DWORD), int, _DWORD))*v5 + 11))(
                        v5,
                        v13,
                        *(_DWORD *)(a4 + 36));
    if ( (_BYTE)result )
    {
      v29 = v5[3];
      v30 = 2 * v13;
      v31 = *((_WORD *)v29 + 4 * v30 + 2);
      result = (_WORD *)(*((unsigned __int16 *)v29 + 4 * v30 + 3) - 1);
      v47 = v31;
      for ( i = (int)result; i >= 0; --i )
      {
        v32 = sub_100949D0();
        result = (_WORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v32 + 52))(v32, v47);
        v33 = result;
        if ( result )
        {
          result = (_WORD *)(*(int (__thiscall **)(_WORD *))(*(_DWORD *)result + 16))(result);
          if ( (_BYTE)result )
          {
            if ( (*(_BYTE *)(a4 + 44) & 2) != 0 )
            {
              result = (_WORD *)(*(int (__thiscall **)(_WORD *))(*(_DWORD *)v33 + 52))(v33);
              if ( (int)result > 0 )
              {
                v34 = *(_DWORD *)(a4 + 4);
                v35 = *(_DWORD *)(v34 + 688168);
                if ( v35 >= 4096 )
                {
                  result = (_WORD *)(*(int (**)(int, int, const char *, ...))(*(_DWORD *)dword_1041315C + 116))(
                                      dword_1041315C,
                                      10,
                                      "Warning: overflowed CClientRenderablesList group %d",
                                      8);
                }
                else
                {
                  result = (_WORD *)(v34 + 12 * v35 + 393224);
                  result[3] = 0;
                  *(_DWORD *)result = v33;
                  result[2] = v8;
                  result[4] = -2;
                  ++*(_DWORD *)(v34 + 688168);
                }
              }
            }
          }
          else
          {
            v36 = *(_DWORD *)(a4 + 4);
            v37 = *(_DWORD *)(v36 + 688164);
            if ( v37 >= 4096 )
            {
              result = (_WORD *)(*(int (**)(int, int, const char *, ...))(*(_DWORD *)dword_1041315C + 116))(
                                  dword_1041315C,
                                  10,
                                  "Warning: overflowed CClientRenderablesList group %d",
                                  7);
            }
            else
            {
              result = (_WORD *)(v36 + 12 * v37 + 344072);
              result[3] = 0;
              *(_DWORD *)result = v33;
              result[2] = v8;
              result[4] = -2;
              ++*(_DWORD *)(v36 + 688164);
            }
          }
        }
        ++v47;
      }
    }
  }
  return result;
}
