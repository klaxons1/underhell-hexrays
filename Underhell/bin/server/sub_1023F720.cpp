int __stdcall sub_1023F720(int a1, _DWORD *a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  bool v4; // zf
  void (__thiscall *v5)(_DWORD *); // eax
  int v6; // eax
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // edi
  bool v13; // sf
  int v15; // [esp+4h] [ebp-Ch]
  _DWORD *v16; // [esp+8h] [ebp-8h]
  int v17; // [esp+Ch] [ebp-4h] BYREF
  int v18; // [esp+18h] [ebp+8h]

  v2 = a2;
  (*(void (__thiscall **)(_DWORD *))(*a2 + 20))(a2);
  v16 = *(_DWORD **)a1;
  v15 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 8) + 16) - 1;
  if ( v15 >= 0 )
  {
    do
    {
      v3 = sub_1042FCC0(108);
      if ( v3 )
      {
        *(_BYTE *)(v3 + 12) = 0;
        *(float *)v3 = 0.0;
        v18 = v3;
        *(float *)(v3 + 4) = 0.0;
        *(float *)(v3 + 8) = 0.0;
        *(float *)(v3 + 16) = 0.0;
        *(_BYTE *)(v3 + 28) = 0;
        *(float *)(v3 + 20) = 0.0;
        *(float *)(v3 + 24) = 0.0;
        *(_DWORD *)(v3 + 52) = -1;
        *(_DWORD *)(v3 + 76) = &CCopyRecipientFilter::`vftable';
        *(_DWORD *)(v3 + 80) = 0;
        *(_DWORD *)(v3 + 84) = 0;
        *(_DWORD *)(v3 + 88) = 0;
        *(_DWORD *)(v3 + 92) = 0;
        *(_DWORD *)(v3 + 96) = 0;
        *(_DWORD *)(v3 + 100) = 0;
        ++dword_106C5038;
        *(_DWORD *)(v3 + 44) = 0;
        *(_DWORD *)(v3 + 48) = 0;
        *(float *)(v3 + 104) = *(float *)(dword_106C505C + 44);
      }
      else
      {
        v18 = 0;
      }
      (*(void (__thiscall **)(_DWORD *))(*v2 + 20))(v2);
      v4 = (*(int (__thiscall **)(_DWORD *, int, int *))(*v2 + 8))(v2, v18, &dword_1064CA50) == 0;
      v5 = *(void (__thiscall **)(_DWORD *))(*v2 + 32);
      HIBYTE(a2) = !v4;
      v5(v2);
      if ( HIBYTE(a2) && *(_DWORD *)(v18 + 68) )
      {
        v6 = dword_1064CA9C;
        HIBYTE(a2) = 1;
        v7 = dword_1064CA9C;
        if ( dword_1064CA9C + 1 > dword_1064CA94 )
        {
          sub_102ABFC0(dword_1064CA9C - dword_1064CA94 + 1);
          v6 = dword_1064CA9C;
        }
        v8 = dword_1064CA90;
        dword_1064CA9C = v6 + 1;
        v9 = v6 - v7;
        dword_1064CAA0 = dword_1064CA90;
        if ( v9 > 0 )
        {
          memcpy((void *)(dword_1064CA90 + 4 * v7 + 4), (const void *)(dword_1064CA90 + 4 * v7), 4 * v9);
          v8 = dword_1064CA90;
        }
        v10 = (_DWORD *)(v8 + 4 * v7);
        if ( v10 )
          *v10 = v18;
      }
      else
      {
        HIBYTE(a2) = 0;
      }
      (*(void (__thiscall **)(_DWORD *))(*v2 + 20))(v2);
      if ( HIBYTE(a2) )
      {
        (*(void (__thiscall **)(_DWORD *, int *, int, _DWORD))(*v2 + 60))(v2, &v17, 1, 0);
        if ( --v17 >= 0 )
        {
          do
          {
            v11 = (_DWORD *)sub_1042FCC0(24);
            if ( v11 )
            {
              *v11 = 0;
              v11[1] = 0;
              v11[2] = 0;
              v11[3] = 0;
              v11[4] = 0;
              v11[5] = 0;
              v12 = v11;
            }
            else
            {
              v12 = 0;
            }
            (*(void (__thiscall **)(_DWORD *))(*v2 + 20))(v2);
            if ( (*(int (__thiscall **)(_DWORD *, _DWORD *, int *))(*v2 + 8))(v2, v12, &dword_1064CA68) )
            {
              *v12 = v18;
              a2 = v12;
              sub_1023EB90(&dword_1064CAA4, (int *)&a2);
            }
            (*(void (__thiscall **)(_DWORD *))(*v2 + 32))(v2);
            --v17;
          }
          while ( v17 >= 0 );
        }
      }
      (*(void (__thiscall **)(_DWORD *))(*v2 + 32))(v2);
      *v16 = v18;
      v13 = --v15 < 0;
      ++v16;
    }
    while ( !v13 );
  }
  return (*(int (__thiscall **)(_DWORD *))(*v2 + 32))(v2);
}
