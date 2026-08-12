int __thiscall sub_100F2580(_WORD *this, int a2)
{
  int v2; // esi
  int v3; // edi
  const char *v4; // ebx
  int v5; // edi
  const char *v6; // eax
  unsigned __int16 v7; // ax
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // cx
  int v10; // esi
  _WORD *v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  _DWORD *v15; // esi
  void *v16; // eax
  int v18; // [esp-4h] [ebp-24h]
  int v19; // [esp+Ch] [ebp-14h] BYREF
  unsigned int v20; // [esp+10h] [ebp-10h]
  void *Src; // [esp+14h] [ebp-Ch]
  _WORD *v22; // [esp+18h] [ebp-8h]
  _WORD *v23; // [esp+1Ch] [ebp-4h] BYREF

  v2 = a2;
  v3 = (int)(this + 780);
  v23 = this;
  v19 = a2;
  v20 = 0;
  Src = 0;
  v22 = this + 780;
  if ( sub_100EF460(this + 780, (int)&v19) == -1 )
  {
    v20 = *(_DWORD *)(v2 + 96);
    Src = (void *)sub_10184390((unsigned __int64)v20 >> 30 != 0 ? -1 : 4 * v20);
    memset(Src, 0, 4 * v20);
    a2 = 0;
    if ( *(int *)(v2 + 96) > 0 )
    {
      do
      {
        v4 = (const char *)(v2 + *(_DWORD *)(4 * a2 + *(_DWORD *)(v2 + 100) + v2));
        v5 = 0;
        if ( sub_100BF790((int)v23) <= 0 )
        {
LABEL_6:
          v5 = 0;
        }
        else
        {
          while ( 1 )
          {
            v6 = (const char *)sub_100BF7F0((int)v23, v5);
            if ( !_stricmp(v6, v4) )
              break;
            if ( ++v5 >= sub_100BF790((int)v23) )
              goto LABEL_6;
          }
        }
        *((_DWORD *)Src + a2++) = v5;
      }
      while ( a2 < *(_DWORD *)(v2 + 96) );
      v3 = (int)v22;
    }
    sub_100EEA20((_WORD *)v3, (int)&v19, (unsigned __int16 *)&v23, (_BYTE *)&a2 + 3);
    v7 = sub_100EEB10(v3);
    v8 = (unsigned __int16)v23;
    v9 = v7;
    v10 = 20 * v7;
    v11 = (_WORD *)(v10 + *(_DWORD *)(v3 + 4));
    v11[1] = -1;
    *v11 = -1;
    v11[2] = v8;
    v11[3] = 0;
    if ( v8 == 0xFFFF )
    {
      *(_WORD *)(v3 + 16) = v9;
    }
    else
    {
      v12 = 5 * v8;
      v13 = *(_DWORD *)(v3 + 4);
      if ( HIBYTE(a2) )
        *(_WORD *)(v13 + 4 * v12) = v9;
      else
        *(_WORD *)(v13 + 4 * v12 + 2) = v9;
    }
    sub_100EF6D0(v3, v9);
    v14 = *(_DWORD *)(v3 + 4);
    ++*(_WORD *)(v3 + 18);
    v15 = (_DWORD *)(v10 + v14 + 8);
    if ( v15 )
    {
      v18 = v15[2];
      *v15 = v19;
      sub_10184660(v18);
      v16 = (void *)sub_10184390((unsigned __int64)v20 >> 30 != 0 ? -1 : 4 * v20);
      v15[2] = v16;
      memcpy_0(v16, Src, 4 * v20);
      v15[1] = v20;
    }
  }
  return sub_10184660(Src);
}
