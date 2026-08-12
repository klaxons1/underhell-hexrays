int __thiscall sub_1006DFD0(_DWORD *this)
{
  int v2; // ebx
  int v3; // edx
  float *v4; // esi
  int v5; // ecx
  int v6; // ecx
  double v7; // st7
  double v8; // st6
  int v9; // edx
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // ebx
  double v13; // st5
  double v14; // st6
  double v15; // st5
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  double v19; // st7
  double v20; // st7
  int v21; // eax
  float v23; // [esp+14h] [ebp-30h]
  int v24; // [esp+28h] [ebp-1Ch]
  int v25; // [esp+2Ch] [ebp-18h]
  int v26; // [esp+30h] [ebp-14h]
  int v27; // [esp+34h] [ebp-10h]
  int v28; // [esp+38h] [ebp-Ch]
  int v29; // [esp+3Ch] [ebp-8h]

  nullsub_4();
  v29 = (int)(this + 882);
  v2 = 0;
  v3 = -60 - (_DWORD)this;
  v27 = 0;
  v4 = (float *)(this + 1490);
  do
  {
    if ( 0.0 == *v4 )
      goto LABEL_45;
    if ( !*((_BYTE *)this + v2 + 5920) )
    {
      if ( v2 < this[297] )
        v5 = *(_DWORD *)((char *)v4 + (_DWORD)this + v3 - 12);
      else
        v5 = 0;
      v6 = this[8 * v5 + 1400 + v2];
      v25 = v6;
      if ( v6 <= 0 )
      {
LABEL_34:
        if ( dword_10412D50
          && (*(unsigned __int8 (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10412D50 + 160))(
               dword_10412D50,
               *((_DWORD *)v4 - 26),
               v2) )
        {
          v19 = *(float *)&this[8 * *((_DWORD *)v4 - 26) + 536 + v2]
              / *(float *)(dword_104387C4 + 44)
              * (*((float *)off_103DC81C + 3) - v4[8]);
          if ( dword_10412D50 && *(_BYTE *)(dword_10412D50 + 44) )
            v19 = v19 * 6.0;
          v20 = v19 + *v4;
        }
        else
        {
          v20 = 0.0;
        }
        *v4 = v20;
        *((_BYTE *)this + v2 + 6024) = 0;
        goto LABEL_42;
      }
      v7 = *((float *)off_103DC81C + 3) - v4[8];
      v8 = v7;
      if ( *(_DWORD *)(dword_104386EC + 48) == 1 )
      {
        v9 = 1;
        if ( v6 <= 1 )
          goto LABEL_17;
        if ( v6 - 1 >= 4 )
        {
          v10 = 3;
          v11 = ((unsigned int)(v6 - 5) >> 2) + 1;
          v28 = 3;
          v9 = 4 * v11 + 1;
          do
          {
            v26 = v10 + 1;
            v12 = v10 + 2;
            v13 = v7 / (double)(v10 - 1);
            v10 += 4;
            --v11;
            v14 = v8 + v13;
            v15 = (double)v28;
            v28 = v10;
            v8 = v14 + v7 / v15 + v7 / (double)v26 + v7 / (double)v12;
          }
          while ( v11 );
          v6 = v25;
          v2 = v27;
        }
        v7 = v8;
        if ( v9 >= v6 )
        {
LABEL_17:
          v3 = -60 - (_DWORD)this;
        }
        else
        {
          do
            v7 = v7 + (*((float *)off_103DC81C + 3) - v4[8]) / (double)++v9;
          while ( v9 < v6 );
          v3 = -60 - (_DWORD)this;
        }
      }
      v16 = this[297];
      if ( v2 < v16 )
        v17 = *(_DWORD *)((char *)v4 + (_DWORD)this + v3 - 12);
      else
        v17 = 0;
      if ( v17 == *((_DWORD *)v4 - 26) )
      {
        *v4 = *v4 - v7;
        if ( !*((_BYTE *)this + v2 + 6024) )
        {
          v18 = sub_100422D0();
          if ( v18 )
          {
            if ( *((_DWORD *)v4 - 26)
              && (*(int (__thiscall **)(int))(*(_DWORD *)v18 + 296))(v18) != *((_DWORD *)v4 - 26)
              && *((_DWORD *)v4 - 616) == 1
              && v4[18] + 5.0 < *((float *)off_103DC81C + 3) )
            {
              sub_101212D0(v29, 0.0, 0);
              *((_BYTE *)this + v2 + 6024) = 1;
              v4[18] = *((float *)off_103DC81C + 3);
            }
          }
        }
      }
      else
      {
        if ( v2 >= v16 || *((_DWORD *)v4 - 8) || v2 >= v16 || !*(_DWORD *)((char *)v4 + (_DWORD)this + v3 - 12) )
          goto LABEL_34;
        *v4 = v7 + *v4;
      }
    }
LABEL_42:
    v21 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_104131A8 + 24))(
            dword_104131A8,
            "controlpoint_updatelayout",
            0);
    v24 = v21;
    if ( v21 )
    {
      (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)v21 + 40))(v21, "index", v2);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_104131A8 + 32))(dword_104131A8, v24);
    }
    v3 = -60 - (_DWORD)this;
    v4[8] = *((float *)off_103DC81C + 3);
LABEL_45:
    v29 += 255;
    ++v2;
    ++v4;
    v27 = v2;
  }
  while ( v2 < 8 );
  v23 = *((float *)off_103DC81C + 3) + 0.1;
  return (*(int (__stdcall **)(_DWORD))(*(this - 3) + 408))(LODWORD(v23));
}
